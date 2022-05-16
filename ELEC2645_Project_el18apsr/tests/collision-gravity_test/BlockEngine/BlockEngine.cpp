#include "BlockEngine.h"

void BlockEngine::place(int block_width, int block_height, int x_pos, int y_pos, BlockType type){
    _block_width = block_width;
    _block_height = block_height;
    _x_pos = x_pos;
    _y_pos = y_pos;
    _type = type;
    
    switch(_type){
        case DIRT:
            _sprite = dirt;
            _collision = true;
            break;
        case WOOD:
            _sprite = wood;
            _collision = true;
            break;
        case LEAF:
            _sprite = leaf;
            _collision = false;
            break;
        case STONE:
            _sprite = stone;
            _collision = true;
            break;
        case IRON_BLOCK:
            _sprite = iron_block;
            _collision = true;
            break;
        case DIAMOND_BLOCK:
            _sprite = diamond_block;
            _collision = true;
            break;
        case AIR:
            _sprite = air;
            _collision = false;
            break;      
    }
}

void BlockEngine::draw(N5110 &lcd){    
    Bitmap block(_sprite, _block_height, _block_width);
    block.render(lcd, _x_pos, _y_pos);
}

BlockType BlockEngine::get_type(){
    return _type;
}

Vector2D BlockEngine::get_position(){
    Vector2D pos = {_x_pos, _y_pos};
    return pos;
}

Vector2D BlockEngine::get_dimensions(){
    Vector2D dim = {_block_width, _block_height};
    return dim;
}

bool BlockEngine::get_collision(){
    return _collision;
}
