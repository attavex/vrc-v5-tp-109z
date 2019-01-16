#include "main.h"

void redAuton()
{
   while(!cataLimit.get_value())
   {
     cata.move(-127);
   }
   cata.move(-10);
    in.move(127);
   left.tarePosition();
   right.tarePosition();
  left.moveAbsolute(-1200, 200);
  right.moveAbsolute(-1200, 200);
  pros::delay(1600);
  left.moveVoltage(9000);
  right.moveVoltage(9000);
  pros::delay(2000);
  left.moveVoltage(0);
  right.moveVoltage(0);
  pros::delay(300);
  left.moveRelative(-300, 200);
  right.moveRelative(-300, 200);
  pros::delay(1000);
  left.moveRelative(276, 200);
  right.moveRelative(-276, 200);
  pros::delay(600);
  left.moveRelative(200, 200);
  right.moveRelative(200, 200);
  pros::delay(700);
  cata.move(-127);
  pros::delay(300);
  cata.move(0);
  pros::delay(200);
  in.move(0);
  left.moveRelative(-100, 200);
  right.moveRelative(100, 200);
  pros::delay(600);
  left.moveVoltage(9000);
  right.moveVoltage(8500);
  pros::delay(2000);
  left.moveVoltage(0);
  right.moveVoltage(0);
  in.move(-90);
  pros::delay(300);
  left.moveRelative(-800, 200);
  right.moveRelative(-800, 200);
  pros::delay(1000);
  left.moveRelative(-276, 200);
  right.moveRelative(276, 200);
  pros::delay(600);
  left.moveRelative(-700, 200);
  right.moveRelative(-700, 200);

}

void blueAuton()
{

}

void redBackAuton()
{

}

void blueBackAuton()
{

}

void progSkills()
{

}






void autonomous() 
{ 
  
redAuton();












/**
 * autonSelect = 1 is Red side
 * autonSelect = 2 is Blue side
 * autonSelect = 3 is Red side back
 * autonSelect = 4 is Blue side back
 * autonSelect = 5 is Prog Skills
 

   if (autonSelect == 1)
   {
      //RED SIDE AUTON
   }
   else if (autonSelect == 2)
   {
      //BLUE SIDE AUTON
   }
   else if (autonSelect == 3)
   {
      //RED SIDE BACK AUTON
   }
   else if (autonSelect == 4)
   {
      //BLUE SIDE BACK AUTON
   }
   else if (autonSelect == 5)
   {
      //PROGRAMMING SKILLS
   }
   */
}