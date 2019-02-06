#include "main.h"

void redAuton()
{
  pocketKnife.move(8);
in.move(-127);
  descore.move(-9);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(1300, 200); 
  right.moveAbsolute(1300, 200);
    while(!cataLimit.get_value())
   {
     cata.move(127);
   }
   cata.move(10);
  while((left.getPosition() < 1299) && (right.getPosition() < 1299))
  {
    pros::delay(20);
  }
  pros::delay(200);
   left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-1300, 200); 
  right.moveAbsolute(-1300, 200);
   while((left.getPosition() > -1300) && (right.getPosition() > -1300))
  {
    pros::delay(20);
  }
  left.moveVoltage(-4000);
right.moveVoltage(-4000);
pros::delay(500);
left.moveVoltage(0);
right.moveVoltage(0);
  pros::delay(600);
   left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(145, 200); 
  right.moveAbsolute(145, 200);
   while((left.getPosition() < 145) && (right.getPosition() < 145))
  {
    pros::delay(20);
  }
  pros::delay(300);
left.moveVoltage(-6000);
right.moveVoltage(6000);
pros::delay(470);
left.moveVoltage(0);
right.moveVoltage(0);
  pros::delay(300);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(150, 200); 
  right.moveAbsolute(150, 200);
   while((left.getPosition() < 150) && (right.getPosition() < 150))
  {
    pros::delay(20);
  }
  pros::delay(1000);
  cata.move(127);
  pros::delay(500);
  cata.move(0);
  pros::delay(300);

  left.moveVoltage(-8000);
right.moveVoltage(8000);
pros::delay(150);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(100);
 left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(230, 200); 
  right.moveAbsolute(230, 200);
   while((left.getPosition() > 230) && (right.getPosition() > 230))
  {
    pros::delay(20);
  }
  pros::delay(100);
  left.moveVoltage(8000);
right.moveVoltage(-8000);
pros::delay(100);
left.moveVoltage(0);
right.moveVoltage(0);

pros::delay(100);
profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3.5_ft, 0_ft, 0_deg}}, "hitFlag");
  profileController.setTarget("hitFlag");
  profileController.waitUntilSettled();
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-450, 200); 
  right.moveAbsolute(-450, 200);
   while((left.getPosition() > -450) && (right.getPosition() > -500))
  {
    pros::delay(20);
  }
 left.moveVoltage(8000);
right.moveVoltage(-8000);
pros::delay(315);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(200);
left.moveVoltage(-8000);
right.moveVoltage(-8000);
pros::delay(400);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(200);
  in.move(127);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(500, 200); 
  right.moveAbsolute(500, 200);
   while((left.getPosition() < 500) && (right.getPosition() < 500))
  {
    pros::delay(20);
  }
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-625, 200); 
  right.moveAbsolute(-625, 200);
   while((left.getPosition() > -625) && (right.getPosition() > -625))
  {
    pros::delay(20);
  }
  left.moveVoltage(-4000);
right.moveVoltage(-4000);
pros::delay(650);
left.moveVoltage(0);
right.moveVoltage(0);
  pros::delay(600);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(300, 200); 
  right.moveAbsolute(300, 200);
   while((left.getPosition() < 300) && (right.getPosition() < 300))
  {
    pros::delay(20);
  }
  pros::delay(400);
 left.moveVoltage(8000);
right.moveVoltage(-8000);
pros::delay(310);
/*
left.moveVoltage(0);
right.moveVoltage(0);
profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3.25_ft, 0_ft, 0_deg}}, "lineUpForPark");
  profileController.setTarget("lineUpForPark");
  profileController.waitUntilSettled();
pros::delay(100);
left.moveVoltage(-8000);
right.moveVoltage(8000);
pros::delay(320);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(300);
left.moveVoltage(11000);
right.moveVoltage(11000);
pros::delay(1750);
left.moveVoltage(0);
right.moveVoltage(0);
*/
}
void blueAuton()
{
   pocketKnife.move(8);
  in.move(-127);
  descore.move(-9);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(1300, 200); 
  right.moveAbsolute(1300, 200);
    while(!cataLimit.get_value())
   {
     cata.move(127);
   }
   cata.move(10);
  while((left.getPosition() < 1299) && (right.getPosition() < 1299))
  {
    pros::delay(20);
  }
  pros::delay(200);
   left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-1300, 200); 
  right.moveAbsolute(-1300, 200);
   while((left.getPosition() > -1300) && (right.getPosition() > -1300))
  {
    pros::delay(20);
  }
  left.moveVoltage(-4000);
right.moveVoltage(-4000);
pros::delay(500);
left.moveVoltage(0);
right.moveVoltage(0);
  pros::delay(600);
   left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(145, 200); 
  right.moveAbsolute(145, 200);
   while((left.getPosition() < 145) && (right.getPosition() < 145))
  {
    pros::delay(20);
  }
  pros::delay(300);
left.moveVoltage(8000);
right.moveVoltage(-8000);
pros::delay(336);
left.moveVoltage(0);
right.moveVoltage(0);
  pros::delay(300);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(200, 200); 
  right.moveAbsolute(200, 200);
   while((left.getPosition() < 200) && (right.getPosition() < 200))
  {
    pros::delay(20);
  }
  pros::delay(1000);
  cata.move(127);
  pros::delay(500);
  cata.move(0);
  pros::delay(300);
  left.moveVoltage(8000);
right.moveVoltage(-8000);
pros::delay(150);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(100);
 left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(210, 200); 
  right.moveAbsolute(210, 200);
   while((left.getPosition() > 210) && (right.getPosition() > 210))
  {
    pros::delay(20);
  }
  pros::delay(100);
  left.moveVoltage(-8000);
right.moveVoltage(8000);
pros::delay(100);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(100);
profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3.5_ft, 0_ft, 0_deg}}, "hitFlag");
  profileController.setTarget("hitFlag");
  profileController.waitUntilSettled();
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-590, 200); 
  right.moveAbsolute(-590, 200);
   while((left.getPosition() > -590) && (right.getPosition() > -590))
  {
    pros::delay(20);
  }
 left.moveVoltage(-8000);
right.moveVoltage(8000);
pros::delay(310);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(600);
  in.move(127);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(500, 200); 
  right.moveAbsolute(500, 200);
   while((left.getPosition() < 500) && (right.getPosition() < 500))
  {
    pros::delay(20);
  }
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-625, 200); 
  right.moveAbsolute(-625, 200);
   while((left.getPosition() > -625) && (right.getPosition() > -625))
  {
    pros::delay(20);
  }
  left.moveVoltage(-4000);
right.moveVoltage(-4000);
pros::delay(650);
left.moveVoltage(0);
right.moveVoltage(0);
  pros::delay(600);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(300, 200); 
  right.moveAbsolute(300, 200);
   while((left.getPosition() < 300) && (right.getPosition() < 300))
  {
    pros::delay(20);
  }
  pros::delay(400);
  /*
 left.moveVoltage(-8000);
right.moveVoltage(8000);
pros::delay(310);
left.moveVoltage(0);
right.moveVoltage(0);
profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3.5_ft, 0_ft, 0_deg}}, "lineUpForPark");
  profileController.setTarget("lineUpForPark");
  profileController.waitUntilSettled();
  /*
pros::delay(100);
left.moveVoltage(8000);
right.moveVoltage(-8000);
pros::delay(320);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(300);
left.moveVoltage(11000);
right.moveVoltage(11000);
pros::delay(1750);
left.moveVoltage(0);
right.moveVoltage(0);
*/

}

void redBackAutonPark()
{
   pocketKnife.move(8);
in.move(-127);
  descore.move(-9);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(1300, 200); 
  right.moveAbsolute(1300, 200);
    while(!cataLimit.get_value())
   {
     cata.move(127);
   }
   cata.move(10);
   while((left.getPosition() < 1299) && (right.getPosition() < 1299))
  {
    pros::delay(20);
  }
  in.move(-127);
  pros::delay(600);
   left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-180, 200); 
  right.moveAbsolute(-180, 200);
   while((left.getPosition() > -180) && (right.getPosition() > -180))
  {
    pros::delay(20);
  }
  in.move(-127);
  pros::delay(800);
  left.moveVoltage(-5000);
right.moveVoltage(5000);
pros::delay(500);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(900);
left.moveVoltage(11000);
right.moveVoltage(11000);
pros::delay(1050);
left.moveVoltage(0);
right.moveVoltage(0);

}

void blueBackAutonPark()
{
  pocketKnife.move(8);
in.move(-127);
  descore.move(-9);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(1300, 200); 
  right.moveAbsolute(1300, 200);
    while(!cataLimit.get_value())
   {
     cata.move(127);
   }
   cata.move(10);
   while((left.getPosition() < 1299) && (right.getPosition() < 1299))
  {
    pros::delay(20);
  }
  in.move(-127);
  pros::delay(600);
   left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-180, 200); 
  right.moveAbsolute(-180, 200);
   while((left.getPosition() > -180) && (right.getPosition() > -180))
  {
    pros::delay(20);
  }
  in.move(-127);
  pros::delay(800);
  left.moveVoltage(5000);
right.moveVoltage(-5000);
pros::delay(500);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(900);
left.moveVoltage(11000);
right.moveVoltage(11000);
pros::delay(1050);
left.moveVoltage(0);
right.moveVoltage(0);

}

void progSkills()
{
  robotChassis.moveDistance(2_ft);
  robotChassis.waitUntilSettled();
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
      blueBackAutonNoPark();
   }
   else if (autonNumber == 6) //RED BACK AUTON NO PARK
   {
     redBackAutonNoPark();
   }

}