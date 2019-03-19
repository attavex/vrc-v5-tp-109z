#include "main.h"
#define cataLimitPort 'a'
//DEFS//
//Vis Sensor
pros::Vision visSensor(11, pros::vision_zero(1));

//Motors
pros::Motor cata(6, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor in(7, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor twoBar(5, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor pocketKnife(2, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);


//Controller (Defined two times for okapi uses)
pros::Controller master(pros::E_CONTROLLER_MASTER);
Controller controller;


//Sensors
pros::ADIDigitalIn cataLimit(cataLimitPort);


//Drive Motors
MotorGroup left = MotorGroup({3, 10});
MotorGroup right = MotorGroup({-8, -9});

//DEFINE CHASSIS//
ChassisControllerPID robotChassis = ChassisControllerFactory::create(
  left, right,
  IterativePosPIDController::Gains{0.001, 0.0005, 0.00005},
  IterativePosPIDController::Gains{0, 0, 0},
  IterativePosPIDController::Gains{0.0217, 0.0013, 0.000585}, //0.0025 , 0.0048, 0.00
  AbstractMotor::gearset::green,
  {4_in, 9.5_in}
);
/*
ChassisControllerIntegrated robotChassis = ChassisControllerFactory::create(
  left, right,
  AbstractMotor::gearset::green, // Speed gearset
  {4_in, 13_in} // 4 inch wheels and a 9.5 inch wheelbase
);
*/
//static SettledUtil create(double iatTargetError = 50, double iatTargetDerivative = 5, QTime iatTargetTime = 250_ms);

AsyncMotionProfileController profileController = AsyncControllerFactory::motionProfile(
  2.0,  // Maximum linear velocity of the Chassis in m/s
  1.5,  // Maximum linear acceleration of the Chassis in m/s/s
  4.0, // Maximum linear jerk of the Chassis in m/s/s/s
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
        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) cata.move(127);
        else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) cata.move(-127);
        else
        {
            if (!cataLimit.get_value())
            {
                cata.move(127);
            }
            else
            {
                cata.move(15);
            }
        }
    }
}