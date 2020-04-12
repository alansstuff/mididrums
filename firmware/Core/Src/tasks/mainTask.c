/*
 * mainTask.c
 *
 *  Created on: Apr. 11, 2020
 *      Author: Alan
 */

#include "stm32f4xx_hal.h"

void mainTask(void * adcHandle)
{
	ADC_HandleTypeDef * hadc1 = (ADC_HandleTypeDef *) adcHandle;

	// Check that ADC started
	if (HAL_ADC_Start(hadc1) != HAL_OK)
	{
		for(;;)
		{
			// ADC failed to start
		}
	}

	/* Infinite loop */
	uint32_t timeout = 100;
	uint32_t adcvalue = 0;
	uint32_t min_adcvalue = UINT32_MAX;
	for(;;)
	{
		if (HAL_ADC_PollForConversion(hadc1, timeout) == HAL_OK)
		{
			adcvalue = HAL_ADC_GetValue(hadc1);
			if (adcvalue < min_adcvalue)
			{
				min_adcvalue = adcvalue;
			}
		}
	}
}
