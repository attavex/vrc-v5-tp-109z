#include "main.h"
#include "motor.hpp"

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() { 
    /*
    //blue side front top & bottom flag and park
    cata.move(-127);
    pros::delay(2600);
    cata.move(0);
   
   driveSpeed(127);
   pros::delay(1500);
   driveSpeed(0);
   pros::delay(100);
   driveSpeed(-127);
   pros::delay(1280); //1280
   driveSpeed(0);
   pros::delay(100);
   turnRight(127);
   pros::delay(250);
   driveSpeed(0);
   pros::delay(100);
   driveSpeed(127);
   pros::delay(1200); //2200
   driveSpeed(0);
*/
cata.move(-127);
while(!cataLimit.get_value())
{
    if(cataLimit.get_value()) cata.move(-10);
    pros::delay(20);
}
cata.move(-10);
in.move(127);
driveSpeed(-127);
pros::delay(600);
driveSpeed(0);
pros::delay(1000);
driveSpeed(127);
pros::delay(400);
driveSpeed(0);
pros::delay(4000);
in.move(0);
   
}