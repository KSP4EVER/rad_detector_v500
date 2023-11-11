/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BEEP_WIDTH_Pin GPIO_PIN_14
#define BEEP_WIDTH_GPIO_Port GPIOC
#define BATT_MEAS_TOOGLE_Pin GPIO_PIN_3
#define BATT_MEAS_TOOGLE_GPIO_Port GPIOA
#define BTN_UP_DOWN_Pin GPIO_PIN_5
#define BTN_UP_DOWN_GPIO_Port GPIOA
#define BTN_CLEAR_Pin GPIO_PIN_6
#define BTN_CLEAR_GPIO_Port GPIOA
#define USB_CHARGE_Pin GPIO_PIN_0
#define USB_CHARGE_GPIO_Port GPIOB
#define KILL_Pin GPIO_PIN_1
#define KILL_GPIO_Port GPIOB
#define SYS_BEEP_Pin GPIO_PIN_2
#define SYS_BEEP_GPIO_Port GPIOB
#define LCD_RST_Pin GPIO_PIN_8
#define LCD_RST_GPIO_Port GPIOA
#define LCD_BACKLIGHT_DIMM_Pin GPIO_PIN_9
#define LCD_BACKLIGHT_DIMM_GPIO_Port GPIOA
#define FLYBACK_PWM_Pin GPIO_PIN_9
#define FLYBACK_PWM_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
