# Testing

## Test Objective

Verify successful communication between the STM32 and the NXP i.MX 8M Plus EVK while monitoring real-time vehicle parameters.

---

## Test Cases

| Test | Expected Result |
|------|-----------------|
| Vehicle Speed | Dashboard updates correctly |
| Engine RPM | Real-time values displayed |
| Fuel Level | Percentage updates correctly |
| Engine Temperature | Temperature displayed correctly |
| UART Communication | No packet loss |
| Continuous Operation | Stable execution |

---

## Validation

The project is considered successful if:

- UART communication is stable
- Dashboard updates continuously
- Sensor values match STM32 inputs
- No communication errors occur

---

## Tools Used

- STM32CubeIDE
- MCUXpresso IDE
- Linux Terminal
- Minicom / PuTTY
