#include "main.h"
using namespace pros;

void opcontrol() {
/*Create label on the screen. Inherit the style of the screen*/

lv_obj_t * title = lv_label_create(lv_scr_act(), NULL);
lv_label_set_text(title, "109-zoomin-zesty-zuper-zylophone-zebras");
lv_obj_align(title, NULL, LV_ALIGN_IN_TOP_MID, 0, 20);  /*Align to the top*/
 //pros::lcd::initialize();
	while (true) {
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
		in = inSpeedNormal + inSpeedFast;

		//CATA
		if (master.get_digital(E_CONTROLLER_DIGITAL_R1)) //wind up/go down 
	{
		pros::Task windCata(cataWind, NULL);
        //taskCreate(cataWind, TASK_DEFAULT_STACK_SIZE, NULL, TASK_PRIORITY_DEFAULT);
		//task_create(cataWind);
	}
	else if (master.get_digital(E_CONTROLLER_DIGITAL_R2)) //launch/go up then reset
	{
		pros::Task launchCata(cataLaunch, NULL);
		//taskCreate(cataLaunch, TASK_DEFAULT_STACK_SIZE, NULL, TASK_PRIORITY_DEFAULT);
		//task_create(cataLaunch);
	}
	else
	{
		cata.move(-10);
	}
		pros::delay(20);
	}
}
