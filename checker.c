#include <stdio.h>
#include <assert.h>

int CheckTemperature(){
 printf("Temperature out of range!\n");
 return 0;
}

int CheckStateOfCharge(){
 printf("State of Charge out of range!\n");
 return 0;
}

int CheckChargeRate(){
 printf("Charge Rate out of range!\n");
 return 0;
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
  if(temperature < 0 || temperature > 45) {
    CheckTemperature();
  } else if(soc < 20 || soc > 80) {
    CheckStateOfCharge()
  } else if(chargeRate > 0.8) {
    CheckChargeRate();
  }
  return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
