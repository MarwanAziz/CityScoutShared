package net.marwanaziz.cityscoutshared

import kotlinx.coroutines.flow.StateFlow

interface WeatherForecastViewModel {
    val weatherForecast: WeatherAndForecast?
    val weatherConditionText: StateFlow<String>
    val weatherConditionIcon: StateFlow<String?>
    val weatherMaxTemp: StateFlow<String>
    val weatherMinTemp: StateFlow<String>
    val weatherHumidity: StateFlow<String>
    val weatherWindSpeed: StateFlow<String>
    val dayOfWeek: String
}