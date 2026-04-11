package net.marwanaziz.cityscoutshared

import kotlinx.coroutines.flow.StateFlow

interface CityWeatherViewModel {
    val remote: Remote
    val title: StateFlow<String>
    val country: StateFlow<String>
    val weatherConditionText: StateFlow<String>
    val weatherConditionIcon: StateFlow<String?>
    val weatherTemp: StateFlow<String>
    val weatherHumidity: StateFlow<String>
    val weatherWindSpeed: StateFlow<String>
    val weatherFeelsLike: StateFlow<String>
    val weatherVisibility: StateFlow<String>
    val forecasts: StateFlow<List<WeatherForecastViewModel>>
    val weatherError: StateFlow<String>
    val loading: StateFlow<Boolean>
    val isCelsius: StateFlow<Boolean>
    suspend fun checkWeather(city: SearchCityResult)
    fun toggleTemperatureFormat()
}