#include "main.h"

static SettledUtil create(double iatTargetError = 50, double iatTargetDerivative = 5, QTime iatTargetTime = 250_ms);
void redAuton()
{
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
  while((left.getPosition() < 1280) && (right.getPosition() < 1280))
  {
    pros::delay(20);
  }
  pros::delay(700);
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
  left.moveAbsolute(120, 200); 
  right.moveAbsolute(120, 200);
   while((left.getPosition() < 120) && (right.getPosition() < 120))
  {
    pros::delay(20);
  }
  pros::delay(300);
left.moveVoltage(-8000);
right.moveVoltage(8000);
pros::delay(300);
left.moveVoltage(0);
right.moveVoltage(0);
  pros::delay(600);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(220, 200); 
  right.moveAbsolute(220, 200);
   while((left.getPosition() < 220) && (right.getPosition() < 220))
  {
    pros::delay(20);
  }
  pros::delay(600);
  cata.move(127);
  pros::delay(500);
  cata.move(0);
  pros::delay(300);
profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3.5_ft, 0_ft, 0_deg}}, "hitFlag");
  profileController.setTarget("hitFlag");
  profileController.waitUntilSettled();
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-640, 200); 
  right.moveAbsolute(-640, 200);
   while((left.getPosition() > -640) && (right.getPosition() > -640))
  {
    pros::delay(20);
  }
 left.moveVoltage(8000);
right.moveVoltage(-8000);
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
pros::delay(500);
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
pros::delay(300);
left.moveVoltage(0);
right.moveVoltage(0);
profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3.8_ft, 0_ft, 0_deg}}, "lineUpForPark");
  profileController.setTarget("lineUpForPark");
  profileController.waitUntilSettled();
pros::delay(100);
left.moveVoltage(-8000);
right.moveVoltage(8000);
pros::delay(300);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(300);
left.moveVoltage(11000);
right.moveVoltage(11000);
pros::delay(1750);
left.moveVoltage(0);
right.moveVoltage(0);

}

void blueAuton()
{
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
  while((left.getPosition() < 1280) && (right.getPosition() < 1280))
  {
    pros::delay(20);
  }
  pros::delay(700);
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
  left.moveAbsolute(120, 200); 
  right.moveAbsolute(120, 200);
   while((left.getPosition() < 120) && (right.getPosition() < 120))
  {
    pros::delay(20);
  }
  pros::delay(300);
left.moveVoltage(8000);
right.moveVoltage(-8000);
pros::delay(300);
left.moveVoltage(0);
right.moveVoltage(0);
  pros::delay(600);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(220, 200); 
  right.moveAbsolute(220, 200);
   while((left.getPosition() < 220) && (right.getPosition() < 220))
  {
    pros::delay(20);
  }
  pros::delay(600);
  cata.move(127);
  pros::delay(500);
  cata.move(0);
  pros::delay(300);
profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3.5_ft, 0_ft, 0_deg}}, "hitFlag");
  profileController.setTarget("hitFlag");
  profileController.waitUntilSettled();
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-640, 200); 
  right.moveAbsolute(-640, 200);
   while((left.getPosition() > -640) && (right.getPosition() > -640))
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
pros::delay(500);
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
 left.moveVoltage(-8000);
right.moveVoltage(8000);
pros::delay(300);
left.moveVoltage(0);
right.moveVoltage(0);
profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3.8_ft, 0_ft, 0_deg}}, "lineUpForPark");
  profileController.setTarget("lineUpForPark");
  profileController.waitUntilSettled();
pros::delay(100);
left.moveVoltage(8000);
right.moveVoltage(-8000);
pros::delay(300);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(300);
left.moveVoltage(11000);
right.moveVoltage(11000);
pros::delay(1750);
left.moveVoltage(0);
right.moveVoltage(0);

}

void redBackAutonPark()
{

}

void blueBackAutonPark()
{

}

void progSkills()
{
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
  while((left.getPosition() < 1280) && (right.getPosition() < 1280))
  {
    pros::delay(20);
  }
  pros::delay(700);
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
  left.moveAbsolute(120, 200); 
  right.moveAbsolute(120, 200);
   while((left.getPosition() < 120) && (right.getPosition() < 120))
  {
    pros::delay(20);
  }
  pros::delay(300);
left.moveVoltage(-8000);
right.moveVoltage(8000);
pros::delay(300);
left.moveVoltage(0);
right.moveVoltage(0);
  pros::delay(600);
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(220, 200); 
  right.moveAbsolute(220, 200);
   while((left.getPosition() < 220) && (right.getPosition() < 220))
  {
    pros::delay(20);
  }
  pros::delay(600);
  cata.move(127);
  pros::delay(500);
  cata.move(0);
  pros::delay(300);
profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3.5_ft, 0_ft, 0_deg}}, "hitFlag");
  profileController.setTarget("hitFlag");
  profileController.waitUntilSettled();
  left.tarePosition();
  right.tarePosition();
  left.moveAbsolute(-640, 200); 
  right.moveAbsolute(-640, 200);
   while((left.getPosition() > -640) && (right.getPosition() > -640))
  {
    pros::delay(20);
  }
 left.moveVoltage(8000);
right.moveVoltage(-8000);
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
pros::delay(500);
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
pros::delay(300);
left.moveVoltage(0);
right.moveVoltage(0);
profileController.generatePath({Point{0_ft, 0_ft, 0_deg}, Point{3.8_ft, 0_ft, 0_deg}}, "lineUpForPark");
  profileController.setTarget("lineUpForPark");
  profileController.waitUntilSettled();
pros::delay(100);
left.moveVoltage(-8000);
right.moveVoltage(8000);
pros::delay(300);
left.moveVoltage(0);
right.moveVoltage(0);
pros::delay(300);
left.moveVoltage(11000);
right.moveVoltage(11000);
pros::delay(2300);
left.moveVoltage(0);
right.moveVoltage(0);


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