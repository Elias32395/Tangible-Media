

//analog read 
//map function
#include <RH_ASK.h>

const int xpin = A2;                  // x-axis of the accelerometer


int sensorValue = 0;

//int outputValue = 0;

void setup() {
  // initialize the serial communications:
  Serial.begin(9600);
}

void loop() {
sensorValue =  analogRead(xpin);
outputValue = map (sensorValue, 380, 580, 0, 255);
 // print the sensor values:
 Serial.print(analogRead(xpin));
   Serial.print("\t");
  Serial.print(analogRead( outputValue));
  Serial.print("\t");

  Serial.println();
  // delay before next reading:
  delay(100);
}

