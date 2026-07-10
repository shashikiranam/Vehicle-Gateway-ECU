#ifndef APP_CONFIG_H
#define APP_CONFIG_H

#define UART_BAUDRATE          115200

#define SPEED_ADC_CHANNEL      ADC_CHANNEL_0
#define RPM_ADC_CHANNEL        ADC_CHANNEL_1
#define FUEL_ADC_CHANNEL       ADC_CHANNEL_4

#define TEMP_SENSOR_PIN        GPIO_PIN_6
#define TEMP_SENSOR_PORT       GPIOB

#define UART_PACKET_SIZE       64

#define SPEED_MAX              180
#define RPM_MAX                7000
#define FUEL_MAX               100

#endif
