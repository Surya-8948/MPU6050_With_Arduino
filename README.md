# MPU6050 with Arduino

A simple Arduino project to interface the **MPU6050 6-Axis Motion Sensor** using the **MPU6050_tockn** library. This project reads the X, Y, and Z orientation angles and displays them on the Serial Monitor. The accompanying document introduces the MPU6050, its pinout, DMP, I²C communication, key specifications, applications, and a basic Arduino example. 
## 📷 Project Image

<p align="center">
  <img src="https://raw.githubusercontent.com/Surya-8948/MPU6050_With_Arduino/main/Mpu6050_With_Arduino.png" alt="MPU6050 with Arduino" width="700">
</p>
---

## 📌 Features

- 3-Axis Accelerometer
- 3-Axis Gyroscope
- Built-in Digital Motion Processor (DMP)
- I²C Communication
- Real-Time Angle Measurement
- Beginner Friendly
- Arduino UNO Compatible

---

## 🛠️ Hardware Required

- Arduino UNO
- MPU6050 Sensor Module
- Jumper Wires
- USB Cable

---

## 📚 Required Library

Install the following library from the Arduino Library Manager:

- **MPU6050_tockn**
- **Wire** (Built-in)

---

## 🔌 Circuit Connections

| MPU6050 | Arduino UNO |
|---------|-------------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

The uploaded document also includes a wiring diagram illustrating the I²C connection between the MPU6050 and Arduino. 

---

## 🚀 Arduino Code

```cpp
#include <Wire.h>
#include <MPU6050_tockn.h>

MPU6050 mpu(Wire);

void setup() {
  Serial.begin(9600);
  Wire.begin();

  mpu.begin();
  mpu.calcGyroOffsets(true);
}

void loop() {
  mpu.update();

  Serial.print("Angle X : ");
  Serial.println(mpu.getAngleX());

  Serial.print("Angle Y : ");
  Serial.println(mpu.getAngleY());

  Serial.print("Angle Z : ");
  Serial.println(mpu.getAngleZ());

  delay(50);
}
```

---

## 📟 Sample Output

```
Angle X : -2.14
Angle Y : 1.82
Angle Z : 179.95

Angle X : -2.10
Angle Y : 1.79
Angle Z : 180.02
```

---

## ⚙️ Specifications

- Supply Voltage: **3V–5V**
- Communication: **I²C**
- Accelerometer Ranges:
  - ±2g
  - ±4g
  - ±8g
  - ±16g
- Gyroscope Ranges:
  - ±250°/s
  - ±500°/s
  - ±1000°/s
  - ±2000°/s
- Built-in Digital Motion Processor (DMP)

These specifications are listed in the uploaded document.

---

## 📌 Applications

- Drone & Quadcopter
- Self-Balancing Robot
- Camera Stabilization
- Motion Tracking
- Navigation Systems
- Mobile Devices
- Robotics Projects

The document identifies drones, self-balancing robots, mobile phones, camera stabilization systems, and navigation systems as example uses. :contentReference[oaicite:3]{index=3}

---

## 📂 Repository Structure

```
📦 MPU6050-with-Arduino
├── MPU6050.ino
├── README.md
├── Wiring_Diagram.png
└── Images/
```

---

## 👨‍💻 Author

**Surya Mani Bajpai**

Electronics Engineer | Embedded Systems | IoT | Robotics | PCB Design | Drone Technology

🌐 GitHub: https://github.com/Surya-8948

---

## ⭐ Support

If you found this project helpful, please **Star ⭐ this repository** and follow for more Arduino, ESP32, IoT, Robotics, and Embedded Systems projects.
