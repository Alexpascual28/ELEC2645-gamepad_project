/** CollisionEngine
* @brief Manages collisions with borders and blocks
* @author Alejandro Pascual San Román
* @date May, 2020
*/

#ifndef COLLISIONENGINE_H
#define COLLISIONENGINE_H

#include "mbed.h"
#include "N5110.h"
#include "Gamepad.h"

#include "MapEngine.h"
#include "Character.h"
#include "BlockEngine.h"

struct BorderCollisions {
    bool up;  
    bool down;
    bool left;
    bool right;
};

class CollisionEngine {
    
    public:
        /** Constructor */
        void init(Character character, int block_width, int block_height);
        
        /** Mutators */
        /** Produces character position taking into account its collisions with the walls
        * @param Character object
        * @return character position (Vector2D)
        */
        Vector2D border_collisions(Character character);
        /** Produces character position taking into account its collisions with the blocks in the map
        * @param Character object, struct of blocks representing current scene
        * @return bool character position (Vector2D)
        */
        Vector2D map_collisions(Character character, MapBlocks blocks);

        /** Accesor */
        /** Outputs indicators regarding which border wall is being collided with
        * @return struct with four bools inside, for each of the four walls (BorderCollisions)
        */
        BorderCollisions get_border_collisions();
    
    private:
        // Individual collisions with block
        void apply_block_collisions(BlockEngine block);
    
        // Current character position values
        Vector2D _character_position;
        Vector2D _old_character_position;
        
        // Dimension values
        Vector2D _character_dimensions;
        Vector2D _block_dimensions;
        
        // Struct to confirm border collisions
        BorderCollisions _is_colliding;
};
    
#endif