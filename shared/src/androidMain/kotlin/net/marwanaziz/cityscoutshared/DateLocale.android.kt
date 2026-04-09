package net.marwanaziz.cityscoutshared

import java.text.SimpleDateFormat
import java.util.Date
import java.util.Locale

actual fun localizedShortWeekDayName(epochSeconds: Int, localeCode: String): String {
    val locale = localeFromTag(localeCode)
    val formatter = SimpleDateFormat("EEE", locale)
    return formatter.format(Date(epochSeconds.toLong() * 1000L))
}

private fun localeFromTag(tag: String): Locale {
    if (tag.isEmpty()) return Locale.getDefault()
    return Locale.forLanguageTag(tag.replace('_', '-'))
}

actual fun deviceLocaleTag(): String = Locale.getDefault().toLanguageTag()
