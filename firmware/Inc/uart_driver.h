#ifndef UART_DRIVER_H
#define UART_DRIVER_H

#include "main.h"

void UART_Init(void);
void UART_SendString(char *str);
void UART_SendPacket(char *packet);

#endif
