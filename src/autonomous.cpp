#include "main.h"
#include "motor.hpp"
/*
//Profile Controller Def//
auto profileController = AsyncControllerFactory::motionProfile(
  1.0,  // Maximum linear velocity of the Chassis in m/s
  2.0,  // Maximum linear acceleration of the Chassis in m/s/s
  10.0, // Maximum linear jerk of the Chassis in m/s/s/s
  robotChassis // Chassis Controller
);
*/
void autonomous() 
{ 
   //TEST FOR OKAPI//
   robotChassis.moveDistance(1_ft);
   pros::delay(500);
   //robotChassis.turnAngle(90);
   
}