#include "main.h"
static lv_obj_t * background;
void opcontrol()
{ 
	robotChassis.stop();
	//CATA//
	pros::Task activityCata(cataActivity, NULL);
	pros::Task visAutoAim(visionAim, NULL);
	
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
		if(controller.getDigital(ControllerDigital::X))
		{
		  left.moveVoltage(-2800);
		  right.moveVoltage(2800);
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
        if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) twoBar.move(-127);
      else if (master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) twoBar.move(127);
		else if(barPot.get_value() < 80) twoBar.move(12);
		else if(barPot.get_value() > 100) twoBar.move(-10);
		else twoBar.move(0);
    

printf("%d\n", barPot.get_value());

/*
		if(controller.getDigital(ControllerDigital::X)) cata.move(127);
		else if(controller.getDigital(ControllerDigital::A)) cata.move(-127);
		else cata.move(12);
*/
		if(controller.getDigital(ControllerDigital::up)) robotChassis.stop();

		if(controller.getDigital(ControllerDigital::down))
		{
			robotChassis.setMaxVelocity(125);
			left.tarePosition();
			right.tarePosition();
			robotChassis.turnAngle(225);
			robotChassis.setMaxVelocity(200);
			/*
			profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{2_ft, 6_ft, 90_deg}}, "hitFlag");
      profileController.setTarget("hitFlag");
			profileController.waitUntilSettled();
			*/
		} 
		
/*
        if (controller.getDigital(ControllerDigital::left)) //auton test
		{
  in.move(-127);
  twoBar.move(15);
  left.tarePosition();
  right.tarePosition();
  robotChassis.moveDistanceAsync(3_ft);
    while(!cataLimit.get_value())
   {
    cataLeft.move(127);
    cataRight.move(-127);
   }
	 cataLeft.move(10);
   cataRight.move(10);
   robotChassis.waitUntilSettled();
   //pros::delay(200);
   robotChassis.moveDistanceAsync(-3.4_ft);
   pros::delay(400);
   in.move(50);
   pros::delay(100);
   in.move(-127);
   robotChassis.waitUntilSettled();
	 pros::delay(100);
	 robotChassis.turnAngleAsync(90_deg);
	 robotChassis.waitUntilSettled();
	 cataLeft.move(127);
   cataRight.move(-127);
	 pros::delay(400);
	 cataLeft.move(0);
   cataRight.move(0);
	 robotChassis.moveDistanceAsync(4.5_ft);
	    while(!cataLimit.get_value())
   {
    cataLeft.move(127);
    cataRight.move(-127);
   }
	 cataLeft.move(10);
   cataRight.move(10);
	}
	*/
	}
}
