#include "main.h"
using namespace pros;

void opcontrol() {
	/*
lv_obj_t * title = lv_label_create(lv_scr_act(), NULL);
lv_label_set_text(title, "109-zoomin-zesty-zuper-zylophone-zebras");
lv_obj_align(title, NULL, LV_ALIGN_IN_TOP_MID, 0, 20);  /*Align to the top*/
 //pros::lcd::initialize();
  lv_style_t screen_style;
  lv_style_copy(&screen_style, &lv_style_plain_color);
  screen_style.body.main_color = LV_COLOR_MAGENTA;
  screen_style.body.grad_color = LV_COLOR_MAGENTA;

  lv_obj_t* scr = lv_obj_create(NULL, NULL);
  lv_scr_load(scr);

  lv_obj_set_style(scr, &screen_style);

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
