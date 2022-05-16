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

// objects
Gamepad pad;
N5110 lcd;

int main(){
    
    int fps = 6;  // frames per second

    lcd.init();     // initialise display
    
    wait(1.0f/fps);  // and wait for one frame period  
    
    while(1){
        Vector2D input = pad.get_coord();
        
        float x = input.x;
        float y = input.y;
        
        int width = 12;
        int height = 12;
        
        x = x * (84-width)/2;
        y = y * -(48-height)/2;
        
        char x_pos[10];
        char y_pos[10];
        
        sprintf(x_pos, "%f", x);
        sprintf(y_pos, "%f", y);
        
        lcd.clear();
        //lcd.printString(x_pos, 0, 3);
        //lcd.printString(y_pos, 0, 2);
        lcd.drawRect(x, y, width, height, FILL_BLACK);
        lcd.refresh();

        wait_ms(1000/fps);
    }
}

