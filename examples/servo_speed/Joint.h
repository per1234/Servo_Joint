#ifndef _Joint_h_
#define _Joint_h_

#include <Servo.h>
#include "Arduino.h"


class Joint{

   
      Servo servo;              // the servo
      int  updateInterval;      // interval between updates  
      volatile int pos;                  // current servo position
      volatile unsigned long lastUpdate; // last update of position
      volatile int increment;            // increment to move for each interval
      volatile int oldPos;
     // volatile int newPos;
      volatile int target;
      volatile boolean allDone;

  public:
     Joint();   // interval will not be needed here.   
    void Attach(int pin); 
    void Detach(); 
    void setTarget(int newTarget, int deltaTime);    // newTarget in degrees; deltaTime in milliseconds    
    void reset();    
    void resetTo(int startPos);
    void Update(unsigned long currentMillis);    
};

#endif


