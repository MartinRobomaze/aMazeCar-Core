#include <LightSensors.h>

LightSensors::LightSensors(int *pins) {
  sensorPins = pins;
}

int LightSensors::readLightSensor(int sensor) {
  return analogRead(sensor);
}