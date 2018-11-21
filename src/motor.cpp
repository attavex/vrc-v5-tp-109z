#include "main.h"
using namespace pros;
#define cataLimitPort 'a'
//DEFS//
 pros::Motor frontRight (8);
 pros::Motor frontLeft (2);
 pros::Motor backRight (3);
 pros::Motor backLeft (7);
 pros::Motor cata (5);
 pros::Motor in(6);
 pros::Controller master(E_CONTROLLER_MASTER);
 pros::ADIDigitalIn cataLimit (cataLimitPort);
 

 //Functions
 void cataWind(void* x)
 {
    bool bToggle = false;
    while(true) {
        if(master.get_digital(E_CONTROLLER_DIGITAL_R2)) {
            bToggle = true;
        } 
        if(bToggle)
        {
            if(!cataLimit.get_value())
            {
                cata.move(-127);
            }
            else if(cataLimit.get_value())
            {
                cata.move(0);
                bToggle = false;
            }
        }
    }
 }
void cataActivity(void* x)
 {
    while(true) {
        if(master.get_digital(E_CONTROLLER_DIGITAL_R1)) {
            cata.move(-127);
        }
        else
        { 
            if(!cataLimit.get_value()) {
            cata.move(-127);
            } 
            else {
                cata.move(0);
            }
         
        }
    }
}
 void cataLaunch(void* x) {
    
    bool bToggle = false;
    bool tActive = false;
    int timer = -1;
    while(true) {
        if(master.get_digital(E_CONTROLLER_DIGITAL_R1)) {
            bToggle = true;
        } 
        if(bToggle && !cataLimit.get_value()) {
            cata.move(-127);
        }
        else if(bToggle && cataLimit.get_value() && !tActive) {
            timer = millis();
            cata.move(-127);
            tActive = true;
        }
        else if(bToggle && !cataLimit.get_value() && (millis() - timer) >= 300 && tActive) {
            bToggle = false;
            tActive = false;
            cata.move(0);
        }
    }
}