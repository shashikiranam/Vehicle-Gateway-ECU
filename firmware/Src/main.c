#include "main.h"
#include "gateway.h"

int main(void)
{
    HAL_Init();

    SystemClock_Config();

    MX_GPIO_Init();
    MX_ADC1_Init();
    MX_USART2_UART_Init();

    while (1)
    {
        Gateway_Update();

        HAL_Delay(500);
    }
}
