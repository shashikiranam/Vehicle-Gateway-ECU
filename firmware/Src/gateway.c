#include "gateway.h"
#include "adc_driver.h"
#include "ds18b20.h"
#include "packet.h"
#include "uart_driver.h"

void Gateway_Update(void)
{
    uint16_t speed;
    uint16_t rpm;
    uint16_t fuel;
    float temperature;

    char packet[64];

    speed = ADC_ReadSpeed();
    rpm = ADC_ReadRPM();
    fuel = ADC_ReadFuel();
    temperature = DS18B20_ReadTemperature();

    Packet_Create(packet,
                  speed,
                  rpm,
                  fuel,
                  temperature);

    UART_SendPacket(packet);
}
