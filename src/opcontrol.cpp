#include "main.h"
using namespace pros;

void opcontrol() {
lv_obj_t * title = lv_label_create(lv_scr_act(), NULL);
lv_label_set_text(title, "109-zoomin-zesty-zuper-zylophone-zebras");
lv_obj_align(title, NULL, LV_ALIGN_IN_TOP_MID, 0, 20);  /*Align to the top*/
 //pros::lcd::initialize();

 //CATA//
 pros::Task activityCata(cataActivity, NULL);
	while(true) {
		//pros::lcd::print(0, "L-Switch -  %d\n", cataLimit.get_value());
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
		in = inSpeedNormal;
/*
		//CATA LAUNCH//
		if (master.get_digital(E_CONTROLLER_DIGITAL_R1))
		{
			cata.move(-127);
		}
		else
		{
			cata.move(-10);
		}
		*/
		pros::delay(20);
	}
}
