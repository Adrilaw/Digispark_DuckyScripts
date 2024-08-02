//This DigiSpark script opens up A fake Windows update screen and then maximizes it using F11
// Tested on windows 11
// Created by: Pentestersploit/Adrilaw https://github.com/Adrilaw
#include "DigiKeyboard.h"

void loop() {}

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("iexplore -k  https://updatefaker.com/windows11/index.html"));
  // you can do it with edge but you will get a notification to press F11 to exit the full screen
  // msegde --start-fullscreen  https://updatefaker.com/windows11/index.html/
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
