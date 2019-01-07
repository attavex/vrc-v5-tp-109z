#include "main.h"
//DEFINE/NAME SIGS
#define RED_SIG 1
#define BLUE_SIG 2
#define GREEN_SIG 3
//CREATE COLOR CODES
pros::vision_color_code_t redFlag = visSensor.create_color_code(RED_SIG, GREEN_SIG);
pros::vision_color_code_t blueFlag = visSensor.create_color_code(GREEN_SIG, BLUE_SIG);

void visionFollow(void *x)
{
    while(true)
    {

    }
}