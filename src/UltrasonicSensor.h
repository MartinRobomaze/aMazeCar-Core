#include <Arduino.h>
#include "IOHandle.h"

class UltrasonicSensor {
  public:
    UltrasonicSensor(short echo, short trig);

    float getDistance();
  private:
    short echoPin, trigPin;
};