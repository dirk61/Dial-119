#include "motor.h"
#include "main.h"
void adjust_wheel(int wheel, int if_forward)
{
	if(if_forward==0)	//go back
	{
		switch(wheel)				 
		{
			case 1:
			{
				HAL_GPIO_WritePin(RFN_GPIO_Port,RFN_Pin,GPIO_PIN_SET);
				HAL_GPIO_WritePin(RFP_GPIO_Port,RFP_Pin,GPIO_PIN_RESET);
			}break;
			case 2:
			{
				HAL_GPIO_WritePin(LFN_GPIO_Port,LFN_Pin,GPIO_PIN_SET);
				HAL_GPIO_WritePin(LFP_GPIO_Port,LFP_Pin,GPIO_PIN_RESET);
			}break;
			case 3:
			{
				HAL_GPIO_WritePin(RRN_GPIO_Port,RRN_Pin,GPIO_PIN_SET);
				HAL_GPIO_WritePin(RRP_GPIO_Port,RRP_Pin,GPIO_PIN_RESET);
			}break;
			case 4:
			{
				HAL_GPIO_WritePin(LRN_GPIO_Port,LRN_Pin,GPIO_PIN_SET);
				HAL_GPIO_WritePin(LRP_GPIO_Port,LRP_Pin,GPIO_PIN_RESET);
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
			}break;
			case 2:
			{
				HAL_GPIO_WritePin(LFN_GPIO_Port,LFN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LFP_GPIO_Port,LFP_Pin,GPIO_PIN_SET);
			}break;
			case 3:
			{
				HAL_GPIO_WritePin(RRN_GPIO_Port,RRN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(RRP_GPIO_Port,RRP_Pin,GPIO_PIN_SET);
			}break;
			case 4:
			{
				HAL_GPIO_WritePin(LRN_GPIO_Port,LRN_Pin,GPIO_PIN_RESET);
				HAL_GPIO_WritePin(LRP_GPIO_Port,LRP_Pin,GPIO_PIN_SET);
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

void run_stright(int direction)
{
	adjust_wheel(1,direction);
	adjust_wheel(2,direction);
	adjust_wheel(3,direction);
	adjust_wheel(4,direction);
}


void turn(int direction)
{
	if(direction)
	{
		adjust_wheel(1,0);
		adjust_wheel(2,1);
		adjust_wheel(3,0);
		adjust_wheel(4,1);
	}
	else
	{
		adjust_wheel(1,1);
		adjust_wheel(2,0);
		adjust_wheel(3,1);
		adjust_wheel(4,0);
	}
}
