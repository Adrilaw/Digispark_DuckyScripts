//This DigiSpark script opens up Rick Astley's - Never Gonna Give You Up and also a fake Windows update screen and then maximizes it using F11
// Created by: Pentestersploit/Adrilaw https://github.com/Adrilaw
#include "DigiKeyboardFr.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboardFr.delay(2000);
  DigiKeyboardFr.sendKeyStroke(0);
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(600);
  DigiKeyboardFr.print("https://youtu.be/dQw4w9WgXcQ?t=43s");
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(5000);
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(3000);
  DigiKeyboardFr.print("http://fakeupdate.net/win10ue");
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(2000);
  DigiKeyboardFr.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
}
