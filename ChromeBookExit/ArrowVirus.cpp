/* im not responsible for any idiots that use this for malicious purposes.*/
#define STRINGIFY(x) #x

const char * dk =
#include "DigiKeyboard.h"
;

void setup() {
  // don't need to set anything up to use DigiKeyboard
}



void loop() {
  dk.sendKeyStroke(0);
  dk.sendKeyStroke(MOD_CONTROL_LEFT, KEY_N);
  dk.print("U suck lol");
  dk.delay(2500)
  dk.sendKeyStroke(MOD_SHIFT_LEFT, MOD_CONTROL_LEFT, KEY_Q);
  dk.delay(1000);
  dk.sendKeyStroke(MOD_SHIFT_LEFT, MOD_CONTROL_LEFT, KEY_Q);
  dk.delay(5000);
  for (;;){}  // Stops it from repeating. 
}
