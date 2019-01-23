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
  in.move(115);
  left.moveRelative(1200, 200);
  right.moveRelative(1200, 200);
  pros::delay(1200);
  left.moveVoltage(7000);
  right.moveVoltage(7000);
  pros::delay(400);
  left.moveVoltage(0);
  right.moveVoltage(0);
  left.moveRelative(-250, 200);
  right.moveRelative(-250, 200);
  pros::delay(600);
  in.move(60);
  left.moveRelative(290, 200);
  right.moveRelative(-290, 200);
  pros::delay(800);
 left.moveRelative(225, 200);
  right.moveRelative(225, 200);
  pros::delay(850);//longer than needed for balls to settle
  /*
  left.moveRelative(150, 200);
  right.moveRelative(150, 200);
  pros::delay(700);
  */
 in.move(0);
 pros::delay(500);
  cata.move(-127);
  pros::delay(300);
  cata.move(0);
  
  pros::delay(200);
  in.move(0);
  left.moveRelative(-75, 200);
  right.moveRelative(75, 200);
  pros::delay(420);
  left.moveRelative(333, 200);
  right.moveRelative(333, 200);
  pros::delay(550);
  left.moveRelative(95, 200);
  right.moveRelative(-95, 200);
  pros::delay(420);
  left.moveRelative(900, 200);
  right.moveRelative(900, 200);
  pros::delay(850);
  /*
  left.moveVoltage(10000);
  right.moveVoltage(10000);
  pros::delay(1500);
  
  left.moveVoltage(0);
  right.moveVoltage(0);
  */
  in.move(-70);
  left.moveRelative(-615, 200);
  right.moveRelative(-615, 200);
  pros::delay(1000);
  left.moveRelative(-270, 200);
  right.moveRelative(270, 200);
  pros::delay(550);
  left.moveVoltage(7000);
  right.moveVoltage(7000);
  pros::delay(400);
  left.moveVoltage(0);
  right.moveVoltage(0);
  pros::delay(100);
  left.moveRelative(-500, 200); ///travel 1380 in total
  right.moveRelative(-500, 200);
  pros::delay(400);
  left.moveRelative(-800, 150); ///travel 1380 in total
  right.moveRelative(-800, 150);
  pros::delay(1000);
  /*
  pros::delay(400);
  left.moveRelative(-380, 150); 
  right.moveRelative(-380, 150);
  pros::delay(400);
  */
  left.moveRelative(300, 200);
  right.moveRelative(300, 200);
  pros::delay(700);

  left.moveRelative(380, 200);
  right.moveRelative(-380, 200);
  pros::delay(500);
  left.moveVoltage(10000);
  right.moveVoltage(10000);
  pros::delay(1000);
  left.moveVoltage(0);
  right.moveVoltage(0);
}

void blueAuton()
{
 while(!cataLimit.get_value())
   {
     cata.move(-127);
   }
   cata.move(-10);
   in.move(127);
   left.tarePosition();
   right.tarePosition();
  left.moveAbsolute(-1300, 200);
  right.moveAbsolute(-1300, 200);
  pros::delay(1600);
  in.move(115);
  left.moveRelative(1200, 200);
  right.moveRelative(1200, 200);
  pros::delay(1200);
  left.moveVoltage(7000);
  right.moveVoltage(7000);
  pros::delay(400);
  left.moveVoltage(0);
  right.moveVoltage(0);
  left.moveRelative(-250, 200);
  right.moveRelative(-250, 200);
  pros::delay(600);
  left.moveRelative(-276, 200);
  right.moveRelative(276, 200);
  pros::delay(800);
  left.moveRelative(225, 200);
  right.moveRelative(225, 200);
  pros::delay(850);//longer than needed for balls to settle
  /*
  left.moveRelative(150, 200);
  right.moveRelative(150, 200);
  pros::delay(700);
  */
  cata.move(-127);
  pros::delay(300);
  cata.move(0);
  
  pros::delay(200);
  in.move(0);
  left.moveRelative(75, 200);
  right.moveRelative(-75, 200);
  pros::delay(420);
  left.moveRelative(333, 200);
  right.moveRelative(333, 200);
  pros::delay(550);
  left.moveRelative(-75, 200);
  right.moveRelative(75, 200);
  pros::delay(420);
  left.moveRelative(925, 200);
  right.moveRelative(925, 200);
  pros::delay(850);
  /*
  left.moveVoltage(10000);
  right.moveVoltage(10000);
  pros::delay(1500);
  
  left.moveVoltage(0);
  right.moveVoltage(0);
  */
  in.move(-100);
  left.moveRelative(-615, 200);
  right.moveRelative(-615, 200);
  pros::delay(1000);
  left.moveRelative(270, 200);
  right.moveRelative(-270, 200);
  pros::delay(550);
  left.moveVoltage(7000);
  right.moveVoltage(7000);
  pros::delay(400);
  left.moveVoltage(0);
  right.moveVoltage(0);
  pros::delay(100);
  left.moveRelative(-500, 200); ///travel 1380 in total
  right.moveRelative(-500, 200);
  pros::delay(400);
  left.moveRelative(-800, 150); ///travel 1380 in total
  right.moveRelative(-800, 150);
  pros::delay(1000);
  /*
  pros::delay(400);
  left.moveRelative(-380, 150); 
  right.moveRelative(-380, 150);
  pros::delay(400);
  */
  left.moveRelative(300, 200);
  right.moveRelative(300, 200);
  pros::delay(700);

  left.moveRelative(-380, 200);
  right.moveRelative(380, 200);
  pros::delay(500);
  left.moveVoltage(10000);
  right.moveVoltage(10000);
  pros::delay(1000);
  left.moveVoltage(0);
  right.moveVoltage(0);
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
/**
 * autonNumber = 0 is Prog skills
 * autonNumber = 1 is Red side front
 * autonNumber = 2 is Red side back
 * autonNumber = 3 is Blue side front
 * autonNumber = 4 is Blue side back
 **/

   if (autonNumber == 0) //PROGRAMMING SKILLS
   {
      progSkills();
   }
   else if (autonNumber == 1) //RED FRONT AUTON
   {
      redAuton();
   }
   else if (autonNumber == 2) //RED BACK AUTON
   {
      redBackAuton();
   }
   else if (autonNumber == 3) //BLUE FRONT AUTON
   {
      //blueAuton();
      robotChassis.moveDistance(1_m);
   }
   else if (autonNumber == 4) //BLUE BACK AUTON
   {
      blueBackAuton();
   }
}