#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\n\n Name: Mouaiad Hejazi");
  Serial.println("ID: 001220081");

  Serial.println("Chip ID: "       + String(ESP.getChipId()));
  Serial.println("Flash Chip ID: " + String(ESP.getFlashChipId()));

}

void loop() {
  Serial.println(String(millis()) + " since + " + String(millis()/1000) + " seconds");
  delay(2000);
  // put your main code here, to run repeatedly:
}