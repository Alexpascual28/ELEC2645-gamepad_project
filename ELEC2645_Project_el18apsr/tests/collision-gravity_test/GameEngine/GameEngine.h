#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "mbed.h"
#include "N5110.h"
#include "Gamepad.h"

#include "Character.h"
#include "BlockEngine.h"

// Character defines
#define CHARACTER_WIDTH 12
#define CHARACTER_HEIGHT 24

#define INIT_X_POS 0
#define INIT_Y_POS 0

#define INIT_X_SPEED 5
#define INIT_Y_SPEED 0

#define JUMP_SPEED -8
#define GRAVITY 2

// Block defines
#define BLOCK_HEIGHT 12
#define BLOCK_WIDTH 12

#define BLOCK1_Y_POS 30
#define BLOCK1_X_POS 40

#define BLOCK2_Y_POS 20
#define BLOCK2_X_POS 10

class GameEngine {
    
    public:
        void init(); 
        void read_input(Gamepad &pad);
        void update();
        void draw(N5110 &lcd);
    
    private:
        void border_collisions();
        void block_collision_admin();
        
        Vector2D apply_block_collisions(Vector2D character_position, Vector2D old_character_position, Vector2D block_position);
        
        Character _character;
        
        BlockEngine _block1;
        BlockEngine _block2;
        
        bool _A; // A held
        float _x; // Horizontal Input
};

#endif