package net.marwanaziz.cityscoutshared

internal class CityScoutLocalImp(
    override val isImperialLocale: Boolean = isImperialLocale(),
    override val dateUtility: DateUtility = DateUtilityImp()
) : CityScoutLocal