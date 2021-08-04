#include <iostream>
#include <GP2Y0A51SK0F.h>

// set up the arduino and put it in input mode
void setup(int irPin)
{
    _irPin = irPin;
    pinMode(_irPin, INPUT);
}

void sort(int a[], int size)
{
    for(int i=0; i<(size-1); i++) {
    bool flag = true;
    for(int o=0; o<(size-(i+1)); o++) {
        if(a[o] > a[o+1]) {
            int t = a[o];
            a[o] = a[o+1];
            a[o+1] = t;
            flag = false;
        }
    }
    if (flag) break;
  }
}

// calculate distance away from sensor. Returns distance in cm
int distance_cm()
{
  
  int ir_val[num_cm] = {};
  int distanceCM;
  float current;
  int median;


  for (int i=0; i< num_cm; i++){
      // Read analog value
      ir_val[i] = analogRead(_irPin);
  }

  // Get the approx median
  #if USE_MEDOFMEDIANS
      median = medianOfMedians(ir_val, num_cm);
  #else
      sort(ir_val, num_cm);
      median = ir_val[num_cm/2];
  #endif
    // find an empirical and non-linear formula
    // that describes the relationship between output voltage and distance
    // extrapolate from the inverse stuff
    // Below is our current formula -- may not be the most accurate one.
    distance = (analogRead(_irPin) - 0.0833)/4.88;
    
    return distanceCM;
}

