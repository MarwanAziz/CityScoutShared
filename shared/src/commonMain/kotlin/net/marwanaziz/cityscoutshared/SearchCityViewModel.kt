package net.marwanaziz.cityscoutshared

import kotlinx.coroutines.flow.StateFlow

interface SearchCityViewModel {
    val remote: Remote
    val searchCityResult: StateFlow<List<SearchCityResult>>
    val searchError: StateFlow<String>
    val loading: StateFlow<Boolean>
    suspend fun searchCity(city: String)
}