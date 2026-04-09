package net.marwanaziz.cityscoutshared

import kotlinx.coroutines.test.runTest
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertFalse
import kotlin.test.assertTrue

class CityWeatherViewModelImpTest {

    @Test
    fun checkWeather_success_updatesLocationAndCurrentWeather_metricLocale() = runTest {
        val weather = sampleWeatherAndForecast()
        val remote = FakeRemote(RemoteResult.Success(sampleWeatherResult(weather)))
        val dateUtility = FakeDateUtility("Localized Monday")
        val local = FakeCityScoutLocal(isImperialLocale = false, dateUtility = dateUtility)
        val viewModel = CityWeatherViewModelImp(
            remote = remote,
            cityScoutLocal = local,
        )

        viewModel.checkWeather(SearchCityResult("Cairo", "Egypt", 30.0, 31.0))

        assertEquals("Cairo", viewModel.title.value)
        assertEquals("Egypt", viewModel.country.value)
        assertEquals("Sunny", viewModel.weatherConditionText.value)
        assertEquals("//icon.png", viewModel.weatherConditionIcon.value)
        assertEquals("20°C", viewModel.weatherTemp.value)
        assertEquals("Feels like 19°C", viewModel.weatherFeelsLike.value)
        assertEquals("50%", viewModel.weatherHumidity.value)
        assertEquals("16 km/h", viewModel.weatherWindSpeed.value)
        assertEquals("10 km", viewModel.weatherVisibility.value)
        assertEquals("", viewModel.weatherError.value)
        assertFalse(viewModel.loading.value)
        assertTrue(viewModel.isCelsius.value)
        assertEquals(1, viewModel.forecasts.value.size)
        val forecast = viewModel.forecasts.value.first()
        assertEquals("Partly cloudy", forecast.weatherConditionText.value)
        assertEquals("25°C", forecast.weatherMaxTemp.value)
        assertEquals("15°C", forecast.weatherMinTemp.value)
        assertEquals("60%", forecast.weatherHumidity.value)
        assertEquals("20 km/h", forecast.weatherWindSpeed.value)
        assertEquals("Localized Monday", forecast.dayOfWeek)
        assertEquals(listOf<Int?>(0), dateUtility.requestedEpochs)
    }

    @Test
    fun checkWeather_success_usesImperialUnitsWhenLocaleImperial() = runTest {
        val weather = sampleWeatherAndForecast()
        val remote = FakeRemote(RemoteResult.Success(sampleWeatherResult(weather)))
        val local = FakeCityScoutLocal(isImperialLocale = true)
        val viewModel = CityWeatherViewModelImp(remote = remote, cityScoutLocal = local)

        viewModel.checkWeather(SearchCityResult("NYC", "US", 40.0, -74.0))

        assertEquals("10 mph", viewModel.weatherWindSpeed.value)
        assertEquals("6 mi", viewModel.weatherVisibility.value)
        val forecast = viewModel.forecasts.value.first()
        assertEquals("12 mph", forecast.weatherWindSpeed.value)
    }

    @Test
    fun checkWeather_error_setsMessageAndClearsOnLaterSuccess() = runTest {
        val remote = FakeRemote(
            first = RemoteResult.Error("network down"),
            second = RemoteResult.Success(sampleWeatherResult(sampleWeatherAndForecast())),
        )
        val viewModel = CityWeatherViewModelImp(remote = remote, cityScoutLocal = FakeCityScoutLocal(false))

        viewModel.checkWeather(SearchCityResult("X", "Y", 0.0, 0.0))
        assertEquals("network down", viewModel.weatherError.value)

        viewModel.checkWeather(SearchCityResult("X", "Y", 0.0, 0.0))
        assertEquals("", viewModel.weatherError.value)
    }

    @Test
    fun toggleTemperatureFormat_switchesLabels() = runTest {
        val remote = FakeRemote(RemoteResult.Success(sampleWeatherResult(sampleWeatherAndForecast())))
        val viewModel = CityWeatherViewModelImp(remote = remote, cityScoutLocal = FakeCityScoutLocal(false))

        viewModel.checkWeather(SearchCityResult("Cairo", "Egypt", 0.0, 0.0))
        assertEquals("20°C", viewModel.weatherTemp.value)

        viewModel.toggleTemperatureFormat()
        assertFalse(viewModel.isCelsius.value)
        assertEquals("68°F", viewModel.weatherTemp.value)
        assertEquals("Feels like 66°F", viewModel.weatherFeelsLike.value)

        viewModel.toggleTemperatureFormat()
        assertTrue(viewModel.isCelsius.value)
        assertEquals("20°C", viewModel.weatherTemp.value)
    }

    private fun sampleWeatherResult(weather: WeatherAndForecast): WeatherResult {
        return WeatherResult(
            city = "Cairo",
            country = "Egypt",
            lat = 30.0,
            lon = 31.0,
            weather = weather,
        )
    }

    private fun sampleWeatherAndForecast(): WeatherAndForecast {
        val current = CurrentWeather(
            condition = WeatherCondition(text = "Sunny", icon = "//icon.png", code = 1000),
            tempC = 20.0,
            tempF = 68.0,
            humidity = 50,
            windMph = 10.0,
            windKph = 16.0,
            windDir = "N",
            feelslikeC = 19.0,
            feelslikeF = 66.0,
            visiMiles = 6.0,
            visiKm = 10.0,
            isDay = 1,
            cloud = 0,
        )
        val day = WeatherDay(
            date = 0,
            maxtempC = 25.0,
            maxtempF = 77.0,
            mintempC = 15.0,
            mintempF = 59.0,
            humidity = 60,
            windMph = 12.0,
            windKph = 20.0,
            windDir = "NE",
            condition = WeatherCondition(text = "Partly cloudy", icon = "//fc.png", code = 1003),
        )
        return WeatherAndForecast(
            current = current,
            forecast = WeatherForecast(forecastday = listOf(day)),
        )
    }

    private class FakeRemote(
        private val first: RemoteResult<WeatherResult>,
        private val second: RemoteResult<WeatherResult>? = null,
    ) : Remote {
        override val remoteKeys: RemoteKeys = RemoteKeys
        private var callIndex = 0

        override suspend fun searchForCity(city: String): RemoteResult<List<SearchCityResult>> {
            return RemoteResult.Error("unused")
        }

        override suspend fun checkWeatherForCity(city: SearchCityResult): RemoteResult<WeatherResult> {
            val idx = callIndex++
            return if (idx == 0) {
                first
            } else {
                second ?: first
            }
        }
    }

    private class FakeCityScoutLocal(
        override val isImperialLocale: Boolean,
        override val dateUtility: DateUtility = FakeDateUtility("Any"),
    ) : CityScoutLocal

    private class FakeDateUtility(
        private val dayName: String,
    ) : DateUtility {
        val requestedEpochs = mutableListOf<Int?>()

        override fun dayOfWeekFromEpoch(epochSeconds: Int?): String {
            requestedEpochs += epochSeconds
            return dayName
        }
    }
}
