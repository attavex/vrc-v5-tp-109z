#include "main.h"

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
    cata.move(-127);
    pros::delay(400);
    cata.move(0);
    /*
    frontRight = -127;
	backRight = -127;
	frontLeft = 127;
	backLeft = 127;
    pros::delay(1000);
    frontRight = 0;
	backRight = 0;
	frontLeft = 0;
	backLeft = 0;
    */
}