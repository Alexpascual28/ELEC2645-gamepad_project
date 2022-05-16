#include "BlockEngine.h"

void BlockEngine::init(int block_width, int block_height, int x_pos, int y_pos, BlockType type){
    _block_width = block_width;
    _block_height = block_height;
    _x_pos = x_pos;
    _y_pos = y_pos;
    _type = type;
    place_block(_type);
    _is_chosen = false;
    _is_selected = false;
}

void BlockEngine::draw(N5110 &lcd){    
    Bitmap block(_sprite, _block_height, _block_width);
    block.render(lcd, _x_pos, _y_pos);
}

void BlockEngine::place_block(BlockType type){
    _type = type;
    switch(type){
        // Blocks
        case DIRT:
            _sprite = dirt;
            _choose_sprite = chosen_dirt;
            _select_sprite = selected_dirt;
            _collider = true;
            break;
        case WOOD:
            _sprite = wood;
            _choose_sprite = chosen_wood;
            _select_sprite = selected_wood;
            _collider = true;
            break;
        case LEAF:
            _sprite = leaf;
            _choose_sprite = chosen_leaf;
            _select_sprite = selected_leaf;
            _collider = false;
            break;
        case STONE:
            _sprite = stone;
            _choose_sprite = chosen_stone;
            _select_sprite = selected_stone;
            _collider = true;
            break;
        case IRON_BLOCK:
            _sprite = iron_block;
            _choose_sprite = chosen_iron_block;
            _select_sprite = selected_iron_block;
            _collider = true;
            break;
        case DIAMOND_BLOCK:
            _sprite = diamond_block;
            _choose_sprite = chosen_diamond_block;
            _select_sprite = selected_diamond_block;
            _collider = true;
            break;
        case AIR:
            _sprite = air;
            _choose_sprite = chosen_air;
            _select_sprite = chosen_air;
            _collider = false;
            break;
            
        // Items
        case DIAMOND:
             _sprite = diamond;
            _choose_sprite = chosen_diamond;
            _select_sprite = selected_diamond;
            _collider = true;
            break;
        case IRON:
             _sprite = iron;
            _choose_sprite = chosen_iron;
            _select_sprite = selected_iron;
            _collider = true;
            break;
        case DIAMOND_SWORD:
             _sprite = diamond_sword;
            _choose_sprite = chosen_diamond_sword;
            _select_sprite = selected_diamond_sword;
            _collider = false;
            break;
        case IRON_SWORD:
             _sprite = iron_sword;
            _choose_sprite = chosen_iron_sword;
            _select_sprite = selected_iron_sword;
            _collider = false;
            break;            
        case STONE_PICKAXE:
             _sprite = stone_pickaxe;
            _choose_sprite = chosen_stone_pickaxe;
            _select_sprite = selected_stone_pickaxe;
            _collider = false;
            break;
        case IRON_PICKAXE:
             _sprite = iron_pickaxe;
            _choose_sprite = chosen_iron_pickaxe;
            _select_sprite = selected_iron_pickaxe;
            _collider = false;
            break;
        case BOMB:
             _sprite = bomb;
            _choose_sprite = chosen_bomb;
            _select_sprite = selected_bomb;
            _collider = false;
            break;
            
        // Equipment    
        case DIAMOND_HELMET:
             _sprite = diamond_helmet;
            _choose_sprite = chosen_diamond_helmet;
            _select_sprite = selected_diamond_helmet;
            _collider = false;
            break;
        case IRON_HELMET:
             _sprite = iron_helmet;
            _choose_sprite = chosen_iron_helmet;
            _select_sprite = selected_iron_helmet;
            _collider = false;
            break;
        case DIAMOND_ARMOR:
             _sprite = diamond_armor;
            _choose_sprite = chosen_diamond_armor;
            _select_sprite = selected_diamond_armor;
            _collider = false;
            break;
        case IRON_ARMOR:
             _sprite = iron_armor;
            _choose_sprite = chosen_iron_armor;
            _select_sprite = selected_iron_armor;
            _collider = false;
            break;
        case DIAMOND_SHOES:
             _sprite = diamond_shoes;
            _choose_sprite = chosen_diamond_shoes;
            _select_sprite = selected_diamond_shoes;
            _collider = false;
            break;
        case IRON_SHOES:
             _sprite = iron_shoes;
            _choose_sprite = chosen_iron_shoes;
            _select_sprite = selected_iron_shoes;
            _collider = false;
            break;                                
        
        // Inventory Parts
        case FRAME:
             _sprite = frame;
            _choose_sprite = chosen_frame;
            _select_sprite = chosen_frame;
            _collider = false;
            break;
        case CRAFT:
             _sprite = craft;
            _choose_sprite = chosen_craft;
            _select_sprite = selected_craft;
            _collider = false;
            break;
        case REMOVE_CRAFTING:
             _sprite = remove_crafting;
            _choose_sprite = chosen_remove_crafting;
            _select_sprite = selected_remove_crafting;
            _collider = false;
            break;
        case REMOVE_ITEM:
             _sprite = remove_item;
            _choose_sprite = chosen_remove_item;
            _select_sprite = selected_remove_item;
            _collider = false;
            break;
    }
}

void BlockEngine::remove_block(){
    place_block(AIR);
}

void BlockEngine::choose_block(){
    _sprite = _choose_sprite;
    _is_chosen = true;
}

void BlockEngine::select_block(){
    _sprite = _select_sprite;
    _is_selected = true;
}

void BlockEngine::unselect_block(){
    place_block(_type);
    _is_chosen = false;
    _is_selected = false;
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

bool BlockEngine::get_collider(){
    return _collider;
}

bool BlockEngine::get_is_chosen(){
    return _is_chosen;
}

bool BlockEngine::get_is_selected(){
    return _is_selected;
}
