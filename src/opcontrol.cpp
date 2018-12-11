#include "main.h"
using namespace pros;

void opcontrol()
{
	//CATA//
	pros::Task activityCata(cataActivity, NULL);
	while (true)
	{
		//DRIVE
		int speed = master.get_analog(ANALOG_LEFT_Y);
		int turn = master.get_analog(ANALOG_LEFT_X);
		frontRight = -speed + turn;
		backRight = -speed + turn;
		frontLeft = speed + turn;
		backLeft = speed + turn;

		//INTAKE
		int inSpeedNormal = master.get_analog(ANALOG_RIGHT_Y);
		int inSpeedFast = master.get_analog(ANALOG_RIGHT_X);
		in = -inSpeedNormal + 50;
		if (master.get_digital(E_CONTROLLER_DIGITAL_L1))
		{
			in.move(-127);
		}
		else if (master.get_digital(E_CONTROLLER_DIGITAL_L2))
		{
			in.move(127);
		}

		pros::delay(20);
	}
}
