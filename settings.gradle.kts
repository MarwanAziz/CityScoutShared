rootProject.name = "CityScoutShared"
enableFeaturePreview("TYPESAFE_PROJECT_ACCESSORS")

// Prefer compiling CityScoutRemote from source (composite build). JitPack's Maven metadata for KMP
// native targets often points at missing *.jar URLs; resolving only the POM is not enough for iOS targets.
// Paths checked, in order:
// - ./CityScoutRemote — git submodule or vendored copy inside this repo
// - ../CityScoutRemote — sibling checkout (local dev) or cloned in jitpack.yml before_install
val cityScoutRemoteDir = listOf(
    file("CityScoutRemote"),
    file("../CityScoutRemote"),
).firstOrNull { it.resolve("settings.gradle.kts").isFile }

if (cityScoutRemoteDir != null) {
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