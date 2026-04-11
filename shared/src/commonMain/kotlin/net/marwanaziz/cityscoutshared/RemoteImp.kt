package net.marwanaziz.cityscoutshared

import net.marwanaziz.cityscoutremote.City
import net.marwanaziz.cityscoutremote.CityScoutRemote
import net.marwanaziz.cityscoutremote.CityScoutRemoteApiKeys
import net.marwanaziz.cityscoutremote.CityScoutRemoteFactory
import net.marwanaziz.cityscoutremote.CityScoutRemoteResult
import net.marwanaziz.cityscoutremote.Current
import net.marwanaziz.cityscoutremote.Forecast
import net.marwanaziz.cityscoutremote.Weather
import net.marwanaziz.cityscoutshared.RemoteResult.*

internal class RemoteImp(
    override val remoteKeys: RemoteKeys,
    private val cityRemote: CityScoutRemote = CityScoutRemoteFactory.create(
        CityScoutRemoteApiKeys(
            remoteKeys.rapidApiKey,
            remoteKeys.weatherApiKey
        )
    )
) : Remote {

    private fun City.mapToSearchCityResult(): SearchCityResult {
        return SearchCityResult(
            name = name ?: city ?: "",
            country = country ?: "",
            lat = latitude ?: 0.0,
            lon = longitude ?: 0.0
        )
    }

    override suspend fun searchForCity(city: String): RemoteResult<List<SearchCityResult>> {
        val result = cityRemote.searchForCity(city)
        val remoteResult = when (result) {
            is CityScoutRemoteResult.Failure -> Error(result.description)
            is CityScoutRemoteResult.Success -> Success(result.data.map { cityRemote ->
            cityRemote.mapToSearchCityResult()
            })
        }
        return remoteResult
    }

    private fun Current.mapToCurrentWeather(): CurrentWeather {
        return CurrentWeather(
            condition = WeatherCondition(
                text = this.condition?.text,
                icon = this.condition?.icon,
                code = this.condition?.code
            ),
            tempC = this.tempC,
            tempF = this.tempF,
            humidity = this.humidity,
            windMph = this.windMph,
            windKph = this.windKph,
            windDir = this.windDir,
            feelslikeC = this.feelslikeC,
            feelslikeF = this.feelslikeF,
            visiMiles = this.visMiles,
            visiKm = this.visKm,
            isDay = this.isDay,
            cloud = this.cloud
        )
    }

    private fun Forecast.mapToWeatherForecast(): WeatherForecast {
        val forecasts: MutableList<WeatherDay?> = mutableListOf()
        for (forecast in this.forecastday) {
            val dayForecast = WeatherDay(
                date = forecast?.dateEpoch,
                maxtempC = forecast?.day?.maxtempC,
                maxtempF = forecast?.day?.maxtempF,
                mintempC = forecast?.day?.mintempC,
                mintempF = forecast?.day?.mintempF,
                humidity = forecast?.day?.avghumidity,
                windMph = forecast?.day?.maxwindMph,
                windKph = forecast?.day?.maxwindKph,
                windDir = "",
                condition = WeatherCondition(
                    text = forecast?.day?.condition?.text,
                    icon = forecast?.day?.condition?.icon,
                    code = forecast?.day?.condition?.code
                )
            )
            forecasts.add(dayForecast)
        }
        return WeatherForecast(forecasts)
    }


    private fun Weather.mapToWeatherResult(): WeatherResult {
        return WeatherResult(
            city = this.location?.name ?: "",
            country = this.location?.country ?: "",
            lat = this.location?.lat ?: 0.0,
            lon = this.location?.lon ?: 0.0,
            weather = WeatherAndForecast (
                this.current?.mapToCurrentWeather(),
                this.forecast?.mapToWeatherForecast()
            )
        )
    }

    override suspend fun checkWeatherForCity(city: SearchCityResult): RemoteResult<WeatherResult> {
        val remoteCity = City(
            city = city.name,
            name = city.name,
            country = city.country,
            latitude = city.lat,
            longitude = city.lon
        )
        val result = cityRemote.getCityWeather(remoteCity)
        val remoteResult = when (result) {
            is CityScoutRemoteResult.Failure -> Error(result.description)
            is CityScoutRemoteResult.Success -> Success(result.data.mapToWeatherResult())
        }
        return remoteResult
    }
}