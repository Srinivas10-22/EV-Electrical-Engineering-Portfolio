# ⚡ Overhead Transmission Fault Detection System (Arduino)

## 📌 Overview
This project uses an Arduino-based system to detect overhead power line faults (L-G and L-L) and sends real-time alerts using a GSM module.

## ⚙️ Features
- Detects Line-to-Ground and Line-to-Line faults
- Real-time alert via GSM module
- Prototype tested with multiple fault conditions

## 🛠️ Tools & Tech
- **Microcontroller:** Arduino Uno
- **Sensors:** Voltage divider, Relay switching
- **Communication:** SIM800 GSM module
- **Software:** Arduino IDE
- **CAD (optional):** Fritzing

## 🔧 Circuit Overview
- Fault Simulation → Arduino detects → GSM sends alert

## 📁 Project Files
- `fault_detection.ino` – Arduino code
- `fault_circuit_diagram.png`
- `alert_message_demo.txt`

## 📸 Images
![circuit](fault_circuit_diagram.png)

## ✅ Outcome
Improved system response time for power line maintenance using real-time alert capability.
