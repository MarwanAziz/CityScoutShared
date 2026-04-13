package net.marwanaziz.cityscoutshared

import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlin.math.roundToInt

internal class CityWeatherViewModelImp(
    val remote: Remote = RemoteImp(RemoteKeys),
    val cityScoutLocal: CityScoutLocal = CityScoutLocalImp()
) : CityWeatherViewModel {
    private val _title = MutableStateFlow("")
    override val title = _title.asStateFlow()
    private val _country = MutableStateFlow("")
    override val country = _country.asStateFlow()
    private val _weatherConditionText = MutableStateFlow("")
    override val weatherConditionText = _weatherConditionText.asStateFlow()
    private val _weatherConditionIcon = MutableStateFlow<String?>(null)
    override val weatherConditionIcon = _weatherConditionIcon.asStateFlow()
    private val _weatherTemp = MutableStateFlow("")
    override val weatherTemp = _weatherTemp.asStateFlow()
    private val _weatherHumidity = MutableStateFlow("")
    override val weatherHumidity = _weatherHumidity.asStateFlow()
    private val _weatherWindSpeed = MutableStateFlow("")
    override val weatherWindSpeed = _weatherWindSpeed.asStateFlow()
    private val _weatherFeelsLike = MutableStateFlow("")
    override val weatherFeelsLike = _weatherFeelsLike.asStateFlow()
    private val _weatherVisibility = MutableStateFlow("")
    override val weatherVisibility = _weatherVisibility.asStateFlow()
    private val _forecasts = MutableStateFlow<List<WeatherForecastViewModel>>(emptyList())
    override val forecasts = _forecasts.asStateFlow()


    private val _weatherError = MutableStateFlow("")
    override val weatherError = _weatherError.asStateFlow()
    private val _loading = MutableStateFlow(false)
    override val loading = _loading.asStateFlow()
    private val _isCelsius = MutableStateFlow(true)
    override val isCelsius = _isCelsius.asStateFlow()
    private var lastWeatherResult: WeatherResult? = null

    private fun handleWeatherResult(weatherResult: WeatherResult) {
        lastWeatherResult = weatherResult
        val useCelsius = _isCelsius.value
        val useImperial = cityScoutLocal.isImperialLocale

        updateLocation(weatherResult)
        updateCurrentWeather(weatherResult.weather?.current, useCelsius, useImperial)
        updateForecast(weatherResult.weather, useCelsius, useImperial)
        _weatherError.value = ""
    }

    private fun updateLocation(weatherResult: WeatherResult) {
        _title.value = weatherResult.city
        _country.value = weatherResult.country
    }

    private fun updateCurrentWeather(current: CurrentWeather?, useCelsius: Boolean, useImperial: Boolean) {
        _weatherConditionText.value = current?.condition?.text.orEmpty()
        _weatherConditionIcon.value = current?.condition?.icon
        _weatherTemp.value = buildTemperatureLabel(current?.tempC, current?.tempF, useCelsius)
        _weatherFeelsLike.value = buildFeelsLikeLabel(current?.feelslikeC, current?.feelslikeF, useCelsius)
        _weatherHumidity.value = buildHumidityLabel(current?.humidity)
        _weatherWindSpeed.value = buildWindLabel(current?.windKph, current?.windMph, useImperial)
        _weatherVisibility.value = buildVisibilityLabel(current?.visiKm, current?.visiMiles, useImperial)
    }

    private fun updateForecast(weather: WeatherAndForecast?, useCelsius: Boolean, useImperial: Boolean) {
        val days = weather?.forecast?.forecastday.orEmpty()
        _forecasts.value = days.filterNotNull().map { day ->
            createForecastViewModel(day, weather, useCelsius, useImperial)
        }
    }

    private fun createForecastViewModel(
        day: WeatherDay,
        weather: WeatherAndForecast?,
        useCelsius: Boolean,
        useImperial: Boolean
    ): WeatherForecastViewModel {
        return object : WeatherForecastViewModel {
            override val weatherForecast: WeatherAndForecast? = weather
            override val weatherConditionText = day.condition?.text.orEmpty()
            override val weatherConditionIcon = day.condition?.icon
            override val weatherMaxTemp = buildTemperatureLabel(day.maxtempC, day.maxtempF, useCelsius)
            override val weatherMinTemp = buildTemperatureLabel(day.mintempC, day.mintempF, useCelsius)
            override val weatherHumidity= buildHumidityLabel(day.humidity)
            override val weatherWindSpeed= buildWindLabel(day.windKph, day.windMph, useImperial)
            override val dayOfWeek: String = cityScoutLocal.dateUtility.dayOfWeekFromEpoch(day.date)
        }
    }

    override fun toggleTemperatureFormat() {
        _isCelsius.value = !_isCelsius.value
        lastWeatherResult?.let { handleWeatherResult(it) }
    }

    private fun buildTemperatureLabel(c: Double?, f: Double?, useCelsius: Boolean): String {
        val value = if (useCelsius) c else f
        val unit = if (useCelsius) "C" else "F"
        return if (value == null) "" else "${value.roundToInt()}°$unit"
    }

    private fun buildFeelsLikeLabel(c: Double?, f: Double?, useCelsius: Boolean): String {
        val tempLabel = buildTemperatureLabel(c, f, useCelsius)
        return if (tempLabel.isEmpty()) "" else "Feels like $tempLabel"
    }

    private fun buildHumidityLabel(humidity: Int?): String {
        return if (humidity == null) "" else "$humidity%"
    }

    private fun buildWindLabel(kph: Double?, mph: Double?, imperial: Boolean): String {
        val speed = if (imperial) mph else kph
        val unit = if (imperial) "mph" else "km/h"
        return if (speed == null) "" else "${speed.roundToInt()} $unit"
    }

    private fun buildVisibilityLabel(km: Double?, miles: Double?, imperial: Boolean): String {
        val visibility = if (imperial) miles else km
        val unit = if (imperial) "mi" else "km"
        return if (visibility == null) "" else "${visibility.roundToInt()} $unit"
    }

    override suspend fun checkWeather(city: SearchCityResult) {
        _loading.value = true
        val weatherResult = remote.checkWeatherForCity(city)
        when (weatherResult) {
            is RemoteResult.Success -> {
                handleWeatherResult(weatherResult.data)
            }
            is RemoteResult.Error -> {
                _weatherError.value = weatherResult.message ?: ""
            }
        }
        _loading.value = false
    }
}