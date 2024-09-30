# Software Team - [Robot Name] - [Competition Name]

## Overview

This folder contains the code for controlling [Robot Name] for the [Competition Type]. The software includes control logic, sensor integration, and any pathfinding or decision-making algorithms.

### Key Components

- **Control System**: [Describe how the control system works].
- **Sensors**: [Describe sensor integration, if applicable].
- **Navigation**: [If applicable, describe how the navigation system works].

### Getting Started

#### What You Need:
- **Programming language and version** C++ 14, C
- **Hardware tools**:
     - Arduino IDE
     - Github Desktop
- **Specific Libraries (for arduino)** ([How to install libraries onto arduino](https://www.build-electronic-circuits.com/arduino-libraries-and-how-to-install-them/#:~:text=Here%E2%80%99s%20how%20you%20do%20it%3A%201%20Open%20the,to%20select%20it%20and%20then%20click%20on%20%E2%80%9CInstall%E2%80%9D.))
     - Adafruit_MotorShield.h
     - Adafruit_PWMServoDriver.h
     - Adafruit_MCP23X17.h
- **Other Dependencies**
     - Currently NA

#### Resources:
  - Smorphi Documentation [Wiki](https://github-wiki-see.page/m/WefaaRobotics/Smorphi/wiki/Smorphi-Code-Documentation#:~:text=Smorphi%20Documentation.%20Initializing%20the%20Robot.%20BeginSmorphi%20();%20Initialise)
  - [DC Motor Docs](https://learn.adafruit.com/adafruit-motor-shield/af-dcmotor-class)
  - [Smorphi2 Code](https://github.com/WefaaRobotics/Smorphi)
 
### Working With The Robot
- **How to upload the code to the bot**: (1) Unplug + plug back in and (2) press reboot button at the connecting point of upload in arduino _every time_.
- **How to run uploaded code on the bot**: (1) turn on (if it isn't already) and (2) press the reset button
- **To connect to the board on Arduino**: use ESP32 Dev Module

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
