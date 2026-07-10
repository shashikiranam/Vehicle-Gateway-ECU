# System Architecture

## Overview

The Vehicle Gateway ECU acts as an interface between the vehicle sensors, the STM32 microcontroller, and the NXP i.MX 8M Plus Embedded Linux platform.

The STM32 acquires sensor data and transmits it to the NXP board through UART. The NXP board processes the received data and displays it on a real-time dashboard while supporting future CAN communication and diagnostics.

---

## System Components

### Data Acquisition

- Vehicle Speed
- Engine RPM
- Fuel Level
- Engine Temperature

### Microcontroller Layer

- STM32 NUCLEO-G071RB
- ADC
- UART
- GPIO

### Communication Layer

- UART
- CAN (Future Expansion)

### Embedded Linux Layer

- NXP i.MX 8M Plus EVK
- UART Driver
- Data Parser
- Dashboard Application

### User Interface

- Real-time Dashboard
- Vehicle Parameters
- System Status
- Diagnostics

---

## Data Flow

Vehicle Sensors

↓

STM32

↓

UART Communication

↓

NXP i.MX 8M Plus

↓

Embedded Linux Application

↓

Dashboard

↓

Diagnostics & Logging
