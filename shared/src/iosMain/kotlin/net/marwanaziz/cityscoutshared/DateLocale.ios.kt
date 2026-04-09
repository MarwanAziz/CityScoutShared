package net.marwanaziz.cityscoutshared

import platform.Foundation.NSDate
import platform.Foundation.NSDateFormatter
import platform.Foundation.NSLocale
import platform.Foundation.NSUserDefaults

actual fun localizedShortWeekDayName(epochSeconds: Int, localeCode: String): String {
    val secondsBetween1970AndReferenceDate = 978307200.0
    val timeIntervalSinceReferenceDate = epochSeconds.toDouble() - secondsBetween1970AndReferenceDate
    val date = NSDate(timeIntervalSinceReferenceDate = timeIntervalSinceReferenceDate)
    val formatter = NSDateFormatter()
    formatter.locale = nsLocaleFromCode(localeCode)
    formatter.setLocalizedDateFormatFromTemplate("EEE")
    return formatter.stringFromDate(date)
}

actual fun deviceLocaleTag(): String = readAppleLocaleTag()

private fun nsLocaleFromCode(localeCode: String): NSLocale {
    if (localeCode.isNotEmpty()) {
        return NSLocale(localeIdentifier = localeCode.replace('-', '_'))
    }
    val apple = readAppleLocaleTag()
    return NSLocale(localeIdentifier = apple.replace('-', '_'))
}

private fun readAppleLocaleTag(): String {
    val appleLocale = NSUserDefaults.standardUserDefaults.stringForKey("AppleLocale").orEmpty()
    val base = appleLocale.substringBefore('@').ifEmpty {
        NSUserDefaults.standardUserDefaults.arrayForKey("AppleLanguages")?.firstOrNull()?.toString().orEmpty()
            .substringBefore('@')
    }
    return base.replace('_', '-').ifEmpty { "en-US" }
}
