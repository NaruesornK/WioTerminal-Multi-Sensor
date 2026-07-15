# WioTerminal Multi Sensor

A modular IoT project developed for the Seeed Studio Wio Terminal.

This project demonstrates how to interface multiple sensors and actuators using a modular programming structure. Each hardware module is separated into its own source file, making the project easier to maintain and expand.

---

## Features

- 📡 Blynk IoT Integration
- 🌡️ MLX90614 Infrared Temperature Sensor
- 🌞 BH1750 Light Intensity Sensor
- 💧 DHT11 Temperature & Humidity Sensor
- 🎨 TFT LCD Display
- ⚙️ Servo Motor Control
- 🚗 DC Motor Control
- 💡 LED Control
- 🔌 GPIO Input / Output

---

## Hardware

- Seeed Studio Wio Terminal
- MLX90614
- BH1750
- DHT11
- PCA9685 Servo Driver
- Servo Motor
- DC Motor

---

## Project Structure

```
command_Code_WIO/
│
├── command_Code_WIO.ino
├── Blynk_.h
├── TFT_CODE.h
├── BH1750_CODE.h
├── MLX90614_CODE.h
├── DH11_CODE.h
├── PCA9685_CODE.h
├── Servo_Direct.h
├── DC_Motor_CODE.h
├── SLED_CODE.h
└── INOUTput_CODE.h
```

Each module is separated into its own file to improve readability and simplify future maintenance.

---

## Development Environment

- Arduino IDE
- Wio Terminal

---

## Libraries

- Blynk
- Adafruit GFX
- TFT_eSPI
- BH1750
- Adafruit MLX90614
- DHT Sensor Library
- Adafruit PWM Servo Driver

---

## Notes

This project was originally developed before I started using GitHub and was uploaded later as part of my software and embedded systems portfolio.

---

## Author

Naruesorn K.
