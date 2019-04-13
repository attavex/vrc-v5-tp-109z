 #include "main.h"

bool isAlignedAngle = false;
bool isAlignedLong = false;
pros::vision_object_s_t blueRtn[2];
pros::vision_object_s_t redRtn[2];
int coordRangeMin = 100;
int coordRangeMax = 140;
int areaRangeMin = 2000;
int areaRangeMax = 2100;

void visionAim(void *x)
{
    if(controller.getDigital(ControllerDigital::X)) //AIMING FOR BLUE
    {
        visSensor.read_by_code(0, blueFlagColorCode, 2, blueRtn);
        printf("sig: %d", blueRtn[0].left_coord);
        isAlignedAngle = false;
        isAlignedLong = false;
        while(!isAlignedAngle && !isAlignedLong)
        {
            visSensor.read_by_code(0, blueFlagColorCode, 2, blueRtn);
            if((blueRtn[0].x_middle_coord > coordRangeMin) && (blueRtn[0].x_middle_coord < coordRangeMax)) //ANGLE CORRECTION
            {
              isAlignedAngle = true;
              left.moveVoltage(0);
              right.moveVoltage(0);
            }
            else if(blueRtn[0].x_middle_coord < coordRangeMin)
            {
                left.moveVoltage(6000);
                right.moveVoltage(-6000);
            }
            else if(blueRtn[0].x_middle_coord > coordRangeMax)
            {
                left.moveVoltage(-6000);
                right.moveVoltage(6000);
            }
            visSensor.read_by_code(0, blueFlagColorCode, 2, blueRtn);
            if(((blueRtn[0].height * blueRtn[0].width) > areaRangeMin) && ((blueRtn[0].height * blueRtn[0].width) < areaRangeMax)) //LONGITUDINAL CORRECTION
            {
              isAlignedLong = true;
              left.moveVoltage(0);
              right.moveVoltage(0);
            }
            else if((blueRtn[0].height * blueRtn[0].width) < areaRangeMin)
            {
                left.moveVoltage(8000);
                right.moveVoltage(8000);
            }
            else if((blueRtn[0].height * blueRtn[0].width) > areaRangeMax)
            {
                left.moveVoltage(-8000);
                right.moveVoltage(-8000);
            }
        }
        
    }
   else if(controller.getDigital(ControllerDigital::Y)) //AIMING FOR RED
    {
         visSensor.read_by_code(0, redFlagColorCode, 2, redRtn);
        printf("sig: %d", redRtn[0].left_coord);
        isAlignedAngle = false;
        isAlignedLong = false;
        while(!isAlignedAngle && !isAlignedLong)
        {
            visSensor.read_by_code(0, redFlagColorCode, 2, redRtn);
            if((redRtn[0].x_middle_coord > coordRangeMin) && (redRtn[0].x_middle_coord < coordRangeMax)) //ANGLE CORRECTION
            {
              isAlignedAngle = true;
              left.moveVoltage(0);
              right.moveVoltage(0);
            }
            else if(redRtn[0].x_middle_coord < coordRangeMin)
            {
                left.moveVoltage(6000);
                right.moveVoltage(-6000);
            }
            else if(redRtn[0].x_middle_coord > coordRangeMax)
            {
                left.moveVoltage(-6000);
                right.moveVoltage(6000);
            }
            visSensor.read_by_code(0, redFlagColorCode, 2, redRtn);
            if(((redRtn[0].height * redRtn[0].width) > areaRangeMin) && ((redRtn[0].height * redRtn[0].width) < areaRangeMax)) //LONGITUDINAL CORRECTION
            {
              isAlignedLong = true;
              left.moveVoltage(0);
              right.moveVoltage(0);
            }
            else if((redRtn[0].height * redRtn[0].width) < areaRangeMin)
            {
                left.moveVoltage(8000);
                right.moveVoltage(8000);
            }
            else if((redRtn[0].height * redRtn[0].width) > areaRangeMax)
            {
                left.moveVoltage(-8000);
                right.moveVoltage(-8000);
            }
        }
        
    }
}
