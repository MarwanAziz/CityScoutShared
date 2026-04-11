package net.marwanaziz.cityscoutshared

data class SearchCityResult(
    val name: String,
    val country: String,
    val lat: Double,
    val lon: Double
)

data class WeatherCondition(
    val text: String? = null,
    val icon: String? = null,
    val code: Int? = null,
)

data class CurrentWeather(
    val condition: WeatherCondition?,
    val tempC: Double?,
    val tempF: Double?,
    val humidity: Int?,
    val windMph: Double?,
    val windKph: Double?,
    val windDir: String?,
    val feelslikeC: Double?,
    val feelslikeF: Double?,
    val visiMiles: Double?,
    val visiKm: Double?,
    val isDay: Int?,
    val cloud: Int?
)

data class WeatherForecast(
    val forecastday: List<WeatherDay?>
)

data class WeatherAndForecast(
    val current: CurrentWeather?,
    val forecast: WeatherForecast?
)

data class WeatherDay(
    val date: Int?,
    val maxtempC: Double?,
    val maxtempF: Double?,
    val mintempC: Double?,
    val mintempF: Double?,
    val humidity: Int?,
    val windMph: Double?,
    val windKph: Double?,
    val windDir: String?,
    val condition: WeatherCondition?
)

data class WeatherResult(
    val city: String,
    val country: String,
    val lat: Double,
    val lon: Double,
    val weather: WeatherAndForecast?
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