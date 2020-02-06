#include "Arduino.h"
#include "IOHandle.h"


class Motors {
  public:
    Motors(int *pins);
    void forward(int speed);
    void backward(int speed);
    void moveTank(int speedA, int speedB);
  
  private:
    int *motorPins;
};