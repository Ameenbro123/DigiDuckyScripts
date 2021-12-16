#include "DigisparkKeyboard.h"
// Get out of my code!!!!!!
// How did u even get this????
void setup() {
  // Net setup (i dont speak russian)
}


void loop() {
  digitalWrite(1, HIGH)
  // Start
  //------------------------------------------------------
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Alpha-Omega Virus");
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_ESC);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_GUI_LEFT);
  DigiKeyboard.delay(3000);
  DigiKeyboard.print("https://updatefaker.com/windows10/index.html");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F11);
  // -----------------------------------------------------
  // END
  digitalWrite(1, LOW);
  for (;;) {
    // Stops script from el re-runningo
  }
}
