#include <Servo.h>
#include "constants.h"

Servo hipL;
Servo hipR;
Servo kneeL;
Servo kneeR;
Servo ankleL;
Servo ankleR;

void setup() {
  // put your setup code here, to run once:
  hipL.attach(8);
  hipR.attach(9);
  kneeL.attach(6);
  kneeR.attach(7);
  ankleL.attach(4);
  ankleR.attach(5);
  hipL.write(hipLOffset);
  kneeL.write(kneeLOffset);
  ankleL.write(ankleLOffset);
  hipR.write(hipROffset);
  kneeR.write(kneeROffset);
  ankleR.write(ankleROffset);

  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
}
