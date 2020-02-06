#include "Arduino.h"


class LightSensor {
  public:
    LightSensor(short pin);
    int readLightSensor();
  private:
    short sensorPin;
};
