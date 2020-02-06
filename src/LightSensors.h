#include "Arduino.h"


class LightSensors {
  public:
    LightSensors(int *pins);
    int readLightSensor(int sensor);
  private:
    int *sensorPins;
};
