#include "main.h"

void redAuton()
{
 in.move(127);
   while(!cataLimit.get_value())
   {
     cata.move(-127);
   }
   cata.move(-10);
   left.tarePosition();
   right.tarePosition();
  left.moveAbsolute(-1200, 200);
  right.moveAbsolute(-1200, 200);
  pros::delay(1600);
  left.moveRelative(975, 200);
  right.moveRelative(975, 200);
  pros::delay(700);
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