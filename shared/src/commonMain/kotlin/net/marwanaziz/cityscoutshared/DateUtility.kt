package net.marwanaziz.cityscoutshared

interface DateUtility {
    fun dayOfWeekFromEpoch(epochSeconds: Int?): String
}

class DateUtilityImp(
    private val dateLocaleProvider: DateLocaleProvider = DateLocaleProviderImp(),
) : DateUtility {

    override fun dayOfWeekFromEpoch(epochSeconds: Int?): String {
        if (epochSeconds == null) return ""
        return dateLocaleProvider.shortWeekDayName(epochSeconds)
    }
}
