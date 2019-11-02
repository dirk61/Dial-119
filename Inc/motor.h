#ifndef __MOTOR_H
#define __MOTOR_H
//including presetting file
#include "stm32f1xx_hal.h"
//private defines

/*
Adjusting one wheel.
Parameters: 
wheel (1~4) : RightFront,LeftFront,RightRear,LeftRear
if_forward (1 or 0) : 1 go forward, 0 go back
*/
void adjust_wheel(int wheel, int if_forward, int _speed);
/*
turn right or left
1 means right
0 means left
*/
void turn(int direction);
/*
direction 1:forward;
direction 0:backward;
direction 2:stop;
*/
void run_stright(int direction,int _speed);
void turn_around(int direction,int _speed);
#endif
