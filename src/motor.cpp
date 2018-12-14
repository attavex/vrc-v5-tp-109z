#include "main.h"
#define cataLimitPort 'a'

//DEFS//
/*
pros::Motor frontRight(17, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor frontLeft(18, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor backRight(11, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor backLeft(15, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
*/
pros::Motor cata(14, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor in(19, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::ADIDigitalIn cataLimit(cataLimitPort);

MotorGroup left = MotorGroup({18, 15});
MotorGroup right = MotorGroup({-17, -11});
//DEFINE CHASSIS//
ChassisControllerIntegrated robotChassis = ChassisControllerFactory::create(
  left, right,
  AbstractMotor::gearset::green, // Speed gearset
  {4_in, 10.5_in} // 4 inch wheels, 10.5 inch wheelbase width
);

//ENCODER DRIVEGET//
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
        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) cata.move(-127);
        else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) cata.move(127);
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