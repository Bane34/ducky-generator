/******************************************************/
/*                   Made by Bane34                   */
/*             https://github.com/Bane34              */              
/* I am not responsible of what you do with this code */
/******************************************************/

#include <Keyboard.h>

void start(){
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);

    Keyboard.begin();
    
    ////////////EXAMPLE/////////////
    Execute();
    Write("powershell");
    Return();
    Write("echo ducky script working :)");

    ///PUT YOUR OWN CODE DOWN HERE///
    
    Keyboard.end();
    digitalWrite(LED_BUILTIN, LOW);
}

void loop(){
    // Dont put anything here
}

void Return(){
    //Use this to press intro
    Keyboard.press(KEY_RETURN);
    delay(500);
    Keyboard.release(KEY_RETURN);
    delay(500);
}

void Close(){
    // ALT + F4 (close shortcut)
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    delay(500);
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(KEY_F4);
    delay(500);
}

void Write(char txt[]){
    Keyboard.print(txt);
    delay(500);
}

void Execute(){
    // WINDOWS KEY + r 
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(500);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release('r');
    delay(500);
}