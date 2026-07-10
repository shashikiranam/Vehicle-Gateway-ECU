# UART Receiver

The UART receiver continuously receives vehicle data from the STM32.

Example packet:

```text
SPD:80,RPM:3200,FUEL:75,TEMP:36
```

The received packet is parsed before updating the dashboard.
