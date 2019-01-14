#include "main.h"

int lcdAutonPage = 0;

void lastPage()
{
     static bool pressed = false;
  pressed = !pressed;
  if (pressed) 
  {
    --lcdAutonPage;
  }
}

void nextPage() 
{
  static bool pressed = false;
  pressed = !pressed;
  if (pressed) 
  {
    ++lcdAutonPage;
  }
}

void currentSelect()
{
  static bool pressed = false;
  pressed = !pressed;
   if (pressed &&) 
  {
    ++lcdAutonPage;
  }
}

void lcdAuton_Pages(int page)
{
    if (page == 0)
    {
        pros::lcd::print(0, "LAMBERT ROBOTICS - 109Z\n");
        pros::lcd::print(4, "INITIATE AUTON SELECTION --->");
    }
    else if (page == 1)
    {
        pros::lcd::print(0, "RED SIDE");
        pros::lcd::print(4, "[SELECT]");
    }
    else if (page == 2)
    {
        pros::lcd::print(0, "BLUE SIDE");
        pros::lcd::print(4, "[SELECT]");
    }
    else if (page == 3)
    {
        pros::lcd::print(0, "RED SIDE BACK AUTON");
        pros::lcd::print(4, "[SELECT]");
    }
    else if (page == 4)
    {
        pros::lcd::print(0, "BLUE SIDE BACK AUTON");
        pros::lcd::print(4, "[SELECT]");
    }
}


void lcdAuton()
{
    while(true)
    {
        lcdAuton_Pages(lcdAutonPage);
        pros::lcd::register_btn0_cb(lastPage);
        pros::lcd::register_btn2_cb(nextPage);
        
    }
}






