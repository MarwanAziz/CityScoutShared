package net.marwanaziz.cityscoutshared

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform