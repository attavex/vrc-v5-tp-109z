#include "main.h"

void autonomous() 
{ 
   //TEST FOR OKAPI//
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