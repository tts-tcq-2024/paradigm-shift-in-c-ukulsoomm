#ifndef BATTERY_PARAMETER_CHECKER
#define BATTERY_PARAMETER_CHECKER

#include "Battery.h"

int check_parameter(float value, float min_value, float max_value, float tolerance, enum ParameterType parameter_type);

#endif // BATTERY_PARAMETER_CHECKER
