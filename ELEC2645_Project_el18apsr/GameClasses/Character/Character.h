/** Character
* @brief Defines the character object
* @author Alejandro Pascual San Román
* @date May, 2020
*/

#ifndef CHARACTER_H
#define CHARACTER_H

#include "mbed.h"
#include "N5110.h"
#include "Gamepad.h"
#include "Bitmap.h"
#include "Sprites.h"

class Character {
    
    public:
        /** Constructor */
        void init(int char_width, int char_height, int x_pos, int y_pos, int x_speed, int y_speed, int jump_speed, int gravity);
        
        /** Mutators */
        /** Updates character values
        * @param inputs taken from gamepad (float, bool)
        */
        void update(float x_input, bool A_held);
        /** Draws character on screen
        * @param lcd screen object
        */
        void draw(N5110 &lcd);
        /** Sets the position of the character in the screen
        * @param struct with given position (Vector2D)
        */
        void set_position(Vector2D pos);
        /** Sets character sprite
        * @param given sprite (int*)
        */
        void set_sprite(int *sprite);
        void remove_character(); /** Deletes character sprite */
        void reappear_character(); /** Sets character sprite to previous state */
        void freeze_character(); /** Maintains character in place */
        void unfreeze_character(); /** Releases character after freezing it */
        
        /** Accesors */
        /** Produces the current position of the character
        * @return current character position (Vector2D)
        */
        Vector2D get_position();
        /** Produces the previous position of the character
        * @return old character position (Vector2D)
        */
        Vector2D get_old_position();
        /** Produces the character dimensions
        * @return character dimensions (Vector2D)
        */
        Vector2D get_dimensions();
        /** Current character speed
        * @return biaxial character speed (Vector2D) 
        */
        Vector2D get_speed();
    
    private:
        // Character dimensions
        int _char_width;
        int _char_height;
        
        // Previous character dimensions, for changes
        int _prev_char_width;
        int _prev_char_height;
        
        int _x_pos; // Initial horizontal position
        int _y_pos; // Initial vertical position
        
        // Saved movement positions
        int _saved_x_pos;
        int _saved_y_pos;
        
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
        
        // Character_sprite
        int *_character_sprite;
        
        // Previous character_sprite, for changes
        int *_prev_character_sprite;
        
        // To change values
        bool _save_changes;
        
        // To freeze character
        bool _freeze;
};

#endif