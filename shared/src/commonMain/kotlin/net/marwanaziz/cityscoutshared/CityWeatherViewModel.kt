package net.marwanaziz.cityscoutshared

import com.rickclephas.kmp.nativecoroutines.NativeCoroutines
import kotlinx.coroutines.flow.StateFlow

interface CityWeatherViewModel {
    @NativeCoroutines
    val title: StateFlow<String>
    @NativeCoroutines
    val country: StateFlow<String>
    @NativeCoroutines
    val weatherConditionText: StateFlow<String>
    @NativeCoroutines
    val weatherConditionIcon: StateFlow<String?>
    @NativeCoroutines
    val weatherConditionCode: StateFlow<Int?>
    @NativeCoroutines
    val weatherTemp: StateFlow<String>
    @NativeCoroutines
    val weatherHumidity: StateFlow<String>
    @NativeCoroutines
    val weatherWindSpeed: StateFlow<String>
    @NativeCoroutines
    val weatherFeelsLike: StateFlow<String>
    @NativeCoroutines
    val weatherVisibility: StateFlow<String>
    @NativeCoroutines
    val forecasts: StateFlow<List<WeatherForecastViewModel>>
    @NativeCoroutines
    val weatherError: StateFlow<String>
    @NativeCoroutines
    val loading: StateFlow<Boolean>
    @NativeCoroutines
    val isCelsius: StateFlow<Boolean>
    @NativeCoroutines
    suspend fun checkWeather(city: SearchCityResult)
    fun toggleTemperatureFormat()
}