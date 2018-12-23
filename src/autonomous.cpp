#include "main.h"
#include "motor.hpp"

void autonomous() 
{ 
   //TEST FOR OKAPI//
   robotChassis.moveDistance(100);
   pros::delay(500);
   robotChassis.turnAngle(90);
}