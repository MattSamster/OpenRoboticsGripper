// This code is written to test whether the Sharp IR library works
// may not be compatible with our IR sensor SEN0019

// include the library
#include <SharpIR.h>
// input pin:
#define IRPin A0
// select the model that supports 10cm - 80cm range
#define model 1080

// variable to store the distance:
int distance_cm;

// create a new instance of the SharpIR class
// now mySensor inherits all the functions and attributes in SharpIR library
SharpIR mySensor = SharpIR(IRPin, model);

// set up function 
void setup() {
  // recommended serial communication at a baud rate of 9600
  Serial.begin(9600);
}

// this is where the work begins
void loop() {
  // measure and store the distance as distance_cm
  distance_cm = mySensor.distance();
  
  // print the measured distance to the serial monitor
  Serial.print("Distance: &d cm", distance_cm);
  delay(500);
}
