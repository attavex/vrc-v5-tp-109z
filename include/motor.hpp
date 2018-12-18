#ifndef MOTOR_H
#define MOTOR_H
#include "main.h"
//DEFS//
extern pros::Motor frontRight;
extern pros::Motor frontLeft;
extern pros::Motor backRight;
extern pros::Motor backLeft;
extern pros::Motor cata;
extern pros::Motor in;
extern pros::Controller master;
extern int driveGet();
//DEFINE CHASSIS/MOTIONPROFILE//
extern ChassisControllerIntegrated robotChassis;
//SENSORS//
extern pros::ADIDigitalIn cataLimit;
//FUNCTIONS//
void cataActivity(void *x);
void driveSpeed(int iSpeed);
void turnLeft(int iSpeed);
void turnRight(int iSpeed);
void encoderReset();
#endif