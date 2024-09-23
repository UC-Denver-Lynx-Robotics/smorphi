# Smorphi - [Competition Type] Repository

Welcome to the **Smorphi** repository. This repository is organized into three main directories: **Software**, **Hardware**, and **Electrical**. Each team should contribute to their respective sections, ensuring that all documentation is kept up to date.

## Repository Structure

```bash
├── software/
│   ├── control_system/       # Core control logic for the robot
│   ├── navigation/           # Pathfinding and navigation algorithms (if applicable)
│   ├── sensors/              # Sensor integration and data processing
│   └── README.md             # Software team documentation
│
├── hardware/
│   ├── CAD/                  # CAD models of the robot’s mechanical parts
│   ├── 3d_printing/          # STL files and configurations for 3D printing
│   ├── assembly_instructions # Documentation on how to assemble the robot
│   └── README.md             # Hardware team documentation
│
├── electrical/
│   ├── schematics/           # Circuit schematics for motor drivers and power management
│   ├── motor_control/        # Code and configuration for motor controllers
│   ├── battery_management/   # Power systems and battery management
│   └── README.md             # Electrical team documentation
│
└── README.md                 # General documentation (this file)
```

## Overview

This project is focused on building a **Smorphi** robot. The robot is designed to perform the following tasks:

### Currently there are 2 bots of this type.  Bot 2 is broken and being worked on by the mechanical team and bot 1 is working.

- Drive around.

### Goals

- **Fix the bots**: Get bot #2 working - currently it is broken.
- **tbd...**: ...

## Getting Started

### Prerequisites

Before you start working on this project, make sure you have the following software and tools installed:

#### ELECTRICAL AND MECHANICAL TEAM:
- **Hardware tools**:
     - Github Desktop

#### SOFTWARE TEAM:
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

### Cloning the Repository

Clone this repository using:

```bash
git clone https://github.com/[your-org]/[robot-name].git
```

### Directory Breakdown

#### 1. `software/`:

This folder contains all the code for controlling the robot, sensor integration, and algorithms such as pathfinding and decision-making.

- **Control System**: Contains the core logic to control the robot’s movements.
- **Navigation (if applicable)**: Handles pathfinding and obstacle avoidance algorithms (used in MicroMouse).
- **Sensors**: Code for integrating sensors like ultrasonic, IR, or other proximity sensors.

To contribute to the software, check out the [Software Team README](./software/README.md) for instructions on setting up the development environment, coding standards, and how to submit changes.

#### 2. `hardware/`:

The hardware folder includes all the CAD models, 3D printing files, and assembly instructions for the robot.

- **CAD Models**: Design files for the robot’s mechanical structure.
- **3D Printing**: STL files for any parts that need to be 3D printed.
- **Assembly**: Instructions and diagrams for assembling the robot.

For more details on contributing to the hardware designs, see the [Hardware Team README](./hardware/README.md).

#### 3. `electrical/`:

This folder contains the robot’s circuit diagrams, motor driver setups, and battery management systems.

- **Schematics**: Circuit diagrams for the robot’s power distribution and control systems.
- **Motor Control**: Code and wiring diagrams for the robot’s motors.
- **Battery Management**: Systems for managing power flow to motors and sensors.

Refer to the [Electrical Team README](./electrical/README.md) for further details on contributing to the electrical systems.

## Contributing

We encourage all team members to contribute to the project. Follow these steps to get involved:

1. **Fork the repository** and create your branch:

   ```bash
   git checkout -b feature/[your-feature]
   ```

2. **Make changes** to the appropriate files in the `software/`, `hardware/`, or `electrical/` directories.

3. **Commit your changes**:

   ```bash
   git commit -m "Add [your feature]"
   ```

4. **Push to the branch**:

   ```bash
   git push origin feature/[your-feature]
   ```

5. **Submit a Pull Request** to the `development` branch for review.

## Team Collaboration

- **Weekly meetings**: Check in with your sub-team (Software, Mechanical, Electrical) to discuss progress.
- **Integration testing**: Join integration days where all teams come together to test the robot as a whole.
- **GitHub Project Board**: Refer to the [project board](link) to stay updated on tasks and deadlines.

## License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.
