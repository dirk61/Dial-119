#ifndef __MOTOR_H
#define __MOTOR_H
//including presetting file
#include "stm32f1xx_hal.h"
//private defines
#define RRPWM_Pin GPIO_PIN_6
#define RRPWM_GPIO_Port GPIOA
#define RFPWM_Pin GPIO_PIN_0
#define RFPWM_GPIO_Port GPIOB
#define LRPWM_Pin GPIO_PIN_10
#define LRPWM_GPIO_Port GPIOB
#define RRN_Pin GPIO_PIN_12
#define RRN_GPIO_Port GPIOB
#define RRP_Pin GPIO_PIN_13
#define RRP_GPIO_Port GPIOB
#define LRN_Pin GPIO_PIN_14
#define LRN_GPIO_Port GPIOB
#define LRP_Pin GPIO_PIN_15
#define LRP_GPIO_Port GPIOB
#define RFN_Pin GPIO_PIN_6
#define RFN_GPIO_Port GPIOC
#define RFP_Pin GPIO_PIN_7
#define RFP_GPIO_Port GPIOC
#define LFN_Pin GPIO_PIN_8
#define LFN_GPIO_Port GPIOC
#define LFP_Pin GPIO_PIN_9
#define LFP_GPIO_Port GPIOC
#define LED0_Pin GPIO_PIN_8
#define LED0_GPIO_Port GPIOA
#define LFPWM_Pin GPIO_PIN_15
#define LFPWM_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_2
#define LED1_GPIO_Port GPIOD

/*
Adjusting one wheel.
Parameters: 
wheel (1~4) : RightFront,LeftFront,RightRear,LeftRear
if_forward (1 or 0) : 1 go forward, 0 go back
*/
void adjust_wheel(int wheel, int if_forward);
/*
turn right or left
1 means right
0 means left
*/
void turn(int direction);

#endif
