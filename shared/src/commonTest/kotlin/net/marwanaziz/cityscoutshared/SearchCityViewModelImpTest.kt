package net.marwanaziz.cityscoutshared

import kotlinx.coroutines.CompletableDeferred
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.async
import kotlinx.coroutines.yield
import kotlinx.coroutines.test.runTest
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertFalse
import kotlin.test.assertTrue

@OptIn(ExperimentalCoroutinesApi::class)
class SearchCityViewModelImpTest {

    @Test
    fun searchCity_updatesStateOnSuccess() = runTest {
        val expectedResults = listOf(
            SearchCityResult("Cairo", "EG", 0.0, 0.0)
        )
        val remote = FakeRemote(searchResult = RemoteResult.Success(expectedResults))
        val viewModel = SearchCityViewModelImp(remote)

        viewModel.searchCity("Cairo")

        assertEquals(expectedResults, viewModel.searchCityResult.value)
        assertEquals("", viewModel.searchError.value)
        assertFalse(viewModel.loading.value)
    }

    @Test
    fun searchCity_updatesStateOnError() = runTest {
        val remote = FakeRemote(searchResult = RemoteResult.Error("boom"))
        val viewModel = SearchCityViewModelImp(remote)

        viewModel.searchCity("Cairo")

        assertTrue(viewModel.searchCityResult.value.isEmpty())
        assertEquals("boom", viewModel.searchError.value)
        assertFalse(viewModel.loading.value)
    }

    @Test
    fun searchCity_ignoresSecondCallWhileLoading() = runTest {
        val gate = CompletableDeferred<Unit>()
        val remote = BlockingFakeRemote(gate)
        val viewModel = SearchCityViewModelImp(remote)

        val firstCall = async { viewModel.searchCity("Cairo") }
        yield()

        viewModel.searchCity("Alexandria")

        assertEquals(listOf("Cairo"), remote.searchCalls)
        assertTrue(viewModel.loading.value)

        gate.complete(Unit)
        firstCall.await()
        assertFalse(viewModel.loading.value)
    }

    private class FakeRemote(
        private val searchResult: RemoteResult<List<SearchCityResult>>,
    ) : Remote {
        override val remoteKeys: RemoteKeys = RemoteKeys

        override suspend fun searchForCity(city: String): RemoteResult<List<SearchCityResult>> = searchResult

        override suspend fun checkWeatherForCity(city: SearchCityResult): RemoteResult<WeatherResult> {
            return RemoteResult.Error("unused")
        }
    }

    private class BlockingFakeRemote(
        private val gate: CompletableDeferred<Unit>,
    ) : Remote {
        override val remoteKeys: RemoteKeys = RemoteKeys
        val searchCalls = mutableListOf<String>()

        override suspend fun searchForCity(city: String): RemoteResult<List<SearchCityResult>> {
            searchCalls += city
            gate.await()
            return RemoteResult.Success(emptyList())
        }

        override suspend fun checkWeatherForCity(city: SearchCityResult): RemoteResult<WeatherResult> {
            return RemoteResult.Error("unused")
        }
    }
}
