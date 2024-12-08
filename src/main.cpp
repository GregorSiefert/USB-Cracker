#include <Arduino.h>
#include <Keyboard.h>

const int pin_button1 = 8;


void setup() {
  Serial.begin(9600);
  pinMode(pin_button1,INPUT);
}

void loop() {
  if (digitalRead(pin_button1))
  {
    Serial.println("pressed");

    Keyboard.press('n');
    delay(10);
    Keyboard.println("test");
    Keyboard.releaseAll();
  }
}

