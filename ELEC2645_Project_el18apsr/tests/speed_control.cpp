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
    
    int fps = 25;  // frames per second

    lcd.init();     // initialise display
    
    wait(1.0f/fps);  // and wait for one frame period  
    
    while(1){
        Vector2D input = pad.get_coord();
        
        float x = input.x;
        float y = input.y;
        
        int width = 12;
        int height = 12;

        /*float x_pos = (x - 1.0421);
        float y_pos = (y + (1-0.0127));*/
        
        float speed = 5;
        
        float x_pos = x_pos + (x - 1.0421)*speed;
        float y_pos = y_pos + (y + (1-0.0127))*speed*-1;
        
        if(x_pos >= 84-width) x_pos = 84-width;
        if(x_pos <= 0) x_pos = 0;
        
        if(y_pos >= 48-height) y_pos = 48-height;
        if(y_pos <= 0) y_pos = 0;
        
        char x_str[10];
        char y_str[10];
        
        sprintf(x_str, "%f", x_pos);
        sprintf(y_str, "%f", y_pos);
        
        lcd.clear();
        //lcd.printString(x_str, 0, 3);
        //lcd.printString(y_str, 0, 2);
        lcd.drawRect(x_pos, y_pos, width, height, FILL_BLACK);
        lcd.refresh();

        wait_ms(1000/fps);
    }
}

