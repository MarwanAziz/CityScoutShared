package net.marwanaziz.cityscoutshared

expect fun localizedShortWeekDayName(epochSeconds: Int, localeCode: String): String

expect fun deviceLocaleTag(): String
