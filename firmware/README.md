# STM32 Firmware

This directory contains the STM32 firmware responsible for vehicle data acquisition, sensor interfacing, packet generation, and UART communication with the NXP i.MX 8M Plus EVK.

## Directory Structure

```
firmware/
├── Core/
├── Drivers/
├── Inc/
├── Src/
└── stm32cubemx/
```

## Features

- ADC Data Acquisition
- DS18B20 Temperature Sensor
- UART Communication
- Packet Generation
- Vehicle Parameter Processing
- Modular Driver Architecture

## Vehicle Parameters

- Vehicle Speed
- Engine RPM
- Fuel Level
- Engine Temperature

## Communication

STM32 → UART → NXP Embedded Linux

## Development Environment

- STM32CubeIDE
- STM32CubeMX
- STM32 HAL Drivers
- Embedded C

## Target Board

STM32 NUCLEO-G071RB
