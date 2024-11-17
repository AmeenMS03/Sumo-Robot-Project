# Sumo Robot Project

This repository contains the code and design documents for my **Sumo Robot Project** built using an Arduino UNO and motor drivers. The goal was to create a competitive robot capable of pushing other robots out of a predetermined area.

## Project Overview

My project involves designing, assembling, and testing a **Sumo Robot** that can compete in robot battles using the following key components:
- Arduino UNO
- L298N Motor Driver
- Four DC motors
- Bluetooth module for remote control

### Key Features:
- **Remote Control**: The robot is manoeuvred using a phone controller via Bluetooth.
- **Efficient Design**: Focused on minimizing the use of unnecessary materials to reduce e-waste.
- **Reusable Components**: The robot's parts will be stripped and reused for future projects.

## Table of Contents

- [Introduction](#introduction)
- [Design](#design)
- [System Overview](#system-overview)
- [Future Improvements](#future-improvements)
- [Lessons Learned](#lessons-learned)
- [Impact](#impact)
- [References](#references)

## Introduction

In this project, the objective was to design and implement a sumo robot using an Arduino UNO, motors, and wires to create a competitive robotic system. The **motivation** behind this project was to apply theoretical knowledge from our Internet of Things class into a practical, working machine. Our main **problem statement** was to minimize the materials required to achieve an efficient design and cut down on unnecessary electronic waste.

## Design

The robot’s design and assembly process consists of several stages:
1. **Wiring the Motors**: Soldering the wires and connecting them to the motor driver.
2. **Connecting the Motor Driver to Arduino**: Following the wiring guidelines for motor control.
3. **Robot Assembly**: Final assembly using a chassis, Arduino, motor driver, and motors.

**Requirements and Constraints**:
- The robot must push opponent robots out of a 200 cm x 200 cm arena.
- The design must incorporate an Arduino UNO microcontroller.
- The total cost of the robot should not exceed $100.

**Design Process**:
The robot was designed in Tinkercad, and after the design was verified, the robot was assembled. The design process included connecting the motors to the chassis, wiring the L298N motor driver to the motors and Arduino, and connecting the Bluetooth module for remote control.

### Tinkercad Design
(I used H-Bridge because Motor Control doesn't exist in TinkerCad)

<img src="https://github.com/user-attachments/assets/233e4e39-ca8d-4481-a6ad-9b1aeff60e86" width="800">

### Hardware Schematic

Here is a schematic of the hardware design:

<img src="https://github.com/user-attachments/assets/630674e1-0901-4aef-bda8-c9bedbb5a8fc" width="800">

## System Overview

The robot is a four-wheel drive with a large scoop on the front for pushing opponent robots. The chassis is built from hard plastic, ensuring durability during battles. Here’s how the chassis with the Arduino setup looks:

<img src="https://github.com/user-attachments/assets/dceb882a-7d9d-4abc-ab50-9b172f62a244" width="400">

## Code

The Arduino code to control the robot is in the `code/` directory. [robot_control.ino](./code/robot_control.ino)

## Future Improvements

We aim to:
- Further reduce the wiring by using fewer components like the black connector in the motor driver.
- Explore alternative methods to make the robot sturdier and more efficient.

## Lessons Learned

We gained valuable experience in:
- Integrating software and hardware effectively, learning about the L298N motor bridge.
- Troubleshooting wiring and component issues step-by-step to ensure smooth operation.

## Impact

The project is designed to minimize electronic waste, and all components will be reused in future projects. The robot uses rechargeable batteries, and electricity is sourced from solar panels to promote sustainability.

## References

- [Arduino Uno R3 Documentation](https://docs.arduino.cc/hardware/uno-rev3/)
