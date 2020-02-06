#include "Arduino.h"
#include "IOHandle.h"


class LightSensor {
  public:
    LightSensor(short pin);
    int readLightSensor();
  private:
    short sensorPin;
};
