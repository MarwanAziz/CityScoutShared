package net.marwanaziz.cityscoutshared

import kotlinx.coroutines.flow.StateFlow

interface WeatherForecastViewModel {
    val weatherForecast: WeatherAndForecast?
    val weatherConditionText: String
    val weatherConditionIcon: String?
    val weatherMaxTemp: String
    val weatherMinTemp: String
    val weatherHumidity: String
    val weatherWindSpeed: String
    val dayOfWeek: String
}