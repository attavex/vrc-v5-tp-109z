#ifndef MOTOR_H
#define MOTOR_H
#include "main.h"

//extern SettledUtil create(double iatTargetError = 50, double iatTargetDerivative = 5, QTime iatTargetTime = 250_ms);

//DEFS//
//Vis Sensor
extern pros::Vision visSensor;
extern pros::vision_color_code_t blueFlagColorCode;
extern pros::vision_color_code_t redFlagColorCode;
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
extern pros::Motor pocketKnife;
extern pros::Motor descore;
//Controllers
extern pros::Controller master;
extern Controller controller;

//GLOBAL VARIABLES
extern int driveGet();
extern int autonNumber;

//DEFINE CHASSIS/MOTIONPROFILE//
extern ChassisControllerPID robotChassis;
//extern ChassisControllerIntegrated robotChassis;
extern AsyncMotionProfileController profileController;
//SENSORS//
extern pros::ADIDigitalIn cataLimit;


//FUNCTIONS//
void visionAim(void *x);
void cataActivity(void *x);
void driveSpeed(int iSpeed);
void turnLeft(int iSpeed);
void turnRight(int iSpeed);
void encoderReset();
void lcdAuton();
#endif