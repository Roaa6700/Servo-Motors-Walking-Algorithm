# Servo-Motors-Walking-Algorithm


This project simulates a humanoid robot using **4 servo motors** controlled by an **Arduino Uno** (in Tinkercad). The robot performs a sweeping motion for 2 seconds, then all motors hold their position at 90 degrees. Additionally, an algorithm is proposed to simulate **walking motion** using those servos.

---

## Components

- Arduino Uno (simulated in Tinkercad)
- 4x Servo Motors
- Jumper wires
- *(No breadboard required)*

---

## Servo Motor Connections

| Servo         | Signal Pin | VCC  | GND  |
|---------------|------------|------|------|
| Servo 1       | D9         | 5V   | GND  |
| Servo 2       | D10        | 5V   | GND  |
| Servo 3       | D11        | 5V   | GND  |
| Servo 4       | D12        | 5V   | GND  |

---

## Servo Behavior Code Description

- For the first **2 seconds**, all 4 servo motors perform a **Sweep** motion from 0° to 180° and back.
- After 2 seconds, all motors stop and hold at **90 degrees**.

---

## Walking Motion Algorithm
1. Start with the robot standing straight.
2. Move the **left leg** forward (using one servo).
3. Slightly lean the upper body forward for balance.
4. Move the **right leg** forward while returning the left to original position.
5. Alternate the leg motion repeatedly.
6. Move arms in opposite directions to legs for realistic walking.
7. Adjust timing using delays or sensors.
8. Stop walking when the destination is reached.

---

## Goal

The objective of this project is to simulate the **basic control of servo motors** and understand the **logical sequence for humanoid walking**, which can later be expanded with more servos or sensors.

---

## Platform

- [Tinkercad Circuits](https://www.tinkercad.com/)
