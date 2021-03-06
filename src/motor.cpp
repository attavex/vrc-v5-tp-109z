#include "main.h"
#define cataLimitPort 'h'
//DEFS//
//Vis Sensor
pros::Vision visSensor(19, pros::vision_zero(1));

//Motors
pros::Motor cataRight(13, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor cataLeft(12, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor in(6, pros::E_MOTOR_GEARSET_36, false, pros::E_MOTOR_ENCODER_DEGREES);
pros::Motor twoBar(20, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);
//pros::Motor pocketKnife(2, pros::E_MOTOR_GEARSET_18, false, pros::E_MOTOR_ENCODER_DEGREES);


//Controller (Defined two times for okapi uses)
pros::Controller master(pros::E_CONTROLLER_MASTER);
Controller controller;


//Sensors
pros::ADIDigitalIn cataLimit(cataLimitPort);
pros::ADIAnalogIn barPot('a');


//Drive Motors
MotorGroup left = MotorGroup({1, 14});
MotorGroup right = MotorGroup({-3, -15});

//DEFINE CHASSIS//
ChassisControllerPID robotChassis = ChassisControllerFactory::create(
  left, right,
  IterativePosPIDController::Gains{0.003, 0, 0.00015}, //0.001, 0.0005, 0.00005      0.7...0.0003
  IterativePosPIDController::Gains{0, 0, 0},
  IterativePosPIDController::Gains{0.009, 0.000031, 0.00026}, //0.005 , 0.008, 0.000077
  AbstractMotor::gearset::green,
  {4_in, 9_in}
);

/*
ChassisControllerIntegrated robotChassis = ChassisControllerFactory::create(
  left, right,
  AbstractMotor::gearset::green, // Speed gearset
  {4_in, 9_in} // 4 inch wheels and a 9.5 inch wheelbase
);
*/
//static SettledUtil create(double iatTargetError = 50, double iatTargetDerivative = 5, QTime iatTargetTime = 250_ms);

AsyncMotionProfileController profileController = AsyncControllerFactory::motionProfile(
  2.0,  // Maximum linear velocity of the Chassis in m/s
  4.0,  // Maximum linear acceleration of the Chassis in m/s/s
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
        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
        {
           cataLeft.move(127);
            cataRight.move(-127);
        } 
        else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2))
        {
            cataLeft.move(-127);
            cataRight.move(127);
        }
        else if (controller.getDigital(ControllerDigital::left))
        {
            cataLeft.move(0);
            cataRight.move(0);
        }
        else
        {
            if (!cataLimit.get_value())
            {
               cataLeft.move(127);
               cataRight.move(-127);
            }
            
            else
            {
                cataLeft.move(10);
               cataRight.move(-10);
            }
        }
    }
}