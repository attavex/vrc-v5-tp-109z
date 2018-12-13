#include "main.h"


void opcontrol()
{
	//CATA//
	pros::Task activityCata(cataActivity, NULL);
	while (true)
	{
		//DRIVE
		robotChassis.arcade(master.get_analog(ANALOG_LEFT_Y), master.get_analog(ANALOG_LEFT_X), 15);

		//INTAKE
		int inSpeedNormal = master.get_analog(ANALOG_RIGHT_Y);
		int inSpeedFast = master.get_analog(ANALOG_RIGHT_X);
		in = -inSpeedNormal + 50;
		if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1))
		{
			in.move(-127);
		}
		else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2))
		{
			in.move(127);
		}

		pros::delay(20);
	}
}
