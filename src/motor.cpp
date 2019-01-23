#include "main.h"
#define cataLimitPort 'a'
//DEFS//
//Vis Sensor
pros::Vision visSensor(11);


//Motors
pros::Motor cata(7, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor in(8, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_DEGREES);


//Controller (Defined two times for okapi uses)
pros::Controller master(pros::E_CONTROLLER_MASTER);
Controller controller;


//Sensors
pros::ADIDigitalIn cataLimit(cataLimitPort);


//Drive Motors
MotorGroup left = MotorGroup({-3, 5});
MotorGroup right = MotorGroup({-1, 4});

//DEFINE CHASSIS//
/*
ChassisControllerIntegrated robotChassis = ChassisControllerFactory::create(
  left, right,
  AbstractMotor::gearset::green, // Speed gearset
  {4_in, 9.5_in} // 4 inch wheels
);

/*
AsyncMotionProfileController profileController = AsyncControllerFactory::motionProfile(
  1.0,  // Maximum linear velocity of the Chassis in m/s
  2.0,  // Maximum linear acceleration of the Chassis in m/s/s
  10.0, // Maximum linear jerk of the Chassis in m/s/s/s
  robotChassis // Chassis Controller
);
/*
//ENCODER DRIVEGET//
int driveGet()
{
    return (abs((frontRight.get_position() + frontLeft.get_position() + backRight.get_position() + backLeft.get_position()) / 4));
}


//FUNCTIONS//
/*
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
/*
void encoderReset()
{
    frontRight.set_zero_position(0);
    frontLeft.set_zero_position(0);
    backRight.set_zero_position(0);
    backLeft.set_zero_position(0);
}
*/
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