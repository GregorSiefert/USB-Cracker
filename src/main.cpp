#include <Arduino.h>

const int pin_button1 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pin_button1,INPUT);
}

void loop() {
  if (digitalRead(pin_button1))
  {
    Serial.write("pressed");
    delay(100);
  }
  
}

