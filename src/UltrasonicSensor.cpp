#include "UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor(short echo, short trig) {
  UltrasonicSensor::echoPin = echo;
  UltrasonicSensor::trigPin = trig;

  PinMode(UltrasonicSensor::echoPin, INPUT);
  PinMode(UltrasonicSensor::trigPin, OUTPUT);
}

float UltrasonicSensor::getDistance() {
  DigitalWrite(UltrasonicSensor::trigPin, LOW);
  delayMicroseconds(2);

  DigitalWrite(UltrasonicSensor::trigPin, HIGH);
  delayMicroseconds(10);
  DigitalWrite(UltrasonicSensor::trigPin, LOW);

  long duration = pulseIn(UltrasonicSensor::echoPin, HIGH);
  float distance = duration * 0.034 / 2;

  return distance;
}