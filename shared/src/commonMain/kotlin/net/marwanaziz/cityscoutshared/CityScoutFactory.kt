package net.marwanaziz.cityscoutshared

object CityScoutFactory {

    fun createRemote(remoteKeys: RemoteKeys): Remote {
        return RemoteImp(remoteKeys)
    }

    fun creatSearchCityViewModel(remote: Remote): SearchCityViewModel {
        return SearchCityViewModelImp(remote)
    }

    fun createWeatherViewModel(remote: Remote): CityWeatherViewModel {
        return CityWeatherViewModelImp(remote)
    }
}