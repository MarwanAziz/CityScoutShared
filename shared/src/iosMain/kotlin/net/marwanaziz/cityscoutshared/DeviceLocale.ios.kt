package net.marwanaziz.cityscoutshared

import platform.Foundation.NSUserDefaults

actual fun isImperialLocale(): Boolean {
    val localeTag = NSUserDefaults.standardUserDefaults.stringForKey("AppleLocale").orEmpty()
    val countryCode = extractCountryCode(localeTag)
    return countryCode == "US" || countryCode == "LR" || countryCode == "MM"
}

private fun extractCountryCode(localeTag: String): String {
    if (localeTag.isEmpty()) return ""
    val normalized = localeTag.replace('-', '_')
    val parts = normalized.split('_')
    if (parts.size < 2) return ""
    return parts[1].uppercase()
}
