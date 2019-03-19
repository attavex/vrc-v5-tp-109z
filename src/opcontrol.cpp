#include "main.h"
static lv_obj_t * background;
void opcontrol()
{ 
	robotChassis.stop();
	//CATA//
	pros::Task activityCata(cataActivity, NULL);
	//pros::Task visAutoAim(visionAim, NULL);
	
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
		robotChassis.arcade(controller.getAnalog(ControllerAnalog::leftY), controller.getAnalog(ControllerAnalog::leftX));
		/*
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
*/
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

        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) twoBar.move(-127);
      else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) twoBar.move(127);
		else twoBar.move(5);
/*
		if(controller.getDigital(ControllerDigital::X)) cata.move(127);
		else if(controller.getDigital(ControllerDigital::A)) cata.move(-127);
		else cata.move(12);
*/
		if(controller.getDigital(ControllerDigital::up)) robotChassis.stop();

		if(controller.getDigital(ControllerDigital::down))
		{
			robotChassis.setMaxVelocity(150);
			robotChassis.turnAngle(55_deg);
			robotChassis.setMaxVelocity(200);
		} 
		
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
