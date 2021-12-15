// im not responsible for any idiots that use this for malicious purposes.
#include "DigiKeyboard.h"
#define STRINGIFY(x) #x

const char * dk =
#include "DigiKeyboard.h"
;

void setup() {
  // don't need to set anything up to use DigiKeyboard
}



void loop() {
  dk.sendKeyStroke(0);
  dk.sendKeyStroke
  dk.delay(5000);
  for (;;){}  // Stops it from repeating. 
}
