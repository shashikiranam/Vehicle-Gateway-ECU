#include "packet.h"
#include <stdio.h>

void Packet_Create(char *buffer,
                   uint16_t speed,
                   uint16_t rpm,
                   uint16_t fuel,
                   float temperature)
{
    sprintf(buffer,
            "SPD:%u,RPM:%u,FUEL:%u,TEMP:%.2f\r\n",
            speed,
            rpm,
            fuel,
            temperature);
}
