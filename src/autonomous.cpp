#include "main.h"
void redAuton()
{
 in.move(127);
  twoBar.move(15);
  left.tarePosition();
  right.tarePosition();
  robotChassis.setMaxVelocity(125);
  robotChassis.moveDistanceAsync(3.02_ft);
  pros::delay(200);
  in.move(0);
    while(!cataLimit.get_value())
   {
    cataLeft.move(127);
    cataRight.move(-127);
   }
	 cataLeft.move(10);
   cataRight.move(-10);
   robotChassis.waitUntilSettled();
   pros::delay(200);
   robotChassis.moveDistanceAsync(-3.5_ft);
   in.move(-127);
   pros::delay(500);
   //in.move(50);
   robotChassis.setMaxVelocity(200);
   //in.move(-127);
   robotChassis.waitUntilSettled();
	 pros::delay(400);
   robotChassis.setMaxVelocity(125);
			left.tarePosition();
			right.tarePosition();
			robotChassis.turnAngle(-226);
			robotChassis.setMaxVelocity(100);
      pros::delay(100);
   robotChassis.moveDistance(0.4_ft);
   pros::delay(400);
   robotChassis.setMaxVelocity(200);
	 cataLeft.move(127);
   cataRight.move(-127);
	 pros::delay(400);
	 cataLeft.move(0);
   cataRight.move(0);
	 //robotChassis.moveDistanceAsync(4.5_ft);
   profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{4.1_ft, 0.15_ft, 0_deg}}, "hitFlag");
   profileController.setTarget("hitFlag");
	    while(!cataLimit.get_value())
   {
    cataLeft.move(127);
    cataRight.move(-127);
   }
	 cataLeft.move(10);
   cataRight.move(-10);
   profileController.waitUntilSettled();
   robotChassis.moveDistance(-4.15_ft);
   left.tarePosition();
	 right.tarePosition();
	 robotChassis.setMaxVelocity(125);
			robotChassis.turnAngle(132);//50 deg turn
			robotChassis.setMaxVelocity(200);
   in.move(127);
   robotChassis.moveDistanceAsync(5.7_ft);
   pros::delay(450);
   cataLeft.move(127);
   cataRight.move(-127);
	 pros::delay(400);
	 cataLeft.move(0);
   cataRight.move(0);
   pros::delay(700);
   robotChassis.waitUntilSettled();
   left.moveVoltage(-11000);
   right.moveVoltage(-11000);
   pros::delay(500);
   left.moveVoltage(0);
   right.moveVoltage(0);

}
void blueAuton()
{
  in.move(127);
  twoBar.move(15);
  left.tarePosition();
  right.tarePosition();
  robotChassis.setMaxVelocity(150);
  robotChassis.moveDistanceAsync(3.06_ft);
  pros::delay(200);
  in.move(0);
    while(!cataLimit.get_value())
   {
    cataLeft.move(127);
    cataRight.move(-127);
   }
	 cataLeft.move(10);
   cataRight.move(-10);
   robotChassis.waitUntilSettled();
   pros::delay(200);
   robotChassis.moveDistanceAsync(-3.3_ft);
   in.move(-127);
   pros::delay(500);
   //in.move(50);
   robotChassis.setMaxVelocity(200);
   //in.move(-127);
   robotChassis.waitUntilSettled();
	 pros::delay(400);
   //robotChassis.setMaxVelocity(100);
   left.tarePosition();
	 right.tarePosition();
	 robotChassis.setMaxVelocity(125);
			left.tarePosition();
			right.tarePosition();
			robotChassis.turnAngle(229);
			robotChassis.setMaxVelocity(200);
      pros::delay(100);
   robotChassis.moveDistance(0.4_ft);
   in.move(0);
   pros::delay(3500);
	 cataLeft.move(127);
   cataRight.move(-127);
	 pros::delay(400);
	 cataLeft.move(0);
   cataRight.move(0);
   in.move(-127);
	 //robotChassis.moveDistanceAsync(4.5_ft);
   profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{4.4_ft, -0.55_ft, 0_deg}}, "hitFlag");
   profileController.setTarget("hitFlag");
	    while(!cataLimit.get_value())
   {
    cataLeft.move(127);
    cataRight.move(-127);
   }
	 cataLeft.move(10);
   cataRight.move(-10);
   profileController.waitUntilSettled();
   robotChassis.moveDistance(-4.15_ft);
  left.tarePosition();
	 right.tarePosition();
	 robotChassis.setMaxVelocity(125);
			robotChassis.turnAngle(-127);//50 deg turn
			robotChassis.setMaxVelocity(200);
   in.move(127);
   robotChassis.moveDistanceAsync(3.2_ft); //5.5
   pros::delay(600);
   /*
   cataLeft.move(127);
   cataRight.move(-127);
	 pros::delay(400);
	 cataLeft.move(0);
   cataRight.move(0);
   */
   robotChassis.waitUntilSettled();
   in.move(0);
   left.moveVoltage(-11000);
   right.moveVoltage(-11000);
   pros::delay(500);
   left.moveVoltage(0);
   right.moveVoltage(0);

  


  
}

void redBackAutonPark()
{
  in.move(127);
  twoBar.move(15);
  left.tarePosition();
  right.tarePosition();
  robotChassis.setMaxVelocity(150);
  robotChassis.moveDistanceAsync(3.1_ft);
  pros::delay(100);
  in.move(0);
    while(!cataLimit.get_value())
   {
    cataLeft.move(127);
    cataRight.move(-127);
   }
	 cataLeft.move(10);
   cataRight.move(15);
   pros::delay(200);
   robotChassis.waitUntilSettled();
   pros::delay(200);
   robotChassis.setMaxVelocity(150);
   robotChassis.moveDistanceAsync(-1.8_ft);
   in.move(-127);
   robotChassis.waitUntilSettled();
   pros::delay(200);
   robotChassis.setMaxVelocity(125);
			left.tarePosition();
			right.tarePosition();
			robotChassis.turnAngle(-340); //135 deg turn
			robotChassis.setMaxVelocity(125);
      pros::delay(100);
      robotChassis.moveDistance(-2.2_ft);
      robotChassis.setMaxVelocity(200);
       twoBar.move(-127);
  pros::delay(100);
   profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{1_ft, .75_ft, 37_deg}}, "alignSelf");
  profileController.setTarget("alignSelf");
  pros::delay(200);
   twoBar.move(-10);
  profileController.waitUntilSettled();
   left.tarePosition();
	 right.tarePosition();
	 robotChassis.setMaxVelocity(125);
			left.tarePosition();
			right.tarePosition();
			robotChassis.turnAngle(-235);
			robotChassis.setMaxVelocity(200);
      pros::delay(100);
  twoBar.move(-127);
  left.moveVoltage(5000);
  right.moveVoltage(5000);
  pros::delay(500);
  while(barPot.get_value() < 3000)
  {
    twoBar.move(-127);
    pros::delay(10);
  }
  twoBar.move(0);
  pros::delay(200);
  left.moveVoltage(-11000);
  right.moveVoltage(-11000);
  pros::delay(500);
  left.moveVoltage(-4000);
  right.moveVoltage(-4000);
   while(barPot.get_value() > 800)
  {
    twoBar.move(80);
    pros::delay(10);
  }
  twoBar.move(-8);
   left.moveVoltage(0);
  right.moveVoltage(0);
  pros::delay(200);
  /*
  left.moveVoltage(-11000);
  right.moveVoltage(-11000);
  pros::delay(200);
  left.moveVoltage(0);
  right.moveVoltage(0);
  
     robotChassis.setMaxVelocity(125);
			left.tarePosition();
			right.tarePosition();
			robotChassis.turnAngle(-330);
			robotChassis.setMaxVelocity(200);
      pros::delay(100);
       left.moveVoltage(11000);
  right.moveVoltage(11000);
  pros::delay(2000);
  left.moveVoltage(0);
  right.moveVoltage(0);
  */
}

void blueBackAutonPark()
{
  in.move(127);
  twoBar.move(15);
  left.tarePosition();
  right.tarePosition();
  robotChassis.setMaxVelocity(150);
  robotChassis.moveDistanceAsync(3.1_ft);
  pros::delay(100);
  in.move(0);
    while(!cataLimit.get_value())
   {
    cataLeft.move(127);
    cataRight.move(-127);
   }
	 cataLeft.move(10);
   cataRight.move(15);
   pros::delay(200);
   robotChassis.waitUntilSettled();
   pros::delay(200);
   robotChassis.setMaxVelocity(150);
   robotChassis.moveDistanceAsync(-1.8_ft);
   in.move(-127);
   robotChassis.waitUntilSettled();
   pros::delay(200);
   robotChassis.setMaxVelocity(125);
			left.tarePosition();
			right.tarePosition();
			robotChassis.turnAngle(337.5); //135 deg turn
			robotChassis.setMaxVelocity(125);
      pros::delay(100);
      robotChassis.moveDistance(-2.2_ft);
      robotChassis.setMaxVelocity(200);
       twoBar.move(-127);
  pros::delay(100);
   profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{1_ft, -.75_ft, -35_deg}}, "alignSelf");
  profileController.setTarget("alignSelf");
  pros::delay(200);
   twoBar.move(-10);
  profileController.waitUntilSettled();
   left.tarePosition();
	 right.tarePosition();
	 robotChassis.setMaxVelocity(125);
			left.tarePosition();
			right.tarePosition();
			robotChassis.turnAngle(225);
			robotChassis.setMaxVelocity(200);
      pros::delay(100);
  twoBar.move(-127);
  left.moveVoltage(5000);
  right.moveVoltage(5000);
  pros::delay(500);
  while(barPot.get_value() < 3000)
  {
    twoBar.move(-127);
    pros::delay(10);
  }
  twoBar.move(0);
  pros::delay(200);
  left.moveVoltage(-11000);
  right.moveVoltage(-11000);
  pros::delay(500);
  left.moveVoltage(-4000);
  right.moveVoltage(-4000);
   while(barPot.get_value() > 800)
  {
    twoBar.move(80);
    pros::delay(10);
  }
  twoBar.move(-8);
   left.moveVoltage(0);
  right.moveVoltage(0);
  pros::delay(200);
  left.moveVoltage(-11000);
  right.moveVoltage(-11000);
  pros::delay(2600);
  left.moveVoltage(0);
  right.moveVoltage(0);
  


}
/*
void progSkills()
{
  pocketKnife.move(-10);
  in.move(-127);
 twoBar.move(5);
  left.tarePosition();
  right.tarePosition();
  robotChassis.moveDistanceAsync(3_ft);
    while(!cataLimit.get_value())
   {
     cata.move(127);
   }
   cata.move(10);
   robotChassis.waitUntilSettled();
   pros::delay(200);
   robotChassis.moveDistance(-1_ft);
   pros::delay(600);
   in.move(127);
   robotChassis.moveDistance(2_ft);
   pros::delay(400);
   robotChassis.moveDistanceAsync(-4.4_ft);
   pros::delay(400);
   in.move(50);
   pros::delay(100);
   in.move(-127);
   robotChassis.waitUntilSettled();
   robotChassis.setMaxVelocity(100);
   pros::delay(100);
   //in.move(0);
   robotChassis.turnAngle(-90_deg);
   robotChassis.waitUntilSettled();
   pros::delay(150);
   cata.move(127);
   pros::delay(200);
   robotChassis.setMaxVelocity(200);
   profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{4_ft, 0.35_ft, 0_deg}}, "hitFlag");
  profileController.setTarget("hitFlag");
  /*
   right.tarePosition();
   left.tarePosition();
   robotChassis.turnAngle(30_deg);
   */
   //pros::delay(300);
   //robotChassis.setMaxVelocity(200);
   //robotChassis.moveDistanceAsync(4_ft);



/*



     while(!cataLimit.get_value())
   {
     cata.move(127);
   }
   cata.move(10);
     profileController.waitUntilSettled();
   //pros::delay(100);
   //robotChassis.waitUntilSettled();
   robotChassis.moveDistance(-2.1_ft);
   robotChassis.setMaxVelocity(150);
   robotChassis.turnAngle(100_deg);
   robotChassis.setMaxVelocity(200);
    left.moveVoltage(-9000);
   right.moveVoltage(-9000);
   pros::delay(300);
   left.moveVoltage(0);
   right.moveVoltage(0);
   in.move(127);
   robotChassis.moveDistance(2.3_ft);
   robotChassis.setMaxVelocity(150);
   robotChassis.turnAngle(-55_deg);
   in.move(-127);
   pros::delay(200);
   cata.move(127);
   pros::delay(400);
   cata.move(0);
   pros::delay(200);
   robotChassis.setMaxVelocity(200);
   robotChassis.moveDistance(4_ft);
   in.move(0);

}

void blueBackAutonNoPark()
{

}

void redBackAutonNoPark()
{

}

 
*/

void autonomous() 
{ 

/**
 * autonNumber = 0 is Prog skills
 * autonNumber = 1 is Red side front
 * autonNumber = 2 is Red side back + park
 * autonNumber = 3 is Blue side front
 * autonNumber = 4 is Blue side back + park
 * autonNumber = 5 is Blue side back no park
 * autonNumber = 6 is Red side back no park
 **/

   if (autonNumber == 0) //PROGRAMMING SKILLS
   {
    //progSkills();
    robotChassis.turnAngle(90_deg);

   }
   else if (autonNumber == 1) //RED FRONT AUTON
   {
     redAuton();
   }
   else if (autonNumber == 2) //RED BACK AUTON + PARK
   {
      redBackAutonPark();
   }
   else if (autonNumber == 3) //BLUE FRONT AUTON
   {
      blueAuton();
   }
   else if (autonNumber == 4) //BLUE BACK AUTON + PARK
   {
      blueBackAutonPark();
   }
   else if (autonNumber == 5) //BLUE BACK AUTON NO PARK
   {
      //blueBackAutonNoPark();
   }
   else if (autonNumber == 6) //RED BACK AUTON NO PARK
   {
     //redBackAutonNoPark();
   }

}
