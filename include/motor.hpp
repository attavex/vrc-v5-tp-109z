using namespace pros;
#ifndef MOTOR_H
#define MOTOR_H
#include "api.h"
//#define cataLimitPort 'a'
//DEFS//
 extern pros::Motor frontRight;
 extern pros::Motor frontLeft;
 extern pros::Motor backRight;
 extern pros::Motor backLeft;
 extern pros::Motor cata;
 extern pros::Motor in;
 extern pros::Controller master;
 //SENSORS
 extern pros::ADIDigitalIn cataLimit;
 //FUNCTIONS
 void cataWind(void* x);
 void cataLaunch(void* x);
#endif 