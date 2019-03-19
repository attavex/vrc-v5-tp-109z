#include "main.h"

lv_theme_t * theme = lv_theme_alien_init(210, NULL);

int autonNumber = 10;
static std::string autons[] = {"Skills","Red Front","Red Back","Blue Front","Blue Back"};
lv_obj_t * selectionDisplay; //= lv_label_create(background, NULL);
static lv_obj_t * background;
lv_obj_t * label;

pros::vision_signature red;
pros::vision_signature blue;
pros::vision_signature green;
pros::vision_color_code_t redFlagColorCode;
pros::vision_color_code_t blueFlagColorCode;








static lv_res_t btn_rel_action(lv_obj_t * btn)
{
  int x = lv_obj_get_free_num(btn);
    autonNumber = x;
  std::string selectionText = ("Auton - " + autons[(int)autonNumber]);
  const char* selection = selectionText.c_str();
  lv_label_set_text(selectionDisplay, selection);
  lv_obj_set_x(selectionDisplay, 10);

    return LV_RES_OK;
}

void selectAuton()
{
  //Sets Background
  //lv_set_theme_current(theme);
  background = lv_page_create(NULL, NULL);
  lv_scr_load(background);

  selectionDisplay = lv_label_create(background, NULL);
  lv_label_set_text(selectionDisplay, "109Z - Select an Autonomous");

  //Create Button to Select Red Front Auton
  lv_obj_t * redFrontButton = lv_btn_create(background, NULL);
  label = lv_label_create(redFrontButton, NULL);
  lv_label_set_text(label, "Red Front");
  lv_obj_align(redFrontButton, label, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 0);
  lv_obj_set_height(redFrontButton, 50);

  //Create Button to Select Red Back Auton (with park)
  lv_obj_t * redBackButton = lv_btn_create(lv_scr_act(), redFrontButton);
  label = lv_label_create(redBackButton, NULL);
  lv_label_set_text(label, "Red Back + Park");
  lv_obj_align(redBackButton, redFrontButton, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);
/*
  //Create Button to Select Red Back Auton (no park)
  lv_obj_t * redBackButtonNoPark = lv_btn_create(lv_scr_act(), redFrontButton);
  label = lv_label_create(redBackButtonNoPark, NULL);
  lv_label_set_text(label, "Red Back");
  lv_obj_align(redBackButtonNoPark, redBackButton, LV_ALIGN_OUT_BOTTOM_MID, 0, 5);
*/
  //Create Button to Select Blue Front Auton
  lv_obj_t * blueFrontButton = lv_btn_create(lv_scr_act(), redFrontButton);
  label = lv_label_create(blueFrontButton, NULL);
  lv_label_set_text(label, "Blue Front");
  lv_obj_align(blueFrontButton, redFrontButton, LV_ALIGN_OUT_RIGHT_MID, 50, 0);

  //Create Button to Select Blue Back Auton (with park)
  lv_obj_t * blueBackButton = lv_btn_create(lv_scr_act(), redBackButton);
  label = lv_label_create(blueBackButton, NULL);
  lv_label_set_text(label, "Blue Back + Park");
  lv_obj_align(blueBackButton, redBackButton, LV_ALIGN_OUT_RIGHT_MID, 50, 0); //50
/*
  //Create Button to Select Blue Back Auton (no park)
  lv_obj_t * blueBackButtonNoPark = lv_btn_create(lv_scr_act(), redFrontButton);
  label = lv_label_create(blueBackButtonNoPark, NULL);
  lv_label_set_text(label, "Blue Back");
  lv_obj_align(blueBackButtonNoPark, blueBackButton, LV_ALIGN_OUT_BOTTOM_MID, 0, 5);

*/
  //Create Button to Select Programming Skills 
  lv_obj_t * skillsButton = lv_btn_create(lv_scr_act(), NULL);
  label = lv_label_create(skillsButton,NULL);
  lv_label_set_text(label, "Skills");
  lv_obj_align(skillsButton, blueFrontButton, LV_ALIGN_OUT_RIGHT_MID, 50, 40);
  lv_obj_set_height(skillsButton, 50);
  lv_obj_set_width(skillsButton, 50);

  //Sets to run action when clicked
  lv_btn_set_action(redFrontButton, LV_BTN_ACTION_CLICK, btn_rel_action);
  lv_btn_set_action(redBackButton, LV_BTN_ACTION_CLICK, btn_rel_action);
  lv_btn_set_action(blueFrontButton, LV_BTN_ACTION_CLICK, btn_rel_action);
  lv_btn_set_action(blueBackButton, LV_BTN_ACTION_CLICK, btn_rel_action);
  //lv_btn_set_action(blueBackButtonNoPark, LV_BTN_ACTION_CLICK, btn_rel_action);
   //lv_btn_set_action(redBackButtonNoPark, LV_BTN_ACTION_CLICK, btn_rel_action);
  lv_btn_set_action(skillsButton, LV_BTN_ACTION_CLICK, btn_rel_action);


   //Sets numbers for auton
   lv_obj_set_free_num(redFrontButton, 1);
   lv_obj_set_free_num(redBackButton, 2);
   lv_obj_set_free_num(blueFrontButton, 3);
   lv_obj_set_free_num(blueBackButton, 4);
   //lv_obj_set_free_num(blueBackButtonNoPark, 5);
   //lv_obj_set_free_num(redBackButtonNoPark, 6);
   lv_obj_set_free_num(skillsButton, 0);
}



void initialize() {

//vision::signature SIG_1 (1, 12891, 13979, 13435, -2979, -2545, -2762, 3.000, 0);

    //VISION
  red.id = 1;
  red.u_min = 12891;
  red.u_max = 13979;
  red.u_mean = 13435;
  red.v_min = -2979;
  red.v_max = -2545;
  red.v_mean = -2762;
  red.rgb = 3.000;
  red.type = 0;
  red.range = 10;
  visSensor.set_signature(1, &red);

  //vision::signature SIG_2 (2, -2769, -415, -1592, 1191, 4937, 3064, 1.200, 0);

  blue.id = 2;
  blue.u_min = -2769;
  blue.u_max = -415;
  blue.u_mean = -1592;
  blue.v_min = 1191;
  blue.v_max = 4937;
  blue.v_mean = 3064;
  blue.rgb = 1.200;
  blue.type = 0;
  blue.range = 10;
  visSensor.set_signature(2, &blue);

  //vision::signature SIG_3 (3, -445, 55, -195, -7939, -7515, -7727, 4.400, 0);

  green.id = 3;
  green.u_min = -445;
  green.u_max = -55;
  green.u_mean = -195;
  green.v_min = -7939;
  green.v_max = -7515;
  green.v_mean = -7727;
  green.rgb = 4.400;
  green.type = 0;
  green.range = 11;
  visSensor.set_signature(3, &green);

  redFlagColorCode = visSensor.create_color_code(1, 3);
  blueFlagColorCode = visSensor.create_color_code(2, 3);

}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 **/
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 **/
void competition_initialize() {
 selectAuton();
}
