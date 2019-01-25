#include "main.h"
static lv_obj_t * background;
void opcontrol()
{
  background = lv_page_create(NULL, NULL);
  lv_scr_load(background);

   /* Creates Tab View */
    lv_obj_t * tabViewOne = lv_tabview_create(background, NULL);
    lv_tabview_add_tab(tabViewOne, "Motor Values");
    lv_tabview_add_tab(tabViewOne, "Sensor Values");
	lv_obj_set_size(tabViewOne, LV_HOR_RES, LV_VER_RES);

	//lv_obj_t * 






	
	//CATA//
	//pros::Task activityCata(cataActivity, NULL);
	while (true)
	{
		
		//DRIVE
		robotChassis.arcade(controller.getAnalog(ControllerAnalog::leftY), controller.getAnalog(ControllerAnalog::leftX));

		//INTAKE
		int inSpeedNormal = master.get_analog(ANALOG_RIGHT_Y);
		int inSpeedFast = master.get_analog(ANALOG_RIGHT_X);
		in = inSpeedNormal;
		if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1))
		{
			in.move(-127);
		}
		else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2))
		{
			in.move(127);
		}
/*
         if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) cata.move(-127);
        else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) cata.move(127);
		else cata.move(13);
		*/

        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_R1))
		{
	profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3_ft, 0_ft, 0_deg}}, "Test");
      profileController.setTarget("Test");
      profileController.waitUntilSettled();
		}




		pros::delay(20);
	}
}
