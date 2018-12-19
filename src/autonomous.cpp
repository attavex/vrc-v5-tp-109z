#include "main.h"
#include "motor.hpp"

void autonomous() 
{ 
   robotChassis.moveDistance(100);
   pros::delay(500);
   robotChassis.turnAngle(90);
}