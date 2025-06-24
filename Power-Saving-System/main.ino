
// Power Saving System for EVs using ESP32
#include <WiFi.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>

#define BATTERY_PIN 34  // ADC pin for battery voltage
#define THRESHOLD_VOLTAGE 11.0

Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup() {
  Serial.begin(115200);
  pinMode(BATTERY_PIN, INPUT);

  // Display Init (optional)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println("Power Saving System");
  display.display();
}

void loop() {
  int analogValue = analogRead(BATTERY_PIN);
  float batteryVoltage = analogValue * (3.3 / 4095.0) * 2; // Voltage divider

  Serial.print("Battery Voltage: ");
  Serial.println(batteryVoltage);

  if (batteryVoltage < THRESHOLD_VOLTAGE) {
    Serial.println("Low Battery - Entering Deep Sleep...");
    esp_deep_sleep_start();
  }

  delay(5000);  // Check every 5 seconds
}
