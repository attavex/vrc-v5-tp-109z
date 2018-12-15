#ifndef MOTOR_H
#define MOTOR_H
#include "main.h"
//DEFS//
//Motors
extern pros::Motor frontRight;
extern pros::Motor frontLeft;
extern pros::Motor backRight;
extern pros::Motor backLeft;
extern pros::Motor cata;
extern pros::Motor in;
//Controllers
extern pros::Controller master;
extern Controller controller;

extern int driveGet();


//DEFINE CHASSIS//
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