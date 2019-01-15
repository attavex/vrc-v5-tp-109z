#include "main.h"

int lcdAutonPage = 0;

void lastPage()
{
     static bool pressed = false;
  pressed = !pressed;
  if (pressed) 
  {
    pros::delay(250);
    --lcdAutonPage;
  }

}

void nextPage() 
{
  static bool pressed = false;
  pressed = !pressed;
  if (pressed) 
  {
    pros::delay(250);
    ++lcdAutonPage;
  }

}

void currentSelect()
{
  static bool pressed = false;
  pressed = !pressed;
   if (pressed && lcdAutonPage > 0) //RED AUTON
  {
      autonSelect = lcdAutonPage;
      pros::delay(250);
  }
  /*
  else if (pressed && lcdAutonPage == 2) //BLUE AUTON
  {
      autonSelect = 2;
      pros::delay(250);
  }
  else if (pressed && lcdAutonPage == 3) //RED BACK AUTON
  {
      autonSelect = 3;
      pros::delay(250);
  }
  else if (pressed && lcdAutonPage == 4) //BLUE BACK AUTON
  {
      autonSelect = 4;
      pros::delay(250);
  }
  else if (pressed && lcdAutonPage == 5) //PROGRAMMING SKILLS
  {
      autonSelect = 5;
      pros::delay(250);
  }
  return;
  */
}

/**
 * autonSelect = 1 is Red side
 * autonSelect = 2 is Blue side
 * autonSelect = 3 is Red side back
 * autonSelect = 4 is Blue side back
 * autonSelect = 5 is Prog Skills
 **/


void lcdAuton_Pages(int page)
{
    if (page == 0)
    {

        pros::lcd::print(0, "LAMBERT ROBOTICS - 109Z");
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
    else if (page == 5)
    {
        pros::lcd::print(0, "PROGRAMMING SKILLS");
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
        pros::lcd::register_btn1_cb(currentSelect);
        if(autonSelect > 1)
        {
            break;
        }
        pros::delay(20);
    }

}






