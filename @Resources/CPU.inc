; CPU 0 Values

[CPU0_NAME]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOType=SensorName
RegExpSubstitute=1
Substitute="^(.*]: )":"","(: .*)$":"","Intel Core i(.*)-":""

[CPU0_COR0_VID]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR0-VID#
HWiNFOType=CurrentValue

[CPU0_COR1_VID]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR1-VID#
HWiNFOType=CurrentValue

[CPU0_COR2_VID]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR2-VID#
HWiNFOType=CurrentValue

[CPU0_COR3_VID]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR3-VID#
HWiNFOType=CurrentValue

[CPU0_AVG_VID]
Measure=Calc
Formula=(1/4 * (CPU0_COR0_VID+CPU0_COR1_VID+CPU0_COR2_VID+CPU0_COR3_VID))
DynamicVariables=1

[CPU0_COR0_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR0-CLK#
HWiNFOType=CurrentValue

[CPU0_COR1_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR1-CLK#
HWiNFOType=CurrentValue

[CPU0_COR2_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR2-CLK#
HWiNFOType=CurrentValue

[CPU0_COR3_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR3-CLK#
HWiNFOType=CurrentValue

[CPU0_AVG_CLK]
Measure=Calc
Formula=(1/4 * (CPU0_COR0_CLK+CPU0_COR1_CLK+CPU0_COR2_CLK+CPU0_COR3_CLK))
DynamicVariables=1

[CPU0_BUS_CLK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-BUS-CLK#
HWiNFOType=CurrentValue

[CPU0_COR0_THD0_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR0-THD0-USE#
HWiNFOType=CurrentValue

[CPU0_COR0_THD1_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR0-THD1-USE#
HWiNFOType=CurrentValue

[CPU0_COR1_THD0_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR1-THD0-USE#
HWiNFOType=CurrentValue

[CPU0_COR1_THD1_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR1-THD1-USE#
HWiNFOType=CurrentValue

[CPU0_COR2_THD0_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR2-THD0-USE#
HWiNFOType=CurrentValue

[CPU0_COR2_THD1_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR2-THD1-USE#
HWiNFOType=CurrentValue

[CPU0_COR3_THD0_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR3-THD0-USE#
HWiNFOType=CurrentValue

[CPU0_COR3_THD1_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-COR3-THD1-USE#
HWiNFOType=CurrentValue

[CPU0_TOTL_USE]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-SID#
HWiNFOSensorInstance=#CPU0-SIN#
HWiNFOEntryId=#CPU0-TOTL-USE#
HWiNFOType=CurrentValue

; CPU0 Package TMP

[CPU0_TMP_PCK]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorID=#CPU0-TMP-SID#
HWiNFOSensorInstance=#CPU0-TMP-SIN#
HWiNFOEntryId=#CPU0-TMP-PCK#
HWiNFOType=CurrentValue
