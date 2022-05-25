//Chromebook Powerwash ChromeOS version 103

#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:
}
void loop() {

// Delay variables in seconds

float sd, md, ld;

sd = 0.5;
md = 10;
ld = 20;

// Conversion to milliseconds

float SHORTDELAY, MEDIUMDELAY, LONGDELAY;

SHORTDELAY = sd * 1000;
MEDIUMDELAY = md * 1000;
LONGDELAY = ld * 1000;
   
// WIFI LOGIN VARIABLES
// REPLACE WITH YOUR WIFI CREDENTIALS

char WIFISSID[] = "YOUR-WIFI-SSID";
char WIFIPASSWORD[] = "YOUR-WIFI-PASSWORD";

// LOGIN VARIABLES
// REPLACE 

char LOGINUSERNAME[] = "YOUR-LOGIN-USERNAME";
char LOGINPASSWORD[] = "YOUR-LOGIN-PASSWORD";

DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(SHORTDELAY);
// BYPASS CHROMEVOX

DigiKeyboard.sendKeyStroke(KEY_Z,MOD_ALT_LEFT|MOD_CONTROL_LEFT);
DigiKeyboard.delay(3000);
DigiKeyboard.sendKeyStroke(KEY_Z,MOD_ALT_LEFT|MOD_CONTROL_LEFT);
DigiKeyboard.delay(3000);

// CONNECT TO WIFI
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(MEDIUMDELAY);
DigiKeyboard.sendKeyStroke(KEY_S, MOD_ALT_LEFT | MOD_SHIFT_LEFT);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(MEDIUMDELAY);
DigiKeyboard.print(WIFISSID);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(81);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(81);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.print(WIFIPASSWORD);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(MEDIUMDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(LONGDELAY);

// AGREE TERMS OF SERVICE

DigiKeyboard.sendKeyStroke(43, MOD_SHIFT_LEFT);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(LONGDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

// LOGIN

DigiKeyboard.delay(LONGDELAY);
DigiKeyboard.print(LOGINUSERNAME);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(MEDIUMDELAY);
DigiKeyboard.print(LOGINPASSWORD);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);

// UPDATE

DigiKeyboard.delay(LONGDELAY);
DigiKeyboard.delay(LONGDELAY) :

// Delays are for load up time

DigiKeyboard.sendKeyStroke(KEY_S, MOD_ALT_LEFT | MOD_SHIFT_LEFT);
DigiKeyboard.delay(MEDIUMDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(LONGDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(43);
DigiKeyboard.delay(SHORTDELAY);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(10000000000);

// END TASK
for (;;)
{ 
}

}

