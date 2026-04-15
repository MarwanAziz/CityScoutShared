rootProject.name = "CityScoutShared"
enableFeaturePreview("TYPESAFE_PROJECT_ACCESSORS")

// JitPack currently hosts KMP metadata under *-metadata.jar while Gradle module files reference *.jar (404).
// When ../CityScoutRemote exists, substitute the published dependency with the local :shared module.
val cityScoutRemoteDir = file("../CityScoutRemote")
if (cityScoutRemoteDir.resolve("settings.gradle.kts").isFile) {
    includeBuild(cityScoutRemoteDir) {
        dependencySubstitution {
            substitute(module("com.github.MarwanAziz.CityScoutRemote:CityScoutRemote"))
                .using(project(":shared"))
        }
    }
}

pluginManagement {
    repositories {
        google {
            mavenContent {
                includeGroupAndSubgroups("androidx")
                includeGroupAndSubgroups("com.android")
                includeGroupAndSubgroups("com.google")
            }
        }
        mavenCentral()
        gradlePluginPortal()
    }
}

dependencyResolutionManagement {
    repositoriesMode.set(RepositoriesMode.FAIL_ON_PROJECT_REPOS)
    repositories {
        google {
            mavenContent {
                includeGroupAndSubgroups("androidx")
                includeGroupAndSubgroups("com.android")
                includeGroupAndSubgroups("com.google")
            }
        }
        mavenCentral()
        maven { url = uri("https://jitpack.io") }
    }
}

include(":composeApp")
include(":sharedLib")
project(":sharedLib").projectDir = file("shared")