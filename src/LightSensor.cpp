#include "LightSensor.h"

LightSensor::LightSensor(short pin) {
  sensorPin = pin;
}

int LightSensor::readLightSensor() {
  return AnalogRead(sensorPin);
}