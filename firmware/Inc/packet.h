#ifndef PACKET_H
#define PACKET_H

#include "main.h"

void Packet_Create(char *buffer,
                   uint16_t speed,
                   uint16_t rpm,
                   uint16_t fuel,
                   float temperature);

#endif
