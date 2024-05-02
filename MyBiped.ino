#include <Servo.h>
#include "constants.h"

Servo hipL;
Servo hipR;
Servo kneeL;
Servo kneeR;
Servo ankleL;
Servo ankleR;

void ini()
{
    hipR.write(hipROffset);
    hipL.write(hipLOffset);
    kneeL.write(kneeLOffset);
    ankleL.write(ankleLOffset);
    kneeR.write(kneeROffset);
    ankleR.write(ankleROffset);
    delay(200);
}


void setup() {
  // put your setup code here, to run once:
  hipL.attach(8);
  hipR.attach(9);
  kneeL.attach(6);
  kneeR.attach(7);
  ankleL.attach(4);
  ankleR.attach(5);
  ini();
  delay(1000);
}

void walk()
{
  hipR.write(hipROffset-55); //split w left leg peeche 
  kneeR.write(kneeROffset-35);
  ankleR.write(ankleROffset-5);
  hipL.write(hipLOffset-25);
  kneeL.write(kneeLOffset-20);
  kneeL.write(ankleLOffset+27);
  delay(900);
  ini();

  hipL.write(hipLOffset+35);
  kneeL.write(kneeLOffset+25);
  kneeL.write(ankleLOffset-5);
  hipR.write(hipROffset+25); //split w right leg peeche 
  kneeR.write(kneeROffset+25);
  ankleR.write(ankleROffset+27);
  delay(900);
ini();
}



void loop() {
walk();
}