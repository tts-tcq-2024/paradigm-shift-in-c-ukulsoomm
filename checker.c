#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
    int temperatureOk = (temperature >= 0 && temperature <= 45);
    int socOk = (soc >= 20 && soc <= 80);
    int chargeRateOk = (chargeRate <= 0.8);

    if (!temperatureOk) {
        printf("Temperature out of range!\n");
    }

    if (!socOk) {
        printf("State of Charge out of range!\n");
    }

    if (!chargeRateOk) {
        printf("Charge Rate out of range!\n");
    }

    return temperatureOk && socOk && chargeRateOk;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
