/** SpriteEngine
* @brief Creates sprites for the character by adding equipment
* @author Alejandro Pascual San Román
* @date May, 2020
*/

#ifndef SPRITEENGINE_H
#define SPRITEENGINE_H

#include "mbed.h"
#include "N5110.h"
#include "Gamepad.h"
#include "Sprites.h"

class SpriteEngine {
    public:
        /** Constructor */
        void init();

        /** Mutators */
        /** Adds a tool
        * @param sprite for the tool (int*)
        */
        void add_tool(int *tool);
        void remove_tool();  /** Removes a tool */
        
        /** Adds a helmet
        * @param sprite for the helmet (int*)
        */
        void add_helmet(int *helmet);
        void remove_helmet();  /** Removes the helmet */
        
        /** Adds armor
        * @param sprite for the armor (int*)
        */
        void add_armor(int *armor);
        void remove_armor(); /** Removes the armor */
        
        /** Adds shoes
        * @param sprite for the shoes (int*)
        */
        void add_shoes(int *shoes);
        void remove_shoes(); /** Removes the shoes */
        
        /** Accesor */
        /** Get the character sprite
        * @return sprite of character
        */
        int * get_character();
    private:
        int *_character_sprite;
};

#endif