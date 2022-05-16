#ifndef CHARACTER_H
#define CHARACTER_H

#include "mbed.h"
#include "N5110.h"
#include "Gamepad.h"

class Character {
    
    public:
        void init(int char_width, int char_height, int x_pos, int y_pos, int x_speed, int y_speed, int jump_speed, int gravity);
        void update(float x_input, bool A_held);
        void draw(N5110 &lcd);
        void set_position(Vector2D pos);
        Vector2D get_position();
        Vector2D get_old_position();
    
    private:
        // Character dimensions
        int _char_width;
        int _char_height;
        
        int _x_pos; // Initial horizontal position
        int _y_pos; // Initial vertical position
        
        // Old Positions
        int _old_x_pos;
        int _old_y_pos;
        
        // Initial speeds
        int _x_speed;
        int _y_speed;
        
        // Gravity motion variables
        int _jump_speed;
        int _gravity;
        
        // Test strings
        char _x_str[10];
        char _y_str[10];
};

#endif