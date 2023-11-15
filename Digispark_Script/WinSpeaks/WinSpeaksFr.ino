#include "DigiKeyboardFr.h"

void setup() {
  DigiKeyboardFr.sendKeyStroke(0);
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("powershell");
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("Add-Type -AssemblyName System.Speech");
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer");
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("$speak.Speak('Hello, this is your computer speaking.')");
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("exit");
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
}

void loop() {}