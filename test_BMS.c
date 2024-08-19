#include <stdio.h>
#include "BMS_main.h"

void test_battery(float temperature, float soc, float charge_rate, int language) {
    Set_Language(language);
    if (BatteryIsOK(temperature, soc, charge_rate)) {
        printf("Battery parameters are within range.\n");
    } else {
        printf("Battery parameters are out of range.\n");
    }
}
