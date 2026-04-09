package net.marwanaziz.cityscoutshared

import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class DateUtilityImpTest {

    @Test
    fun localizedShortWeekDayName_formatsWithLocale_andIsStable() {
        val a = localizedShortWeekDayName(86_400, "en-US")
        val b = localizedShortWeekDayName(86_400, "en-US")
        assertTrue(a.isNotEmpty())
        assertEquals(a, b)
    }

    @Test
    fun localizedShortWeekDayName_frenchLocale_differsFromEnglish() {
        val english = localizedShortWeekDayName(86_400, "en-US")
        val french = localizedShortWeekDayName(86_400, "fr-FR")
        assertTrue(english.isNotEmpty())
        assertTrue(french.isNotEmpty())
        assertTrue(english != french)
    }

    @Test
    fun dateLocaleProviderImp_usesLocaleCode_inFormatter() {
        val provider = DateLocaleProviderImp(localeCode = "fr-FR")
        assertEquals("fr-FR", provider.localeCode)
        assertEquals(
            localizedShortWeekDayName(86_400, "fr-FR"),
            provider.shortWeekDayName(86_400),
        )
    }

    @Test
    fun dateUtilityImp_delegatesToProvider() {
        val provider = DateLocaleProviderImp(localeCode = "en-US")
        val utility = DateUtilityImp(provider)
        assertEquals(
            localizedShortWeekDayName(172_800, "en-US"),
            utility.dayOfWeekFromEpoch(172_800),
        )
    }

    @Test
    fun dateUtilityImp_returnsEmpty_whenEpochIsNull() {
        val provider = DateLocaleProviderImp(localeCode = "en-US")
        val utility = DateUtilityImp(provider)
        assertEquals("", utility.dayOfWeekFromEpoch(null))
    }
}
