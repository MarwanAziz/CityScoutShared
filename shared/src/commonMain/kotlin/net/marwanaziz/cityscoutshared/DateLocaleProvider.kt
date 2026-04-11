package net.marwanaziz.cityscoutshared

internal interface DateLocaleProvider {
    val localeCode: String
    fun shortWeekDayName(epochSeconds: Int): String
}

internal class DateLocaleProviderImp(
    override val localeCode: String = deviceLocaleTag(),
) : DateLocaleProvider {
    override fun shortWeekDayName(epochSeconds: Int): String {
        return localizedShortWeekDayName(epochSeconds, localeCode)
    }
}
