package net.marwanaziz.cityscoutshared

import platform.Foundation.NSLocale
import platform.Foundation.autoupdatingCurrentLocale
import platform.Foundation.countryCode

actual fun isImperialLocale(): Boolean {
    return NSLocale.autoupdatingCurrentLocale.countryCode in setOf("US", "LR", "MM")
}
