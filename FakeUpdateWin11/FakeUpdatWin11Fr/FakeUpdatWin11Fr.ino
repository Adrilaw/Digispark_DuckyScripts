//This DigiSpark script opens up A fake Windows update screen and then maximizes it using F11
// Tested on windows 11
// Created by: Pentestersploit/Adrilaw https://github.com/Adrilaw
#include "DigiKeyboardFr.h"

void loop() {}

void setup() {
  DigiKeyboardFr.sendKeyStroke(0);
  DigiKeyboardFr.delay(1000);
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print(F("iexplore -k https://updatefaker.com/windows11/index.html"));
  // you can do it with edge but you will get a notification to press F11 to exit the full screen
  // msegde --start-fullscreen  https://updatefaker.com/windows11/index.html/
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
}
