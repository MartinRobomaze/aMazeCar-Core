#include "Motors.h"  
  
Motors::Motors(int *pins) {
  motorPins = pins;
  for (int i = 0; i < 4; i++) {
    PinMode(pins[i], OUTPUT);
  }
}

void Motors::forward(int speed) {
  AnalogWrite(motorPins[0], speed);
  AnalogWrite(motorPins[1], 0);
  AnalogWrite(motorPins[2], speed);
  AnalogWrite(motorPins[3], 0);
}

void Motors::backward(int speed) {
  AnalogWrite(motorPins[0], 0);
  AnalogWrite(motorPins[1], speed);
  AnalogWrite(motorPins[2], 0);
  AnalogWrite(motorPins[3], speed);
}

void Motors::moveTank(int speedA, int speedB) {
  if (speedA > 255) {
    AnalogWrite(motorPins[0], 255);
    AnalogWrite(motorPins[1], 0);
    AnalogWrite(motorPins[2], speedB);
    AnalogWrite(motorPins[3], 0);
  }

  if (speedB > 255) {
    AnalogWrite(motorPins[0], speedA);
    AnalogWrite(motorPins[1], 0);
    AnalogWrite(motorPins[2], 255);
    AnalogWrite(motorPins[3], 0);
  }
  else {
    AnalogWrite(motorPins[0], speedA);
    AnalogWrite(motorPins[1], 0);
    AnalogWrite(motorPins[2], speedB);
    AnalogWrite(motorPins[3], 0);
  }