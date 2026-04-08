package net.marwanaziz.cityscoutshared

data class SearchCityResult(
    val name: String,
    val country: String,
    val lat: Double,
    val lon: Double
)

data class WeatherResult(
    val name: String,
    val country: String,
    val lat: Double,
    val lon: Double
)

sealed class RemoteResult<out T> {
    data class Success<T>(val data: T) : RemoteResult<T>()
    data class Error(val message: String?) : RemoteResult<Nothing>()
}

interface Remote {
    val remoteKeys: RemoteKeys
    suspend fun searchForCity(city: String): RemoteResult<List<SearchCityResult>>
    suspend fun checkWeatherForCity(city: SearchCityResult): RemoteResult<WeatherResult>
}