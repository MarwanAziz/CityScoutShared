package net.marwanaziz.cityscoutshared

class CityScoutLocalImp(
    override val isImperialLocale: Boolean = isImperialLocale(),
    override val dateUtility: DateUtility = DateUtilityImp()
) : CityScoutLocal