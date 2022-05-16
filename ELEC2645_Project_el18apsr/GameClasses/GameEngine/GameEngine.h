/** GameEngine
* @brief Manages game, compiles all "engines"
* @author Alejandro Pascual San Román
* @date May, 2020
*/

#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "mbed.h"
#include "N5110.h"
#include "Gamepad.h"

#include "Character.h"
#include "BlockEngine.h"
#include "MapEngine.h"
#include "SceneEngine.h"
#include "SpriteEngine.h"
#include "CollisionEngine.h"

// Character defines
#define CHARACTER_WIDTH 12
#define CHARACTER_HEIGHT 24

#define INIT_X_POS 0
#define INIT_Y_POS 0

#define INIT_X_SPEED 3
#define INIT_Y_SPEED 0

#define JUMP_SPEED -9
#define GRAVITY 2

// Block defines
#define BLOCK_HEIGHT 12
#define BLOCK_WIDTH 12

class GameEngine {
    
    public:
        /** Constructors */
        void init();
        /** Gets data from input
        * @param Gamepad object
        */
        void read_input(Gamepad &pad);
        
        /** Mutator */
        void update(); /** Updates all objects */
        
        /** Accesors */
        /** Draws objects in lcd screen
        * @param lcd screen object
        */
        void draw(N5110 &lcd);
        /** Generates a welcome screen
        * @param Gamepad object, lcd screen object
        * @returns welcome menu
        */
        void welcome(Gamepad &pad, N5110 &lcd);
    
    private:
        void update_collisions();
        
        Character _character;
        MapEngine _map;
        SceneEngine _scene;
        CollisionEngine _collisions;
        SpriteEngine _sprites;
        
        // Previous button values
        bool _A_prev; 
        bool _B_prev;
        bool _X_prev;
        bool _Y_prev;
        
        // Buttons
        bool _A; 
        bool _B;
        bool _X;
        bool _Y;
        
        // Switch values
        bool _A_switch; 
        bool _B_switch;
        bool _X_switch;
        bool _Y_switch;
        
        float _x; // Horizontal Input
        float _y; // Vertical Input
        
        bool _welcome_switch;
};

#endif