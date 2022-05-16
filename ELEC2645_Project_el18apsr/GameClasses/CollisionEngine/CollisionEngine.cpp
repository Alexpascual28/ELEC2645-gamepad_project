#include "CollisionEngine.h"

// Feed block and character dimensions
void CollisionEngine::init(Character character, int block_width, int block_height){
    _character_dimensions = character.get_dimensions();
    Vector2D block_dimensions = {block_width, block_height};
    _block_dimensions = block_dimensions;
}

Vector2D CollisionEngine::border_collisions(Character character){
    Vector2D position = character.get_position();
    
    // Map constraints
    if(position.x >= WIDTH-(_character_dimensions.x/2)) { // Right side
        //position.x = WIDTH-_character_dimensions.x;
        _is_colliding.right = true;
    } else _is_colliding.right = false;
    
    if(position.x <= -(_character_dimensions.x/2)) { // Left side
        //position.x = 0;
        _is_colliding.left = true;
    } else _is_colliding.left = false;
    
    if(position.y >= HEIGHT-_character_dimensions.y) { // Down
        position.y = HEIGHT-_character_dimensions.y;
        _is_colliding.down = true;   
    } else _is_colliding.down = false;
    
    if(position.y <= -(_character_dimensions.y/2)) { // Up
        // position.y = 0;
        _is_colliding.up = true;
    } else _is_colliding.up = false;
    return position;
}

// Apply individual collisions to all blocks
Vector2D CollisionEngine::map_collisions(Character character, MapBlocks blocks){
    _character_position = character.get_position();
    _old_character_position = character.get_old_position();

    apply_block_collisions(blocks.block00);
    apply_block_collisions(blocks.block01);
    apply_block_collisions(blocks.block02);
    apply_block_collisions(blocks.block03);
    apply_block_collisions(blocks.block04);
    apply_block_collisions(blocks.block05);
    apply_block_collisions(blocks.block06);
    
    apply_block_collisions(blocks.block10);
    apply_block_collisions(blocks.block11);
    apply_block_collisions(blocks.block12);
    apply_block_collisions(blocks.block13);
    apply_block_collisions(blocks.block14);
    apply_block_collisions(blocks.block15);
    apply_block_collisions(blocks.block16);
    
    apply_block_collisions(blocks.block20);
    apply_block_collisions(blocks.block21);
    apply_block_collisions(blocks.block22);
    apply_block_collisions(blocks.block23);
    apply_block_collisions(blocks.block24);
    apply_block_collisions(blocks.block25);
    apply_block_collisions(blocks.block26);
    
    apply_block_collisions(blocks.block30);
    apply_block_collisions(blocks.block31);
    apply_block_collisions(blocks.block32);
    apply_block_collisions(blocks.block33);
    apply_block_collisions(blocks.block34);
    apply_block_collisions(blocks.block35);
    apply_block_collisions(blocks.block36);
    
    return _character_position;
}

// Apply individual block collisions
void CollisionEngine::apply_block_collisions(BlockEngine block){
    Vector2D block_position = block.get_position();
    bool is_collider = block.get_collider();

    if (is_collider) {
        if ((_character_position.y >= block_position.y - _character_dimensions.y) && // if character is colliding with block
            (_character_position.y <= block_position.y + _block_dimensions.y) &&
            (_character_position.x >= block_position.x - _character_dimensions.x) &&
            (_character_position.x <= block_position.x + _block_dimensions.x)) {
            
            if ((_old_character_position.y >= block_position.y + _block_dimensions.y) &&
                (_character_position.y <= block_position.y + _block_dimensions.y)) _character_position.y = block_position.y + _block_dimensions.y; // from Bottom
            
            else if ((_old_character_position.y <= block_position.y - _character_dimensions.y) &&
                (_character_position.y >= block_position.y - _character_dimensions.y)) _character_position.y = block_position.y - _character_dimensions.y; // from Top
                    
            else if ((_old_character_position.x >= block_position.x + _block_dimensions.x) &&
                (_character_position.x <= block_position.x + _block_dimensions.x)) _character_position.x = block_position.x + _block_dimensions.x; // from Right
                
            else if ((_old_character_position.x <= block_position.x - _character_dimensions.x) &&
                (_character_position.x >= block_position.x - _character_dimensions.x)) _character_position.x = block_position.x - _character_dimensions.x; // from Left
        }
    }
}

 BorderCollisions CollisionEngine::get_border_collisions(){
    return _is_colliding;
}