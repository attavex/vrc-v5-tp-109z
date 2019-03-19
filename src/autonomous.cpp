#include "main.h"

void redAuton()
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
   //pros::delay(200);
   robotChassis.moveDistanceAsync(-3.4_ft);
   pros::delay(400);
   in.move(50);
   pros::delay(100);
   in.move(-127);
   robotChassis.waitUntilSettled();
   robotChassis.setMaxVelocity(100);
   pros::delay(100);
   //in.move(0);
   robotChassis.turnAngle(-113_deg);
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
   robotChassis.turnAngle(-20_deg);
   pros::delay(50);
   robotChassis.setMaxVelocity(200);
   robotChassis.moveDistance(3_ft);
   in.move(0);

}
void blueAuton()
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
   //pros::delay(200);
   robotChassis.moveDistanceAsync(-3.4_ft);
   pros::delay(400);
   in.move(50);
   pros::delay(100);
   in.move(-127);
   robotChassis.waitUntilSettled();
   robotChassis.setMaxVelocity(100);
   pros::delay(100);
   //in.move(0);
   robotChassis.turnAngle(113_deg);
   robotChassis.waitUntilSettled();
   pros::delay(150);
   cata.move(127);
   pros::delay(200);
   robotChassis.setMaxVelocity(200);
   profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{4_ft, -0.5_ft, 0_deg}}, "hitFlag");
  profileController.setTarget("hitFlag");
  /*
   right.tarePosition();
   left.tarePosition();
   robotChassis.turnAngle(30_deg);
   */
   //pros::delay(300);
   //robotChassis.setMaxVelocity(200);
   //robotChassis.moveDistanceAsync(4_ft);
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
   robotChassis.turnAngle(-100_deg);
   robotChassis.setMaxVelocity(200);
    left.moveVoltage(-9000);
   right.moveVoltage(-9000);
   pros::delay(300);
   left.moveVoltage(0);
   right.moveVoltage(0);
   in.move(127);
   robotChassis.moveDistance(2.3_ft);
   robotChassis.setMaxVelocity(150);
   robotChassis.turnAngle(55_deg);
   in.move(-127);
   pros::delay(200);
   cata.move(127);
   pros::delay(400);
   cata.move(0);
   pros::delay(200);
   robotChassis.turnAngle(20_deg);
   pros::delay(50);
   robotChassis.setMaxVelocity(200);
   robotChassis.moveDistance(3_ft);
   in.move(0);

  
}

void redBackAutonPark()
{
  pocketKnife.move(-10);
  in.move(-127);
  twoBar.move(5);
  left.tarePosition();
  right.tarePosition();
  robotChassis.setMaxVelocity(200);
  robotChassis.moveDistanceAsync(3_ft);
    while(!cataLimit.get_value())
   {
     cata.move(127);
   }
   cata.move(10);
   robotChassis.waitUntilSettled();
   pros::delay(300);
   robotChassis.moveDistance(-0.6_ft);
   pros::delay(200);
   robotChassis.setMaxVelocity(150);
   robotChassis.turnAngle(-100_deg);
   pros::delay(200);
   left.moveVoltage(11000);
   right.moveVoltage(11000);
   pros::delay(1250);
   left.moveVoltage(-8000);
   right.moveVoltage(-8000);
   pros::delay(200);
   left.moveVoltage(0);
   right.moveVoltage(0);




}

void blueBackAutonPark()
{
   pocketKnife.move(-10);
  in.move(-127);
 twoBar.move(5);
  left.tarePosition();
  right.tarePosition();
  robotChassis.setMaxVelocity(200);
  robotChassis.moveDistanceAsync(3_ft);
    while(!cataLimit.get_value())
   {
     cata.move(127);
   }
   cata.move(10);
   robotChassis.waitUntilSettled();
   pros::delay(300);
   robotChassis.moveDistance(-0.6_ft);
   pros::delay(200);
   robotChassis.setMaxVelocity(150);
   robotChassis.turnAngle(100_deg);
   pros::delay(200);
   left.moveVoltage(11000);
   right.moveVoltage(11000);
   pros::delay(1250);
   left.moveVoltage(-8000);
   right.moveVoltage(-8000);
   pros::delay(200);
   left.moveVoltage(0);
   right.moveVoltage(0);

}

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
   robotChassis.turnAngle(-93_deg);
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
     progSkills();
     //robotChassis.moveDistance(-4_ft);
  //robotChassis.waitUntilSettled();
   }
   else if (autonNumber == 1) //RED FRONT AUTON
   {
     redAuton();
     /*
      robotChassis.setMaxVelocity(150);
      right.tarePosition();
      left.tarePosition();
       robotChassis.turnAngle(100_deg);
    */
  //robotChassis.waitUntilSettled();
   }
   else if (autonNumber == 2) //RED BACK AUTON + PARK
   {
     //robotChassis.turnAngle(-100_deg);
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
      blueBackAutonNoPark();
   }
   else if (autonNumber == 6) //RED BACK AUTON NO PARK
   {
     redBackAutonNoPark();
   }

}