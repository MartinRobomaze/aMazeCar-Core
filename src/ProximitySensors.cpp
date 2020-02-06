#include "ProximitySensor.h"

ProximitySensor::ProximitySensor(short pin, short nRead) {
  sensorPin = pin;
  sensorNRead = nRead;
}

float ProximitySensor::getDistance() {
  long sum = 0;
  for(int i=0;i < sensorNRead;i++)
  {
    sum = sum + analogRead(sensorPin);
  }  
  float adc = sum / sensorNRead;
  //float volts = analogRead(adc)*0.0048828125;  // value from sensor * (5/1024)
  //float volts = sum*0.003222656;  // value from sensor * (3.3/1024) EXTERNAL analog refference

  float distanceCm = 17569.7 * pow(adc, -1.2062);
  //float distance_cm = 13*pow(volts, -1); 
  return(distanceCm);
}