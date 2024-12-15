#include <Arduino.h>
#include <Keyboard.h>

//Digitale Pins die an den 4-Schalter geschlossen sind
const int SW1 = 8;
const int SW2 = 9;
const int SW3 = 10;
const int SW4 = 11;

//Definition der ausführbaren Funktionen
void win_0();
void win_1();
void win_2();
void win_3();
void win_4();
void win_5();
void win_6();
void ios_0();
void ios_1();
void ios_2();
void ios_3();
void ios_4();
void ios_5();
void ios_6();

void setup() {
  Serial.begin(9600);
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);
  pinMode(SW3,INPUT);
  pinMode(SW4,INPUT);
  //Start des Programms
  Keyboard.begin();
  int mode = 7-(digitalRead(SW3)*1 + digitalRead(SW2)*2 + digitalRead(SW1)*4);
  Serial.print(mode);

  if (mode == 7){while (1){}}   //Programmiermodus

  if (digitalRead(SW4 == 0))  //Windows-Mode
  {
    switch (mode)
    {
    case 0:
      win_0();
      break;
    
    case 1:
      win_1();
      break;    

    case 2:
      win_2();
      break;

    case 3:
      win_3();
      break;

    case 4:
      win_4();
      break; 

    case 5:
      win_5();
      break;

    case 6:
      win_6();
      break;

    default:
      break;
    }
  }else
  {
    switch (mode)
    {
    case 0:
      ios_0();
      break;
    
    case 1:
      ios_1();
      break;    

    case 2:
      ios_2();
      break;

    case 3:
      ios_3();
      break;

    case 4:
      ios_4();
      break; 

    case 5:
      ios_5();
      break;

    case 6:
      ios_6();
      break;

    default:
      break;
    }
  }
  Keyboard.end();
}

void loop() {
  Serial.print(7-(digitalRead(SW3)*1 + digitalRead(SW2)*2 + digitalRead(SW1)*4));
  Serial.println(digitalRead(SW4));
  delay(1000);
}

//Funktionen

// Crackname: Erklärung
void win_0() { 
    Keyboard.write(KEY_LEFT_GUI);
    delay(50);
    Keyboard.print("editor");
    delay(50);
    Keyboard.write(KEY_RETURN);
    delay(50);
}

// Crackname: ALt+F4
void win_1() { 
    Keyboard.press(KEY_LEFT_ALT);
    delay(50);
    Keyboard.press(KEY_F4);
    delay(50);
    Keyboard.releaseAll();
    delay(50);
}

void win_2(){}
void win_3(){}
void win_4(){}
void win_5(){}
void win_6(){}
void ios_0(){}
void ios_1(){}
void ios_2(){}
void ios_3(){}
void ios_4(){}
void ios_5(){}
void ios_6(){}