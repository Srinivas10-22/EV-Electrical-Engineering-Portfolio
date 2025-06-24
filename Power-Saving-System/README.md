# 🔋 Power Saving System for EVs using ESP32

## 📌 Overview
An ESP32-based energy management system designed to improve power efficiency in electric vehicles by intelligently monitoring battery status and enabling low-power sleep modes.

## ⚙️ Features
- Real-time monitoring of battery voltage and current
- Sleep mode to reduce standby power consumption
- Wi-Fi-based data communication (optional)
- OLED display for battery status (optional)

## 🛠️ Tools & Tech
- **Microcontroller:** ESP32
- **Software:** Arduino IDE
- **Simulation (optional):** Proteus
- **Programming Language:** C++ / Embedded C

## 🔧 System Architecture
[Battery] → [Voltage Sensor] → [ESP32] → [Sleep Mode Logic + Display/WiFi]

## 📁 Project Files
- `main.ino` – ESP32 firmware code
- `circuit.png` – Circuit diagram
- `sleep-mode-analysis.csv` – Sample energy data

## 📸 Screenshots
![circuit](circuit.png)

## ✅ Outcome
Demonstrated a ~20% reduction in standby power through optimized power-saving strategy.
