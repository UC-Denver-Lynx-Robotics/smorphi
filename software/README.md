# Software Team - [Robot Name] - [Competition Name]

## Overview

This folder contains the code for controlling [Robot Name] for the [Competition Type]. The software includes control logic, sensor integration, and any pathfinding or decision-making algorithms.

### Key Components

- **Control System**: [Describe how the control system works].
- **Sensors**: [Describe sensor integration, if applicable].
- **Navigation**: [If applicable, describe how the navigation system works].

### Getting Started

- **Development Tools**: [List of tools required].
- **How to run the code**: [Instructions to compile/run].

### Bluetooth Control

1. Turn on robot, press Enable button on board. 
2. Pair to 'ESP32test' device. Only needs to be done the first time per bot. 
3. Open [Serial Bluetooth Terminal](https://play.google.com/store/apps/details?id=de.kai_morich.serial_bluetooth_terminal&hl=en_US). 
4. Open hamburger menu, then tap 'Devices'. 
5. Tap 'ESP32test' corresponding to current robot. You may have multiple entries if you've paried to both bots. 
6. In the terminal, type command corresponding to movement direction:
    - f = forward
    - b = backward
    - r = right
    - l = left
    - c = rotate clockwise
    - a = rotate anti-clockwise
    - s = stop

**If you need to switch back to wired serial control**, switch the `SerialBT` object in `loop()` to `Serial`.

## Contribution Guidelines

Please refer to the main [CONTRIBUTING.md](../CONTRIBUTING.md) for details.
