# CityScoutShared

`CityScoutShared` is a Kotlin Multiplatform library that provides shared city search and weather forecast logic for Android and iOS apps.

It exposes:

- `SearchCityViewModel` to search for cities.
- `CityWeatherViewModel` to fetch current weather and forecast for a selected city.
- Factory helpers through `CityScoutFactory` to create `Remote`, `SearchCityViewModel`, and `CityWeatherViewModel`.

## API Keys

This library requires two API keys:

- **RapidAPI key** for city search (free plan available): [rapidapi.com](https://rapidapi.com/)
- **WeatherAPI key** for weather forecast (free plan available): [weatherapi.com](https://www.weatherapi.com/)

Set keys before making requests:

```kotlin
import net.marwanaziz.cityscoutshared.RemoteKeys

RemoteKeys.rapidApiKey = "<YOUR_RAPIDAPI_KEY>"
RemoteKeys.weatherApiKey = "<YOUR_WEATHERAPI_KEY>"
```

## Basic Usage

```kotlin
import net.marwanaziz.cityscoutshared.CityScoutFactory
import net.marwanaziz.cityscoutshared.RemoteKeys

RemoteKeys.rapidApiKey = "<YOUR_RAPIDAPI_KEY>"
RemoteKeys.weatherApiKey = "<YOUR_WEATHERAPI_KEY>"

val remote = CityScoutFactory.createRemote(RemoteKeys)
val searchViewModel = CityScoutFactory.creatSearchCityViewModel(remote)
val weatherViewModel = CityScoutFactory.createWeatherViewModel(remote)
```

Typical flow:

1. Call `searchViewModel.searchCity("Cairo")`.
2. Read `searchViewModel.searchCityResult`.
3. Pick a city and call `weatherViewModel.checkWeather(selectedCity)`.
4. Observe weather state from `weatherViewModel` (`weatherTemp`, `weatherConditionText`, `weatherConditionCode`, `forecasts`, etc.).

## Build

- Build full project:
  ```shell
  ./gradlew build
  ```
- Run shared module tests:
  ```shell
  ./gradlew :sharedLib:test
  ```

## JitPack

This repo includes [`jitpack.yml`](jitpack.yml) so JitPack uses **Java 17** and only publishes the library module (`:sharedLib`), not the sample `composeApp` (via `-Pjitpack=true` in `settings.gradle.kts`).

The library depends on [CityScoutRemote](https://github.com/MarwanAziz/CityScoutRemote) from JitPack. **Recent tags publish the KMP artifact as `shared`**, not `CityScoutRemote` (for example `com.github.MarwanAziz.CityScoutRemote:shared:1.0.15`). The version catalog in this project already uses that coordinate.