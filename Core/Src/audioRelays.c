/*
 * audioRelays.c
 *
 *  Created on: May 1, 2023
 *      Author: Teo
 */

#include "audioRelays.h"

void RelaySPKR1(RelayInput input)
{
	switch (input)
	{
	case MIC2:
		HAL_GPIO_WritePin(SPKR1_DAC_RLY_GPIO_Port, SPKR1_DAC_RLY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SPKR1_MIC2_RLY_GPIO_Port, SPKR1_MIC2_RLY_Pin, GPIO_PIN_SET);
		break;

	case EXTERNAL_DAC:
		HAL_GPIO_WritePin(SPKR1_DAC_RLY_GPIO_Port, SPKR1_DAC_RLY_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SPKR1_MIC2_RLY_GPIO_Port, SPKR1_MIC2_RLY_Pin, GPIO_PIN_RESET);
		break;

	default:
		break;
	}
}

void RelaySPKR2(RelayInput input)
{
	switch (input)
	{
	case JACK:
		HAL_GPIO_WritePin(SPKR2_JACK_RLY_GPIO_Port, SPKR2_JACK_RLY_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SPKR2_MIC1_RLY_GPIO_Port, SPKR2_MIC1_RLY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SPKR2_DAC_RLY_GPIO_Port, SPKR2_DAC_RLY_Pin, GPIO_PIN_RESET);
		break;

	case MIC1:
		HAL_GPIO_WritePin(SPKR2_JACK_RLY_GPIO_Port, SPKR2_JACK_RLY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SPKR2_MIC1_RLY_GPIO_Port, SPKR2_MIC1_RLY_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SPKR2_DAC_RLY_GPIO_Port, SPKR2_DAC_RLY_Pin, GPIO_PIN_RESET);
		break;

	case EXTERNAL_DAC:
		HAL_GPIO_WritePin(SPKR2_JACK_RLY_GPIO_Port, SPKR2_JACK_RLY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SPKR2_MIC1_RLY_GPIO_Port, SPKR2_MIC1_RLY_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SPKR2_DAC_RLY_GPIO_Port, SPKR2_DAC_RLY_Pin, GPIO_PIN_SET);
		break;
	}
}