#include "main.h"
static lv_obj_t * background;
void opcontrol()
{ 
	//CATA//
	pros::Task activityCata(cataActivity, NULL);
	
	//LVGL//
  background = lv_page_create(NULL, NULL);
  lv_scr_load(background);

   /* Creates Tab View */
    lv_obj_t * tabViewOne = lv_tabview_create(background, NULL);
    lv_tabview_add_tab(tabViewOne, "Motor Values");
    lv_tabview_add_tab(tabViewOne, "Sensor Values");
	lv_obj_set_size(tabViewOne, LV_HOR_RES, LV_VER_RES);
	/*
    //Left Drive Creation
	lv_obj_t * leftDriveLab = lv_label_create(tabViewOne, NULL);
	lv_obj_align(leftDriveLab, label, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 0);
    lv_obj_set_height(leftDriveLab, 80);


*/

	
	while (true)
	{
		//LVGL//
		//lv_label_set_text(leftDriveLab, "")



		//DRIVE
		//robotChassis.arcade(controller.getAnalog(ControllerAnalog::leftY), controller.getAnalog(ControllerAnalog::leftX));
		if(controller.getDigital(ControllerDigital::X))
		{
		  left.moveVoltage(-2400);
		  right.moveVoltage(2400);
		}
		else if(controller.getDigital(ControllerDigital::A))
		{
		  left.moveVoltage(2400);
		  right.moveVoltage(-2400);
		}
		else
		{
          robotChassis.arcade(controller.getAnalog(ControllerAnalog::leftY), controller.getAnalog(ControllerAnalog::leftX));
		}

		//INTAKE
		int inSpeedNormal = master.get_analog(ANALOG_RIGHT_Y);
		int inSpeedFast = master.get_analog(ANALOG_RIGHT_X);
		in = inSpeedNormal;
		/*
		if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1))
		{
			in.move(-127);
		}
		else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2))
		{
			in.move(127);
		}
		*/

        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) pocketKnife.move(127);
        else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) pocketKnife.move(-127);
		else pocketKnife.move(8);

		if(controller.getDigital(ControllerDigital::up)) descore.move(127);
		else if(controller.getDigital(ControllerDigital::down)) descore.move(-127);
		else descore.move(-8);
		
/*
        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
		{
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(223, 200); 
  right.moveAbsolute(-223, 200);
   while((left.getPosition() < 210) && (right.getPosition() > -210))
  {
    pros::delay(20);
  }
  left.moveVoltage(-11000);
  right.moveVoltage(11000);
  pros::delay(100);
  left.moveVoltage(0);
  right.moveVoltage(0);
		}
*/
	pros::delay(20);
	}
}
