# Communication

## Overview

The Vehicle Gateway ECU transfers real-time vehicle information from the STM32 microcontroller to the NXP i.MX 8M Plus Embedded Linux platform.

---

## UART Communication

### Transmitter

STM32 NUCLEO-G071RB

### Receiver

NXP i.MX 8M Plus EVK

---

## Vehicle Parameters

- Vehicle Speed
- Engine RPM
- Fuel Level
- Engine Temperature

---

## Example UART Packet

```text
SPD:80,RPM:3200,FUEL:72,TEMP:38
```

---

## UART Configuration

| Parameter | Value |
|-----------|-------|
| Baud Rate | 115200 |
| Data Bits | 8 |
| Stop Bits | 1 |
| Parity | None |

---

## Future Communication

- CAN Bus
- CAN FD
- Ethernet
- MQTT
- Socket Communication
