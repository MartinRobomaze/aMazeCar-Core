#include "Motors.h"  
  
Motors::Motors(int *pins) {
  motorPins = pins;
  for (int i = 0; i < 4; i++) {
    pinMode(pins[i], OUTPUT);
  }
}

void Motors::forward(int speed) {
  analogWrite(motorPins[0], speed);
  analogWrite(motorPins[1], 0);
  analogWrite(motorPins[2], speed);
  analogWrite(motorPins[3], 0);
}

void Motors::backward(int speed) {
  analogWrite(motorPins[0], 0);
  analogWrite(motorPins[1], speed);
  analogWrite(motorPins[2], 0);
  analogWrite(motorPins[3], speed);
}

void Motors::moveTank(int speedA, int speedB) {
  if (speedA > 255) {
    analogWrite(motorPins[0], 255);
    analogWrite(motorPins[1], 0);
    analogWrite(motorPins[2], speedB);
    analogWrite(motorPins[3], 0);
  }

  if (speedB > 255) {
    analogWrite(motorPins[0], speedA);
    analogWrite(motorPins[1], 0);
    analogWrite(motorPins[2], 255);
    analogWrite(motorPins[3], 0);
  }
  else {
    analogWrite(motorPins[0], speedA);
    analogWrite(motorPins[1], 0);
    analogWrite(motorPins[2], speedB);
    analogWrite(motorPins[3], 0);
  }