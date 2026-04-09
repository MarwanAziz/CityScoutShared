package net.marwanaziz.cityscoutshared

import net.marwanaziz.cityscoutremote.City
import net.marwanaziz.cityscoutremote.CityScoutRemote
import net.marwanaziz.cityscoutremote.CityScoutRemoteApiKeys
import net.marwanaziz.cityscoutremote.CityScoutRemoteFactory
import net.marwanaziz.cityscoutremote.CityScoutRemoteResult
import net.marwanaziz.cityscoutremote.Weather
import net.marwanaziz.cityscoutshared.RemoteResult.*

class RemoteImp(
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

    private fun Weather.mapToWeatherResult(): WeatherResult {
        val cityLocation = location
        return WeatherResult(
            name = cityLocation?.name ?: "",
            country = cityLocation?.country ?: "",
            lat = cityLocation?.lat ?: 0.0,
            lon = cityLocation?.lon ?: 0.0
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