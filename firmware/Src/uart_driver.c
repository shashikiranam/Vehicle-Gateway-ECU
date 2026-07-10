#include "uart_driver.h"
#include "usart.h"
#include <string.h>

extern UART_HandleTypeDef huart2;

void UART_Init(void)
{
}

void UART_SendString(char *str)
{
    HAL_UART_Transmit(&huart2,
                      (uint8_t *)str,
                      strlen(str),
                      HAL_MAX_DELAY);
}

void UART_SendPacket(char *packet)
{
    UART_SendString(packet);
}
