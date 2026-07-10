#include "adc_driver.h"
#include "adc.h"

extern ADC_HandleTypeDef hadc1;

static uint16_t ReadADC(uint32_t channel)
{
    ADC_ChannelConfTypeDef sConfig = {0};

    sConfig.Channel = channel;
    sConfig.Rank = ADC_REGULAR_RANK_1;

    HAL_ADC_ConfigChannel(&hadc1, &sConfig);

    HAL_ADC_Start(&hadc1);
    HAL_ADC_PollForConversion(&hadc1, HAL_MAX_DELAY);

    uint16_t value = HAL_ADC_GetValue(&hadc1);

    HAL_ADC_Stop(&hadc1);

    return value;
}

uint16_t ADC_ReadSpeed(void)
{
    return ReadADC(ADC_CHANNEL_0);
}

uint16_t ADC_ReadRPM(void)
{
    return ReadADC(ADC_CHANNEL_1);
}

uint16_t ADC_ReadFuel(void)
{
    return ReadADC(ADC_CHANNEL_4);
}
