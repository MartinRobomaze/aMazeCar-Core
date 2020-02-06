#include <Arduino.h>
#include "IOHandle.h"


class ProximitySensor {
  public:
    ProximitySensor(short pin, short nRead);
    float getDistance();
  private:
    short sensorPin;
    short sensorNRead;
};