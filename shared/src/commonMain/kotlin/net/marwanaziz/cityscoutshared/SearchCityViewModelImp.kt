package net.marwanaziz.cityscoutshared

import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow

class SearchCityViewModelImp(
    override val remote: Remote,
): SearchCityViewModel {
    private val _searchCityResult = MutableStateFlow<List<SearchCityResult>>(emptyList())
    override val searchCityResult = _searchCityResult.asStateFlow()
    private val _searchError = MutableStateFlow("")
    override val searchError = _searchError.asStateFlow()
    private val _loading = MutableStateFlow(false)
    override val loading = _loading.asStateFlow()

    override suspend fun searchCity(city: String) {
        if (_loading.value) return
        _loading.value = true
        val searchResult = remote.searchForCity(city)
        when (searchResult) {
            is RemoteResult.Success -> {
                _searchCityResult.value = searchResult.data
                _searchError.value = ""
                _loading.value = false
            }
            is RemoteResult.Error -> {
                _searchCityResult.value = emptyList()
                _searchError.value = searchResult.message ?: ""
                _loading.value = false
            }
        }
    }
}