/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
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
#define BT_TX_Pin GPIO_PIN_9
#define BT_TX_GPIO_Port GPIOA
#define BT_RX_Pin GPIO_PIN_10
#define BT_RX_GPIO_Port GPIOA
#define LFPWM_Pin GPIO_PIN_15
#define LFPWM_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_2
#define LED1_GPIO_Port GPIOD
#define Trig_Pin GPIO_PIN_8
#define Trig_GPIO_Port GPIOB
#define Echo_Pin GPIO_PIN_9
#define Echo_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
