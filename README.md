<p align="center">
  <img src="./images/banner.png" alt="Vehicle Gateway ECU Banner" width="100%">
</p>

<h1 align="center">Vehicle Gateway ECU</h1>

<p align="center">

![License](https://img.shields.io/badge/License-MIT-blue.svg)
![Platform](https://img.shields.io/badge/Platform-STM32-success)
![Embedded Linux](https://img.shields.io/badge/Embedded-Linux-orange)
![Language](https://img.shields.io/badge/Language-Embedded_C-blue)
![Version](https://img.shields.io/badge/Version-v1.0.0-success)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen)

</p>

---

# Overview

The **Vehicle Gateway ECU** is an Automotive Embedded Systems project that demonstrates real-time communication between an **STM32 NUCLEO-G071RB** microcontroller and an **NXP i.MX 8M Plus EVK** running Embedded Linux.

The STM32 acquires vehicle parameters from sensors, processes the data, and transmits it through UART. The Embedded Linux application running on the NXP board receives the data, displays it on a dashboard, logs the information, and provides a foundation for future automotive communication protocols such as CAN and Ethernet.

The project is designed to demonstrate firmware development, embedded Linux application development, hardware interfacing, system architecture, and real-time communication.

---

# Table of Contents

- [Project Objectives](#project-objectives)
- [Features](#features)
- [System Architecture](#system-architecture)
- [Hardware Components](#hardware-components)
- [Software Stack](#software-stack)
- [Project Structure](#project-structure)
- [Hardware Setup](#hardware-setup)
- [Wiring Diagram](#wiring-diagram)
- [Board Connections](#board-connections)
- [Dashboard](#dashboard)
- [Runtime Results](#runtime-results)
- [Firmware Architecture](#firmware-architecture)
- [Embedded Linux](#embedded-linux)
- [Scripts](#scripts)
- [Simulation](#simulation)
- [Installation](#installation)
- [Build Instructions](#build-instructions)
- [Project Workflow](#project-workflow)
- [Future Improvements](#future-improvements)
- [Author](#author)
- [License](#license)
- [Acknowledgements](#acknowledgements)

---

# Project Objectives

- Design a simplified Automotive Vehicle Gateway ECU
- Acquire real-time vehicle parameters using STM32
- Communicate with an Embedded Linux system over UART
- Display live vehicle information on a dashboard
- Log vehicle data for diagnostics
- Demonstrate modular Embedded C firmware architecture
- Develop an Embedded Linux application for monitoring
- Build a professional portfolio project based on automotive embedded systems
---

# Features

- Real-Time Vehicle Data Acquisition
- STM32-Based Sensor Interface
- Embedded Linux Data Processing
- UART Communication
- Vehicle Parameter Monitoring
- Terminal Dashboard
- System Health Monitoring
- Data Logging
- Modular Firmware Design
- Professional Project Documentation

---

# Hardware Components

| Component | Description |
|------------|-------------|
| STM32 NUCLEO-G071RB | Vehicle Data Acquisition Controller |
| NXP i.MX 8M Plus EVK | Embedded Linux Processing Platform |
| Potentiometer 1 | Vehicle Speed Input |
| Potentiometer 2 | Engine RPM Input |
| Potentiometer 3 | Fuel Level Input |
| DS18B20 | Engine Temperature Sensor |
| UART | STM32 ↔ NXP Communication |
| USB | Programming & Debugging |

---

# Software Stack

| Category | Technology |
|----------|------------|
| Programming Language | Embedded C |
| Operating System | Embedded Linux |
| IDE | STM32CubeIDE |
| MCU Configuration | STM32CubeMX |
| Linux IDE | MCUXpresso IDE |
| Communication | UART |
| Version Control | Git |
| Repository | GitHub |

---

# Project Structure

```text
Vehicle-Gateway-ECU
│
├── .github/
├── dashboard/
├── docs/
├── firmware/
│   ├── Core/
│   ├── Drivers/
│   ├── Inc/
│   ├── Src/
│   └── stm32cubemx/
├── hardware/
├── images/
│   ├── architecture/
│   ├── dashboard/
│   ├── hardware/
│   └── results/
├── linux/
├── scripts/
├── simulations/
│
├── .gitignore
├── CITATION.cff
├── LICENSE
└── README.md
```

---

# System Architecture

<p align="center">
  <img src="./images/architecture/system_architecture.png" width="95%">
</p>

The Vehicle Gateway ECU is divided into two processing units.

### STM32 NUCLEO-G071RB

Responsible for:

- Vehicle Speed Acquisition
- Engine RPM Acquisition
- Fuel Level Acquisition
- Temperature Measurement
- UART Packet Generation

### NXP i.MX 8M Plus EVK

Responsible for:

- UART Reception
- Packet Parsing
- Dashboard Display
- Data Logging
- System Monitoring
- Future CAN Support
---

# Block Diagram

<p align="center">
  <img src="./images/architecture/block_diagram.png" width="95%">
</p>

The block diagram illustrates the overall architecture of the Vehicle Gateway ECU, showing the interaction between the STM32 microcontroller, communication interface, Embedded Linux platform, and dashboard.

---

# Data Flow

<p align="center">
  <img src="./images/architecture/data_flow.png" width="95%">
</p>

The complete system follows the workflow below:

1. Vehicle parameters are acquired by the STM32.
2. ADC values are converted into engineering units.
3. A UART packet is generated.
4. The packet is transmitted to the NXP board.
5. Embedded Linux receives and parses the packet.
6. Dashboard values are updated.
7. Vehicle information is logged.

---

# Software Stack

<p align="center">
  <img src="./images/architecture/software_stack.png" width="95%">
</p>

The project software is organized into multiple layers.

| Layer | Responsibility |
|--------|----------------|
| Hardware | Sensors and STM32 |
| HAL Drivers | Peripheral Drivers |
| Firmware | Embedded C Application |
| UART | Communication Layer |
| Embedded Linux | Packet Processing |
| Dashboard | Vehicle Visualization |
| Logger | Data Storage |

---

# Hardware Setup

<p align="center">
  <img src="./images/hardware/hardware_setup.png" width="95%">
</p>

## Hardware Used

- STM32 NUCLEO-G071RB
- NXP i.MX 8M Plus EVK
- 3 Potentiometers
- DS18B20 Temperature Sensor
- UART Interface

The STM32 continuously acquires sensor data and transmits formatted UART packets to the Embedded Linux application running on the NXP board.

---

# Wiring Diagram

<p align="center">
  <img src="./images/hardware/wiring_diagram.png" width="95%">
</p>

The wiring diagram shows the connections between the STM32, NXP board, sensors, power supply, and UART interface.

---

# Board Connections

<p align="center">
  <img src="./images/hardware/board_connections.png" width="95%">
</p>

### STM32 ADC Inputs

| Parameter | Pin |
|-----------|-----|
| Vehicle Speed | PA0 |
| Engine RPM | PA1 |
| Fuel Level | PA4 |
| Temperature | PB6 |

### UART

| STM32 | NXP |
|--------|-----|
| TX | RX |
| RX | TX |
| GND | GND |
---

# Dashboard

## Embedded Linux Dashboard

<p align="center">
  <img src="./images/dashboard/dashboard_ui.png" width="95%">
</p>

The Embedded Linux dashboard provides a graphical overview of the vehicle's operating parameters received from the STM32 microcontroller.

### Dashboard Features

- Real-Time Vehicle Speed
- Engine RPM Monitoring
- Fuel Level Display
- Engine Temperature
- UART Communication Status
- System Health Status
- Live Vehicle Monitoring

---

## Terminal Dashboard

<p align="center">
  <img src="./images/dashboard/terminal_dashboard.png" width="95%">
</p>

A lightweight terminal-based dashboard continuously displays live vehicle information received through UART. It is suitable for debugging, development, and embedded Linux deployments without a graphical interface.

Displayed information includes:

- Vehicle Speed
- Engine RPM
- Fuel Level
- Engine Temperature
- UART Status
- Packet Counter
- System Status

---

## Vehicle Parameters

<p align="center">
  <img src="./images/dashboard/vehicle_parameters.png" width="95%">
</p>

The parameter screen provides a concise summary of the latest vehicle information received from the STM32 firmware.

| Parameter | Unit |
|-----------|------|
| Vehicle Speed | km/h |
| Engine RPM | RPM |
| Fuel Level | % |
| Engine Temperature | °C |
| UART Status | Connected / Disconnected |

---

# Runtime Results

The following screenshots demonstrate successful execution of the Vehicle Gateway ECU application.

---

## UART Output

<p align="center">
  <img src="./images/results/uart_output.png" width="95%">
</p>

The STM32 periodically transmits formatted UART packets containing vehicle parameters to the NXP i.MX 8M Plus Embedded Linux platform.

Example packet:

```text
SPD:82,RPM:3150,FUEL:68,TEMP:36.5
```

---

## System Running

<p align="center">
  <img src="./images/results/system_running.png" width="95%">
</p>

The Embedded Linux application successfully receives UART packets, updates the dashboard, and monitors system health continuously.

---

## Communication Flow

<p align="center">
  <img src="./images/results/communication_flow.png" width="95%">
</p>

The communication log verifies successful data transfer between the STM32 firmware and the Embedded Linux application over UART.

---

## Logging Demo

<p align="center">
  <img src="./images/results/logging_demo.png" width="95%">
</p>

The application records diagnostic information and runtime events, providing a foundation for future fault logging and vehicle diagnostics.

---
# Firmware Architecture

The STM32 firmware is developed using a modular architecture to simplify maintenance and future expansion.

## Firmware Modules

| Module | Responsibility |
|---------|----------------|
| ADC Driver | Reads analog vehicle parameters |
| UART Driver | UART communication |
| DS18B20 Driver | Temperature acquisition |
| Packet Generator | Formats UART packets |
| Gateway Manager | Coordinates data acquisition and transmission |

---

# Embedded Linux

The NXP i.MX 8M Plus EVK runs an Embedded Linux application that receives UART packets from the STM32 and performs real-time processing.

## Linux Modules

- UART Receiver
- Packet Parser
- Vehicle Dashboard
- Data Logger
- System Monitor

---

# Scripts

The repository includes helper scripts for development.

| Script | Purpose |
|---------|----------|
| build.sh | Build Linux application |
| run.sh | Execute Vehicle Gateway ECU |
| clean.sh | Remove build files |
| flash.sh | Placeholder for firmware flashing |

---

# Simulation

Simulation resources and documentation are included for future development.

Contents include:

- Architecture Diagrams
- Hardware Documentation
- Validation Results
- Future Proteus Support

---

# Installation

Clone the repository.

```bash
git clone https://github.com/shashikiranam/Vehicle-Gateway-ECU.git
```

Go to the project directory.

```bash
cd Vehicle-Gateway-ECU
```

---

# Build Instructions

Example Linux build process:

```bash
mkdir build
cd build
cmake ..
make
```

Run the application.

```bash
./vehicle_gateway
```

---

# Project Workflow

```text
Vehicle Sensors
      │
      ▼
STM32 NUCLEO-G071RB
      │
      ▼
ADC Acquisition
      │
      ▼
UART Packet Creation
      │
      ▼
UART Communication
      │
      ▼
NXP i.MX 8M Plus EVK
      │
      ▼
Embedded Linux Application
      │
      ▼
Dashboard
      │
      ▼
Data Logger
      │
      ▼
Diagnostics
```

---

# Future Improvements

- CAN Bus Integration
- CAN FD Support
- OBD-II Diagnostics
- DTC Management
- Ethernet Communication
- MQTT Integration
- SQLite Database
- OTA Firmware Update
- PyQt GUI Dashboard
- Touchscreen Support
- Cloud Connectivity
- AI-Based Vehicle Diagnostics
- AUTOSAR-Compatible Gateway Architecture

---

# Repository Structure

```text
Vehicle-Gateway-ECU
│
├── .github/
├── dashboard/
├── docs/
├── firmware/
├── hardware/
├── images/
├── linux/
├── scripts/
├── simulations/
├── .gitignore
├── CITATION.cff
├── LICENSE
└── README.md
```

---

# Author

## Shashi Kiran A M

Embedded Systems Engineer

Automotive Electronics Engineer

### Skills

- Embedded C
- STM32
- Embedded Linux
- NXP i.MX 8M Plus
- UART
- CAN
- Automotive Embedded Systems
- Firmware Development

GitHub:

https://github.com/shashikiranam

---

# License

This project is licensed under the MIT License.

See the LICENSE file for more information.

---

# Acknowledgements

Special thanks to the open-source embedded systems community, STMicroelectronics, NXP Semiconductors, and the Embedded Linux ecosystem for providing the tools and resources used throughout this project.

---

<p align="center">

⭐ If you found this project useful, consider giving it a star!

</p>
