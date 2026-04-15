rootProject.name = "CityScoutShared"
enableFeaturePreview("TYPESAFE_PROJECT_ACCESSORS")

// When ../CityScoutRemote exists, substitute the JitPack coordinate with the local :shared module.
val cityScoutRemoteDir = file("../CityScoutRemote")
if (cityScoutRemoteDir.resolve("settings.gradle.kts").isFile) {
    includeBuild(cityScoutRemoteDir) {
        dependencySubstitution {
            substitute(module("com.github.MarwanAziz.CityScoutRemote:shared"))
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

/**
 * JitPack passes `-Pjitpack=true` (see jitpack.yml) so only `:sharedLib` is included,
 * matching CityScoutRemote and avoiding building the sample app on JitPack.
 */
val isJitpackBuild = startParameter.projectProperties["jitpack"] == "true"

include(":sharedLib")
project(":sharedLib").projectDir = file("shared")
if (!isJitpackBuild) {
    include(":composeApp")
}