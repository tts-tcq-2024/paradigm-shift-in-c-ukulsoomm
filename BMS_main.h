#ifndef BMS_MAIN_H
#define BMS_MAIN_H

enum ParameterType {
    TEMPERATURE,
    SOC,
    CHARGE_RATE
};

#define ENGLISH 0
#define GERMAN 1

extern int current_language;
extern const char* messages[][3][3];

// Function prototypes
void Set_Language(int language);
void PrintMessage(int message_index, enum ParameterType parameter_type);
int is_OutOfRange(float value, float min_value, float max_value);
int is_NearLowerLimit(float value, float min_value, float tolerance);
int is_NearUpperLimit(float value, float max_value, float tolerance);
int ParameterCheck(float value, float min_value, float max_value, float tolerance, enum ParameterType parameter_type);
int BatteryIsOk(float temperature, float soc, float charge_rate);
void test_battery(float temperature, float soc, float charge_rate, int language);

#endif // BMS_MAIN_H
