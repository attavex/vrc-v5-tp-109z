#ifndef MOTOR_H
#define MOTOR_H
#include "main.h"


//DEFS//
//Vis Sensor
extern pros::Vision visSensor;
//Motors
/*
extern pros::Motor frontRight;
extern pros::Motor frontLeft;
extern pros::Motor backRight;
extern pros::Motor backLeft;
*/
extern MotorGroup left;
extern MotorGroup right;

extern pros::Motor cata;
extern pros::Motor in;
//Controllers
extern pros::Controller master;
extern Controller controller;

//GLOBAL VARIABLES
extern int driveGet();
extern int autonNumber;

//DEFINE CHASSIS/MOTIONPROFILE//
extern ChassisControllerIntegrated robotChassis;
extern AsyncMotionProfileController profileController;
//SENSORS//
extern pros::ADIDigitalIn cataLimit;


//FUNCTIONS//
void cataActivity(void *x);
void driveSpeed(int iSpeed);
void turnLeft(int iSpeed);
void turnRight(int iSpeed);
void encoderReset();
void lcdAuton();
#endif