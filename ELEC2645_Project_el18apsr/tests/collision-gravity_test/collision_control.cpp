/* 
ELEC2645 Embedded Systems Project
School of Electronic & Electrical Engineering
University of Leeds
2019/20

Name: Alejandro Pascual San Román 
Username: el18apsr
Student ID Number: 201255350
Date: 30/03/2020
*/

// includes
#include "mbed.h"
#include "Gamepad.h"
#include "N5110.h"
#include "GameEngine.h"

// objects
Gamepad pad;
N5110 lcd;
GameEngine game;

int main(){
    
    int fps = 25;  // frames per second
    game.init();
    lcd.init();     // initialise display
    wait(1.0f/fps);  // and wait for one frame period 
    
    while(1){
        game.read_input(pad);
        game.update();
        lcd.clear();
        game.draw(lcd);
        lcd.refresh();
        wait_ms(1000/fps);
    }
}