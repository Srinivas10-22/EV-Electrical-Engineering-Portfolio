
// Fault Detection System using Arduino + GSM
#include <SoftwareSerial.h>

SoftwareSerial gsm(7, 8); // RX, TX

int faultPin = 2;

void setup() {
  Serial.begin(9600);
  gsm.begin(9600);
  pinMode(faultPin, INPUT);
  delay(1000);
}

void loop() {
  int fault = digitalRead(faultPin);

  if (fault == HIGH) {
    Serial.println("Fault Detected!");
    gsm.println("AT+CMGF=1");
    delay(100);
    gsm.println("AT+CMGS=\"+91XXXXXXXXXX\"");  // replace with your number
    delay(100);
    gsm.println("⚠️ Transmission Fault Detected! Check Line.");
    delay(100);
    gsm.write(26); // Ctrl+Z to send
    delay(5000);
  }
}
