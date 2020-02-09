#include "ProximitySensor.h"

ProximitySensor::ProximitySensor(short pin, short nRead) {
  sensorPin = pin;
  sensorNRead = nRead;
}

float ProximitySensor::getDistance() {
  long sum = 0;
  for(int i=0;i < sensorNRead;i++)
  {
    sum = sum + AnalogRead(sensorPin);
  }  
  float adc = sum / sensorNRead;
  //float volts = analogRead(adc)*0.0048828125;  // value from sensor * (5/1024)
  //float volts = sum*0.003222656;  // value from sensor * (3.3/1024) EXTERNAL analog refference

  float distanceCm = 27.728 * pow(map(adc, 0, 1023, 0, 5000) / 1000.0, -1.2045);
  //float distance_cm = 13*pow(volts, -1); 
  return distanceCm;
}