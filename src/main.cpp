#include <Arduino.h>
#include <Keyboard.h>

const int pin_button1 = 0;
const int pin_poti1 = 5;
int potiValue;

void setup() {
  Serial.begin(9600);
  pinMode(pin_button1,INPUT);
}

void loop() {
  if (digitalRead(pin_button1))
  {
    Serial.println("pressed");
    potiValue = analogRead(A5);
    Serial.println(potiValue);
    Keyboard.press('n');
    delay(10);
    Keyboard.println("test");
    Keyboard.releaseAll();
  }
}

