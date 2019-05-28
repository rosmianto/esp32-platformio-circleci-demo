#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  vTaskDelay(500 / portTICK_PERIOD_MS);
  digitalWrite(13, LOW);
  vTaskDelay(500 / portTICK_PERIOD_MS);
}