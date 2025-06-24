
#include <SoftwareSerial.h>

SoftwareSerial gpsSerial(4, 3);   // RX, TX for GPS
SoftwareSerial gsm(7, 8);         // RX, TX for GSM
int accelPin = A0;

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);
  gsm.begin(9600);
  pinMode(accelPin, INPUT);
  delay(1000);
}

void loop() {
  int shock = analogRead(accelPin);

  if (shock > 700) { // Threshold to detect crash
    Serial.println("Accident Detected!");

    // Read GPS location (mocked for now)
    String gpsData = "Lat:17.4, Lon:78.5";

    gsm.println("AT+CMGF=1");
    delay(100);
    gsm.println("AT+CMGS=\"+91XXXXXXXXXX\""); // Replace with recipient
    delay(100);
    gsm.println("🚨 Accident Alert!\nLocation: " + gpsData);
    delay(100);
    gsm.write(26);
    delay(5000);
  }

  delay(2000);
}
