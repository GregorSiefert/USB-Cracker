#include <Arduino.h>
#include <Keyboard.h>
#include <Mouse.h>

const int pin_button1 = 8;


void setup() {
  Serial.begin(9600);
  pinMode(pin_button1,INPUT);
}

void loop() {
  if (digitalRead(pin_button1))
  {
    Mouse.move(1,1);
    delay(100);
  }
}