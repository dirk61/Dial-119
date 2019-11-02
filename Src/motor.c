#include "motor.h"
#include "main.h"
#include "tim.h"
void adjust_wheel(int wheel, int if_forward,int _speed)
{	
	if(if_forward==0)	//go back
	{
		switch(wheel)				 
		{
			case 1:
			{
				HAL_GPIO_WritePin(RFN_GPIO_Port,RFN_Pin,GPIO_PIN_SET);
				HAL_GPIO_WritePin(RFP_GPIO_Port,RFP_Pin,GPIO_PIN_RESET);
				__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_3,_speed);
			}break;
			case 2:
			{
				HAL_GPIO_WritePin(LFN_GPIO_Port,LFN_Pin,GPIO_PIN_SET);
				HAL_GPIO_WritePin(LFP_GPIO_Port,LFP_Pin,GPIO_PIN_RESET);
				__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,_speed);
			}break;
			case 3:
			{
				HAL_GPIO_WritePin(RRN_GPIO_Port,RRN_Pin,GPIO_PIN_SET);
				HAL_GPIO_WritePin(RRP_GPIO_Port,RRP_Pin,GPIO_PIN_RESET);
				__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_1,_speed);
			}break;
			case 4:
			{
				HAL_GPIO_WritePin(LRN_GPIO_Port,LRN_Pin,GPIO_PIN_SET);
				HAL_GPIO_WritePin(LRP_GPIO_Port,LRP_Pin,GPIO_PIN_RESET);
				__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_3,_speed);
			}break;
			default: break;
		}
	}
	else if (if_forward==1) //go forward
	{
		switch(wheel)
		{
			case 1:
			{
				HAL_GPIO_WritePin(RFN_GPIO_Port,RFN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(RFP_GPIO_Port,RFP_Pin,GPIO_PIN_SET);
				__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_3,_speed);
			}break;
			case 2:
			{
				HAL_GPIO_WritePin(LFN_GPIO_Port,LFN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LFP_GPIO_Port,LFP_Pin,GPIO_PIN_SET);
				__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,_speed);
			}break;
			case 3:
			{
				HAL_GPIO_WritePin(RRN_GPIO_Port,RRN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(RRP_GPIO_Port,RRP_Pin,GPIO_PIN_SET);
				__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_1,_speed);
			}break;
			case 4:
			{
				HAL_GPIO_WritePin(LRN_GPIO_Port,LRN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LRP_GPIO_Port,LRP_Pin,GPIO_PIN_SET);
				__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_3,_speed);
			}break;
			default: break;
		}
	}
	else			//stop
	{
		switch(wheel)
		{
			case 1:
			{
				HAL_GPIO_WritePin(RFN_GPIO_Port,RFN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(RFP_GPIO_Port,RFP_Pin,GPIO_PIN_RESET);
			}break;
			case 2:
			{
				HAL_GPIO_WritePin(LFN_GPIO_Port,LFN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LFP_GPIO_Port,LFP_Pin,GPIO_PIN_RESET);
			}break;
			case 3:
			{
				HAL_GPIO_WritePin(RRN_GPIO_Port,RRN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(RRP_GPIO_Port,RRP_Pin,GPIO_PIN_RESET);
			}break;
			case 4:
			{
				HAL_GPIO_WritePin(LRN_GPIO_Port,LRN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LRP_GPIO_Port,LRP_Pin,GPIO_PIN_RESET);
			}break;
			default: break;
		}
	}
}

void run_stright(int direction,int _speed){
	adjust_wheel(1,direction,_speed);
	adjust_wheel(2,direction,_speed);
	adjust_wheel(3,direction,_speed);
	adjust_wheel(4,direction,_speed);
}

void turn_around(int direction,int _speed){
	adjust_wheel(1,4-direction,_speed);
	adjust_wheel(2,direction-3,_speed);
	adjust_wheel(3,4-direction,_speed);
	adjust_wheel(4,direction-3,_speed);
}