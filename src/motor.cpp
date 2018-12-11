#include "main.h"
using namespace pros;
#define cataLimitPort 'a'
//DEFS//
pros::Motor frontRight(17);
pros::Motor frontLeft(18);
pros::Motor backRight(11);
pros::Motor backLeft(15);
pros::Motor cata(14);
pros::Motor in(19);
pros::Controller master(E_CONTROLLER_MASTER);
pros::ADIDigitalIn cataLimit(cataLimitPort);

int driveGet()
{
    return (abs((frontRight.get_position() + frontLeft.get_position() + backRight.get_position() + backLeft.get_position()) / 4));
}
//FUNCTIONS//

void driveSpeed(int iSpeed)
{
    frontRight.move(-iSpeed);
    frontLeft.move(iSpeed);
    backRight.move(-iSpeed);
    backLeft.move(iSpeed);
}

void turnLeft(int iSpeed)
{
    frontRight.move(-iSpeed);
    frontLeft.move(-iSpeed);
    backRight.move(-iSpeed);
    backLeft.move(-iSpeed);
}

void turnRight(int iSpeed)
{
    frontRight.move(iSpeed);
    frontLeft.move(iSpeed);
    backRight.move(iSpeed);
    backLeft.move(iSpeed);
}

void encoderReset()
{
    frontRight.set_zero_position(0);
    frontLeft.set_zero_position(0);
    backRight.set_zero_position(0);
    backLeft.set_zero_position(0);
}

void cataActivity(void *x)
{
    while(true)
    {
        if (master.get_digital(E_CONTROLLER_DIGITAL_R1)) cata.move(-127);
        else if (master.get_digital(E_CONTROLLER_DIGITAL_R2)) cata.move(127);
        else
        {
            if (!cataLimit.get_value())
            {
                cata.move(-127);
            }
            else
            {
                cata.move(-10);
            }
        }
    }
}

/*
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
*/