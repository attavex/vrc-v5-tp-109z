#include "main.h"
using namespace pros;
#define cataLimitPort 'a'
//DEFS//
 pros::Motor frontRight (1);
 pros::Motor frontLeft (2);
 pros::Motor backRight (3);
 pros::Motor backLeft (4);
 pros::Motor cata (5);
 pros::Motor in(6);
 pros::Controller master(E_CONTROLLER_MASTER);
 pros::ADIDigitalIn cataLimit (cataLimitPort);
 

 //Functions
 void cataWind(void* x)
 {
    while(cataLimit.get_value() != 1) 
    {
       cata.move(-90);
    }
    cata.move(0);
     pros::Task(CURRENT_TASK).remove();
 }

 void cataLaunch(void* x) 
 {
        while(cataLimit.get_value() != 1) 
        {
        cata.move(-127);
        }
        cata.move(-127);
        pros:delay(300);
        cata.move(0);
        while(cataLimit.get_value() != 1) 
        {
        cata.move(-127);
        }
        cata.move(0);
        pros::Task(CURRENT_TASK).remove();
}