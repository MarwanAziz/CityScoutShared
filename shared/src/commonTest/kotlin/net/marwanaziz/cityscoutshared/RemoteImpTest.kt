package net.marwanaziz.cityscoutshared

import net.marwanaziz.cityscoutremote.City
import net.marwanaziz.cityscoutremote.CityScoutRemote
import net.marwanaziz.cityscoutremote.CityScoutRemoteError
import net.marwanaziz.cityscoutremote.CityScoutRemoteResult
import net.marwanaziz.cityscoutremote.Location
import net.marwanaziz.cityscoutremote.Weather
import kotlinx.coroutines.test.runTest
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertIs

class RemoteImpTest {

    @Test
    fun searchForCity_mapsSuccessfulResponse() = runTest {
        val fakeRemote = FakeCityScoutRemote(
            searchResult = CityScoutRemoteResult.Success(
                listOf(
                    City(name = "Cairo", country = "Egypt"),
                    City(city = "Alexandria", country = "Egypt"),
                )
            ),
            weatherResult = CityScoutRemoteResult.Failure(CityScoutRemoteError.UnknownError),
        )
        val remote = RemoteImp(RemoteKeys, fakeRemote)

        val result = remote.searchForCity("Eg")

        val success = assertIs<RemoteResult.Success<List<SearchCityResult>>>(result)
        assertEquals(
            listOf(
                SearchCityResult("Cairo", "Egypt", 0.0, 0.0),
                SearchCityResult("Alexandria", "Egypt", 0.0, 0.0),
            ),
            success.data
        )
    }

    @Test
    fun searchForCity_mapsFailureResponse() = runTest {
        val fakeRemote = FakeCityScoutRemote(
            searchResult = CityScoutRemoteResult.Failure(CityScoutRemoteError.Timeout),
            weatherResult = CityScoutRemoteResult.Failure(CityScoutRemoteError.UnknownError),
        )
        val remote = RemoteImp(RemoteKeys, fakeRemote)

        val result = remote.searchForCity("Eg")

        val error = assertIs<RemoteResult.Error>(result)
        assertEquals(CityScoutRemoteError.Timeout.description, error.message)
    }

    @Test
    fun checkWeatherForCity_mapsSuccessfulResponse() = runTest {
        val fakeRemote = FakeCityScoutRemote(
            searchResult = CityScoutRemoteResult.Failure(CityScoutRemoteError.UnknownError),
            weatherResult = CityScoutRemoteResult.Success(
                Weather(location = Location(name = "Cairo", country = "Egypt", lat = 30.0, lon = 31.0))
            ),
        )
        val remote = RemoteImp(RemoteKeys, fakeRemote)

        val result = remote.checkWeatherForCity(SearchCityResult("Cairo", "Egypt", 0.0, 0.0))

        val success = assertIs<RemoteResult.Success<WeatherResult>>(result)
        assertEquals(
            WeatherResult(
                city = "Cairo",
                country = "Egypt",
                lat = 30.0,
                lon = 31.0,
                weather = WeatherAndForecast(current = null, forecast = null),
            ),
            success.data,
        )
    }

    @Test
    fun checkWeatherForCity_mapsFailureResponse() = runTest {
        val fakeRemote = FakeCityScoutRemote(
            searchResult = CityScoutRemoteResult.Failure(CityScoutRemoteError.UnknownError),
            weatherResult = CityScoutRemoteResult.Failure(CityScoutRemoteError.Forbidden),
        )
        val remote = RemoteImp(RemoteKeys, fakeRemote)

        val result = remote.checkWeatherForCity(SearchCityResult("Cairo", "Egypt", 0.0, 0.0))

        val error = assertIs<RemoteResult.Error>(result)
        assertEquals(CityScoutRemoteError.Forbidden.description, error.message)
    }

    private class FakeCityScoutRemote(
        private val searchResult: CityScoutRemoteResult<List<City>>,
        private val weatherResult: CityScoutRemoteResult<Weather>,
    ) : CityScoutRemote {
        override suspend fun searchForCity(query: String): CityScoutRemoteResult<List<City>> = searchResult

        override suspend fun getCityWeather(city: City): CityScoutRemoteResult<Weather> = weatherResult
    }
}
