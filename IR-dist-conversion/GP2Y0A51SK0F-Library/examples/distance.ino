#include <GP2Y0A51SK0F.h>


IR_GP2Y0A51SK0F IR_sensor;
int distanceCM;
int pinIR;

void setup()
{
  Serial.begin(9600);
  
  pinIR = A0;
  IR_sensor.setup(pinIR);
}

void loop()
{
  distanceCM = IR_sensor.getDistance();
  Serial.print("Object distance from sensor: ");
  Serial.print(distanceCM);  
  delay(500);
}
