package net.marwanaziz.cityscoutshared

import com.rickclephas.kmp.nativecoroutines.NativeCoroutines
import kotlinx.coroutines.flow.StateFlow

interface SearchCityViewModel {
    @NativeCoroutines
    val searchCityResult: StateFlow<List<SearchCityResult>>
    @NativeCoroutines
    val searchError: StateFlow<String>
    @NativeCoroutines
    val loading: StateFlow<Boolean>

    @NativeCoroutines
    suspend fun searchCity(city: String)
}