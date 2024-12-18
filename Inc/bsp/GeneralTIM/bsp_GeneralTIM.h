/**
  ******************************************************************************
  * 文件名程: bsp_BasicTIM.h
  * 作    者: 硬石嵌入式开发团队
  * 版    本: V1.0
  * 编写日期: 2022-11-20
  * 功    能: bsp_BasicTIM头文件
  ******************************************************************************
  * 说明：
  * 本例程配套硬石stm32开发板YS-F4STD使用。
  * 
  * 淘宝：
  * 论坛：http://www.ing10bbs.com
  * 版权归硬石嵌入式开发团队所有，请勿商用。
  ******************************************************************************
  */
#ifndef __GENERAL_TIM_H__
#define __GENERAL_TIM_H__

/* 包含头文件 ----------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* 类型定义 ------------------------------------------------------------------*/

/* 宏定义 --------------------------------------------------------------------*/
/********************通用定时器TIM参数定义，TIM2************/

#define GENERAL_TIMx                     TIM2
#define GENERAL_TIM_RCC_CLK_ENABLE()     __HAL_RCC_TIM2_CLK_ENABLE()
#define GENERAL_TIM_RCC_CLK_DISABLE()    __HAL_RCC_TIM2_CLK_DISABLE()
#define GENERAL_TIM_IRQ                  TIM2_IRQn
#define GENERAL_TIM_INT_FUN              TIM2_IRQHandler


/* 扩展变量 ------------------------------------------------------------------*/
extern TIM_HandleTypeDef htimx;

/* 函数声明 ------------------------------------------------------------------*/
void TIM_Configuration(uint8_t period);	


#endif	/* __GENERAL_TIM_H__ */
/******************* (C) COPYRIGHT 2020-2030 硬石嵌入式开发团队 *****END OF FILE****/
