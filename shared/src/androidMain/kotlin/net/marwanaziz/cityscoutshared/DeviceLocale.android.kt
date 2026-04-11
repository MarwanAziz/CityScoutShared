package net.marwanaziz.cityscoutshared

import java.util.Locale

actual fun isImperialLocale(): Boolean {
    val countryCode = Locale.getDefault().country.uppercase()
    return countryCode == "US" || countryCode == "LR" || countryCode == "MM"
}
