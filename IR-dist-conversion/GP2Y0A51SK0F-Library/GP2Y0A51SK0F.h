#ifndef DistanceGP2Y0A21YK_h
#define DistanceGP2Y0A21YK_h

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include <pins_arduino.h>
#endif

#define num_cm 15

class IR_GP2Y0A51SK0F
{
  public:

    int getDistance();
    void setup();
    IR_GP2Y0A51SK0F (int irPin, long sensorModel);
    int distance();
  
  private:

    void sort(int a[], int size);
    
    int _irPin;
};
