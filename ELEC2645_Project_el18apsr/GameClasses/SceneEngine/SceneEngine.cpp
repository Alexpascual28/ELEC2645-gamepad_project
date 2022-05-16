#include "SceneEngine.h"

void SceneEngine::init(int block_width, int block_height){
    _scene0_overworld.init(block_width, block_height, 0, OVERWORLD);
    _scene1_overworld.init(block_width, block_height, 1, OVERWORLD);
    _scene2_overworld.init(block_width, block_height, 2, OVERWORLD);
    _scene3_overworld.init(block_width, block_height, 3, OVERWORLD);
    _scene4_overworld.init(block_width, block_height, 4, OVERWORLD);
    _scene5_overworld.init(block_width, block_height, 5, OVERWORLD);
    _scene6_overworld.init(block_width, block_height, 6, OVERWORLD);
    
    _scene0_underworld.init(block_width, block_height, 0, UNDERWORLD);
    _scene1_underworld.init(block_width, block_height, 1, UNDERWORLD);
    _scene2_underworld.init(block_width, block_height, 2, UNDERWORLD);
    _scene3_underworld.init(block_width, block_height, 3, UNDERWORLD);
    _scene4_underworld.init(block_width, block_height, 4, UNDERWORLD);
    _scene5_underworld.init(block_width, block_height, 5, UNDERWORLD);
    _scene6_underworld.init(block_width, block_height, 6, UNDERWORLD);
    
    _inventory_scene.init(block_width, block_height, 0, INVENTORY);
    
    _blank.init(block_width, block_height, 0, BLANK);
    _test.init(block_width, block_height, 0, TEST);
    
    _current_map.set_blocks(_scene0_overworld.get_blocks());
    _ID = 0;
    _tag = OVERWORLD;
    _save_prev_tag = true;
    
    _block_number = 0;
    _prev_block_number = 0;
    
    _mapped_x = 0;
    _mapped_y = 0;
    
    _character_sprite.init();
    _build_block_type = DIRT;
    
    _inventory_text = "Inventory";
}

void SceneEngine::update(Character character, BorderCollisions is_colliding, bool Y_switch, bool X_switch, bool A_held, bool B_switch, float y_input, float x_input){
    _Y_switch = Y_switch;
    // If Y_button is selected, open inventory
    if(Y_switch) { 
        if(_save_prev_tag) {
            _prev_tag = _tag;
            save_scenes();
            _tag = INVENTORY;
            _current_map.set_blocks(_inventory_scene.get_blocks());
            _save_prev_tag = false;
        } 
        get_block_number(y_input, x_input);
        _current_map.set_blocks(inventory_manager(A_held));
    } else if(_save_prev_tag == false) {
        _inventory_scene.set_blocks(_current_map.get_blocks());
        _tag = _prev_tag;
        update_scenes();
        _save_prev_tag = true;
        
    } else if(B_switch || X_switch) {
        _prev_tag = _tag;
        get_block_number(/*get_position_block_number(_character_position.x, _character_position.y),*/ y_input, x_input);
        _current_map.set_blocks(choose_blocks(A_held, X_switch, Y_switch, B_switch, _build_block_type));
        save_scenes();
    }
    
    _character_position = character.get_position();
    
    if(is_colliding.right) {
        _prev_ID = _ID;
        save_scenes();
        _ID++;
        if(_ID > 6) _ID = 0; // Loop IDs
        update_scenes();
        _character_position = _current_map.get_positions().left_position;
    }
    if(is_colliding.left) {
        _prev_ID = _ID;
        save_scenes();
        _ID--;
        if(_ID < 0) _ID = 6; // Loop IDs
        update_scenes();
        _character_position = _current_map.get_positions().right_position;
    }
    if(_tag == OVERWORLD && is_colliding.down) {
        _prev_tag = _tag;
        save_scenes();
        _tag = UNDERWORLD;
        update_scenes();
        _character_position = _current_map.get_positions().mid_position;
    }
    if(_tag == UNDERWORLD && is_colliding.up) {
        _prev_tag = _tag;
        save_scenes();
        _tag = OVERWORLD;
        update_scenes();
        _character_position = _current_map.get_positions().mid_position;
    }
}

// Sets blocks of current map from the respective scene, gets initial position of character in each scene
void SceneEngine::update_scenes(){
     if(_tag == TEST) {
        _current_map.set_blocks(_test.get_blocks());
        _current_map.set_positions(_test.get_positions());
    } else if(_tag == BLANK) {
        _current_map.set_blocks(_blank.get_blocks());
        _current_map.set_positions(_blank.get_positions());
    } else if(_tag == UNDERWORLD) {
        switch(_ID) {
            case 0:
                _current_map.set_blocks(_scene0_underworld.get_blocks());
                _current_map.set_positions(_scene0_underworld.get_positions());
                break;
            case 1:
                _current_map.set_blocks(_scene1_underworld.get_blocks());
                _current_map.set_positions(_scene1_underworld.get_positions());
                break;
            case 2:
                _current_map.set_blocks(_scene2_underworld.get_blocks());
                _current_map.set_positions(_scene2_underworld.get_positions());
                break;
            case 3:
                _current_map.set_blocks(_scene3_underworld.get_blocks());
                _current_map.set_positions(_scene3_underworld.get_positions());
                break;
            case 4:
                _current_map.set_blocks(_scene4_underworld.get_blocks());
                _current_map.set_positions(_scene4_underworld.get_positions());
                break;
            case 5:
                _current_map.set_blocks(_scene5_underworld.get_blocks());
                _current_map.set_positions(_scene5_underworld.get_positions());
                break;
            case 6:
                _current_map.set_blocks(_scene6_underworld.get_blocks());
                _current_map.set_positions(_scene6_underworld.get_positions());
                break;
        }
    } else { // Defaults to OVERWORLD
        switch(_ID) {
            case 0:
                _current_map.set_blocks(_scene0_overworld.get_blocks());
                _current_map.set_positions(_scene0_overworld.get_positions());
                break;
            case 1:
                _current_map.set_blocks(_scene1_overworld.get_blocks());
                _current_map.set_positions(_scene1_overworld.get_positions());
                break;
            case 2:
                _current_map.set_blocks(_scene2_overworld.get_blocks());
                _current_map.set_positions(_scene2_overworld.get_positions());
                break;
            case 3:
                _current_map.set_blocks(_scene3_overworld.get_blocks());
                _current_map.set_positions(_scene3_overworld.get_positions());
                break;
            case 4:
                _current_map.set_blocks(_scene4_overworld.get_blocks());
                _current_map.set_positions(_scene4_overworld.get_positions());
                break;
            case 5:
                _current_map.set_blocks(_scene5_overworld.get_blocks());
                _current_map.set_positions(_scene5_overworld.get_positions());
                break;
            case 6:
                _current_map.set_blocks(_scene6_overworld.get_blocks());
                _current_map.set_positions(_scene6_overworld.get_positions());
                break;
        }
    }
}

// Saves current map in its respective scene
void SceneEngine::save_scenes(){
     if(_prev_tag == TEST) {
        _test.set_blocks(_current_map.get_blocks());
    } else if(_prev_tag == BLANK) {
        _blank.set_blocks(_current_map.get_blocks());
    } else if(_prev_tag == UNDERWORLD) {
        switch(_prev_ID) {
            case 0:
                _scene0_underworld.set_blocks(_current_map.get_blocks());
                break;
            case 1:
                _scene1_underworld.set_blocks(_current_map.get_blocks());
                break;
            case 2:
                _scene2_underworld.set_blocks(_current_map.get_blocks());
                break;
            case 3:
                _scene3_underworld.set_blocks(_current_map.get_blocks());
                break;
            case 4:
                _scene4_underworld.set_blocks(_current_map.get_blocks());
                break;
            case 5:
                _scene5_underworld.set_blocks(_current_map.get_blocks());
                break;
            case 6:
                _scene6_underworld.set_blocks(_current_map.get_blocks());
                break;
        }
    } else { // Defaults to OVERWORLD
        switch(_prev_ID) {
            case 0:
                _scene0_overworld.set_blocks(_current_map.get_blocks());
                break;
            case 1:
                _scene1_overworld.set_blocks(_current_map.get_blocks());
                break;
            case 2:
                _scene2_overworld.set_blocks(_current_map.get_blocks());
                break;
            case 3:
                _scene3_overworld.set_blocks(_current_map.get_blocks());
                break;
            case 4:
                _scene4_overworld.set_blocks(_current_map.get_blocks());
                break;
            case 5:
                _scene5_overworld.set_blocks(_current_map.get_blocks());
                break;
            case 6:
                _scene6_overworld.set_blocks(_current_map.get_blocks());
                break;
        }
    }
}

int SceneEngine::get_position_block_number(float x_pos, float y_pos){
    int character_block_position;
    float mapping_function = 6.0f / 72.0f;
    float mapped_x_pos = x_pos * mapping_function;
    
    if(y_pos < 0){
        character_block_position = mapped_x_pos - 14;
    } else if(y_pos >= 0 && y_pos < 12){
        character_block_position = mapped_x_pos - 7;
    } else if(y_pos >= 12 && y_pos < 24){
        character_block_position = mapped_x_pos;
    } else if(y_pos >= 24 && y_pos < 36) {
        character_block_position = mapped_x_pos + 7;
    } else if(y_pos >= 36) {
        character_block_position = mapped_x_pos + 14;
    }
    
    _test_int2 = character_block_position;
    
    return character_block_position;
}


void SceneEngine::get_block_number(/*int position_block_number,*/ float y_input, float x_input){
    _prev_mapped_x = _mapped_x;
    _prev_mapped_y = _mapped_y;
    
    _mapped_y = -(y_input + 1)*11/10;
    _mapped_x = (x_input - 1)*11/10;
    
    _prev_block_number = _block_number;
    
    if(_mapped_y > _prev_mapped_y && _mapped_y == 1) _block_number = _block_number + 7; // DOWN
    if(_mapped_y < _prev_mapped_y && _mapped_y == -1) _block_number = _block_number - 7; // UP
    if(_mapped_x > _prev_mapped_x && _mapped_x == 1) _block_number = _block_number + 1; // RIGHT
    if(_mapped_x < _prev_mapped_x && _mapped_x == -1) _block_number = _block_number - 1; // LEFT
    
    _test_int = _block_number;
    
    if(_block_number <= 0) _block_number = 0;
    if(_block_number >= 27) _block_number = 27;
    
    /*// Constraints
    if(_block_number <= (position_block_number - 7) - 1) _block_number = (position_block_number - 7) - 1;
    if((_block_number >= (position_block_number - 7) + 1) && (_block_number < position_block_number - 1)) _block_number = (position_block_number - 7) + 1;
    if((_block_number >= position_block_number + 1) && (_block_number < (position_block_number + 7) - 1)) _block_number = position_block_number + 1;
    if((_block_number >= (position_block_number + 7) + 1) && (_block_number < (position_block_number + 14) - 1)) _block_number = (position_block_number + 7) + 1;
    if(_block_number >= (position_block_number + 14) + 1) _block_number = (position_block_number + 14) + 1;*/
}

MapBlocks SceneEngine::choose_blocks(bool A_held, bool X_switch, bool Y_switch, bool B_switch, BlockType type){
    MapBlocks map = _current_map.get_blocks();
    
    switch(_block_number){
        // First row
        case 0:
            map.block00.choose_block();
            if(B_switch && A_held) map.block00.remove_block();
            if(X_switch && A_held) map.block00.place_block(type);
            break;
        case 1:
            map.block01.choose_block();
            if(B_switch && A_held) map.block01.remove_block();
            if(X_switch && A_held) map.block01.place_block(type);
            break;
        case 2:
            map.block02.choose_block();           
            if(B_switch && A_held) map.block02.remove_block();
            if(X_switch && A_held) map.block02.place_block(type);
            break;
        case 3:
            map.block03.choose_block();
            if(B_switch && A_held) map.block03.remove_block();
            if(X_switch && A_held) map.block03.place_block(type);
            break;
        case 4:
            map.block04.choose_block();
            if(B_switch && A_held) map.block04.remove_block();
            if(X_switch && A_held) map.block04.place_block(type);
            break;
        case 5:
            map.block05.choose_block();
            if(B_switch && A_held) map.block05.remove_block();
            if(X_switch && A_held) map.block05.place_block(type);
            break;
        case 6:
            map.block06.choose_block();
            if(B_switch && A_held) map.block06.remove_block();
            if(X_switch && A_held) map.block06.place_block(type);
            break;
            
        // Second row
        case 7:
            map.block10.choose_block();
            if(B_switch && A_held) map.block10.remove_block();
            if(X_switch && A_held) map.block10.place_block(type);
            break;
        case 8:
            map.block11.choose_block();
            if(B_switch && A_held) map.block11.remove_block();
            if(X_switch && A_held) map.block11.place_block(type);
            break;
        case 9:
            map.block12.choose_block();
            if(B_switch && A_held) map.block12.remove_block();
            if(X_switch && A_held) map.block12.place_block(type);
            break;
        case 10:
            map.block13.choose_block();
            if(B_switch && A_held) map.block13.remove_block();
            if(X_switch && A_held) map.block13.place_block(type);
            break;
        case 11:
            map.block14.choose_block();
            if(B_switch && A_held) map.block14.remove_block();
            if(X_switch && A_held) map.block14.place_block(type);
            break;
        case 12:
            map.block15.choose_block();
            if(B_switch && A_held) map.block15.remove_block();
            if(X_switch && A_held) map.block15.place_block(type);
            break;
        case 13:
            map.block16.choose_block();
            if(B_switch && A_held) map.block16.remove_block();
            if(X_switch && A_held) map.block16.place_block(type);
            break;
            
        // Third row
        case 14:
            map.block20.choose_block();
            if(B_switch && A_held) map.block20.remove_block();
            if(X_switch && A_held) map.block20.place_block(type);
            break;
        case 15:
            map.block21.choose_block();
            if(B_switch && A_held) map.block21.remove_block();
            if(X_switch && A_held) map.block21.place_block(type);
            break;
        case 16:
            map.block22.choose_block();
            if(B_switch && A_held) map.block22.remove_block();
            if(X_switch && A_held) map.block22.place_block(type);
            break;
        case 17:
            map.block23.choose_block();
            if(B_switch && A_held) map.block23.remove_block();
            if(X_switch && A_held) map.block23.place_block(type);
            break;
        case 18:
            map.block24.choose_block();
            if(B_switch && A_held) map.block24.remove_block();
            if(X_switch && A_held) map.block24.place_block(type);
            break;
        case 19:
            map.block25.choose_block();
            if(B_switch && A_held) map.block25.remove_block();
            if(X_switch && A_held) map.block25.place_block(type);
            break;
        case 20:
            map.block26.choose_block();
            if(B_switch && A_held) map.block26.remove_block();
            if(X_switch && A_held) map.block26.place_block(type);
            break;
            
        // Fourth row
        case 21:
            map.block30.choose_block();
            if(B_switch && A_held) map.block30.remove_block();
            if(X_switch && A_held) map.block30.place_block(type);
            break;
        case 22:
            map.block31.choose_block();
            if(B_switch && A_held) map.block31.remove_block();
            if(X_switch && A_held) map.block31.place_block(type);
            break;
        case 23:
            map.block32.choose_block();
            if(B_switch && A_held) map.block32.remove_block();
            if(X_switch && A_held) map.block32.place_block(type);
            break;
        case 24:
            map.block33.choose_block();
            if(B_switch && A_held) map.block33.remove_block();
            if(X_switch && A_held) map.block33.place_block(type);
            break;
        case 25:
            map.block34.choose_block();
            if(B_switch && A_held) map.block34.remove_block();
            if(X_switch && A_held) map.block34.place_block(type);
            break;
        case 26:
            map.block35.choose_block();
            if(B_switch && A_held) map.block35.remove_block();
            if(X_switch && A_held) map.block35.place_block(type);
            break;
        case 27:
            map.block36.choose_block();
            if(B_switch && A_held) map.block36.remove_block();
            if(X_switch && A_held) map.block36.place_block(type);
            break;
        default:
            break;
    }
    
    if(_prev_block_number != _block_number){
        switch(_prev_block_number){
            // First row
            case 0:
                map.block00.unselect_block();
                break;
            case 1:
                map.block01.unselect_block();
                break;
            case 2:
                map.block02.unselect_block();
                break;
            case 3:
                map.block03.unselect_block();
                break;
            case 4:
                map.block04.unselect_block();
                break;
            case 5:
                map.block05.unselect_block();
                break;
            case 6:
                map.block06.unselect_block();
                break;
                
            // Second row
            case 7:
                map.block10.unselect_block();
                break;
            case 8:
                map.block11.unselect_block();
                break;
            case 9:
                map.block12.unselect_block();
                break;
            case 10:
                map.block13.unselect_block();
                break;
            case 11:
                map.block14.unselect_block();
                break;
            case 12:
                map.block15.unselect_block();
                break;
            case 13:
                map.block16.unselect_block();
                break;
                
            // Third row
            case 14:
                map.block20.unselect_block();
                break;
            case 15:
                map.block21.unselect_block();
                break;
            case 16:
                map.block22.unselect_block();
                break;
            case 17:
                map.block23.unselect_block();
                break;
            case 18:
                map.block24.unselect_block();
                break;
            case 19:
                map.block25.unselect_block();
                break;
            case 20:
                map.block26.unselect_block();
                break;
                
            // Fourth row
            case 21:
                map.block30.unselect_block();
                break;
            case 22:
                map.block31.unselect_block();
                break;
            case 23:
                map.block32.unselect_block();
                break;
            case 24:
                map.block33.unselect_block();
                break;
            case 25:
                map.block34.unselect_block();
                break;
            case 26:
                map.block35.unselect_block();
                break;
            case 27:
                map.block36.unselect_block();
                break;
            default:
                break;
        }
    }
    return map;
}

MapBlocks SceneEngine::inventory_manager(bool A_held){
    MapBlocks map = _current_map.get_blocks();
    
    switch(_block_number){
        // First row
        case 0:
            map.block00.choose_block();
            _inventory_text = "Dirt";
            if(A_held) {
                map.block00.select_block();
                map.block01.unselect_block();
                map.block10.unselect_block();
                map.block11.unselect_block();
                map.block20.unselect_block();
                map.block21.unselect_block();
                map.block30.unselect_block();
                map.block31.unselect_block();
                _build_block_type = DIRT;
            }
            break;
        case 1:
            map.block01.choose_block();
            _inventory_text = "Stone";
            if(A_held) {
                map.block00.unselect_block();
                map.block01.select_block();
                map.block10.unselect_block();
                map.block11.unselect_block();
                map.block20.unselect_block();
                map.block21.unselect_block();
                map.block30.unselect_block();
                map.block31.unselect_block();
                _build_block_type = STONE;
            }
            break;
        case 2:
            _inventory_text = "Inventory";
            map.block02.choose_block();           
            break;
        case 3:
            map.block03.choose_block();
            _inventory_text = "Iron Sword";
            if(A_held) {
                map.block03.select_block();
                _character_sprite.remove_tool();
                _character_sprite.add_tool(iron_sword);
                if(map.block04.get_is_selected())map.block04.unselect_block();
            }
            break;
        case 4:
            map.block04.choose_block();
            _inventory_text = "Diam Sword";
            if(A_held) {
                map.block04.select_block();
                _character_sprite.remove_tool();
                _character_sprite.add_tool(diamond_sword);
                if(map.block03.get_is_selected()) map.block03.unselect_block();
            }
            break;
        case 5:
            map.block05.choose_block();
            _inventory_text = "Ir Helmet";
            if(A_held) {
                map.block05.select_block();
                _character_sprite.remove_helmet();
                _character_sprite.add_helmet(iron_helmet);
                if(map.block06.get_is_selected()) map.block06.unselect_block();
            }
            break;
        case 6:
            map.block06.choose_block();
            _inventory_text = "D Helmet";
            if(A_held) {
                map.block06.select_block();
                _character_sprite.remove_helmet();
                _character_sprite.add_helmet(diamond_helmet);
                if(map.block05.get_is_selected()) map.block05.unselect_block();
            }
            break;
            
        // Second row
        case 7:
            map.block10.choose_block();
            _inventory_text = "Wood";
            if(A_held) {
                map.block00.unselect_block();
                map.block01.unselect_block();
                map.block10.select_block();
                map.block11.unselect_block();
                map.block20.unselect_block();
                map.block21.unselect_block();
                map.block30.unselect_block();
                map.block31.unselect_block();
                _build_block_type = WOOD;
            }
            break;
        case 8:
            map.block11.choose_block();
            _inventory_text = "Leaf";
            if(A_held) {
                map.block00.unselect_block();
                map.block01.unselect_block();
                map.block10.unselect_block();
                map.block11.select_block();
                map.block20.unselect_block();
                map.block21.unselect_block();
                map.block30.unselect_block();
                map.block31.unselect_block();
                _build_block_type = LEAF;
            }
            break;
        case 9:
            map.block12.choose_block();
            _inventory_text = "Inventory";
            break;
        case 10:
            map.block13.choose_block();
            _inventory_text = "Stone Pick";
            if(A_held) {
                map.block13.select_block();
                _character_sprite.remove_tool();
                _character_sprite.add_tool(stone_pickaxe);
                if(map.block14.get_is_selected()) map.block14.unselect_block();
            }
            break;
        case 11:
            map.block14.choose_block();
            _inventory_text = "Iron Pick";
            if(A_held) {
                map.block14.select_block();
                _character_sprite.remove_tool();
                _character_sprite.add_tool(iron_pickaxe);
                if(map.block13.get_is_selected()) map.block13.unselect_block();
            }
            break;
        case 12:
            map.block15.choose_block();
            _inventory_text = "Iron Armor";
            if(A_held) {
                map.block15.select_block();
                _character_sprite.remove_armor();
                _character_sprite.add_armor(iron_armor);
                if(map.block16.get_is_selected()) map.block16.unselect_block();
            }
            break;
        case 13:
            map.block16.choose_block();
            _inventory_text = "Diam Armor";
            if(A_held) {
                map.block16.select_block();
                _character_sprite.remove_armor();
                _character_sprite.add_armor(diamond_armor);
                if(map.block15.get_is_selected()) map.block15.unselect_block();
            }
            break;
            
        // Third row
        case 14:
            map.block20.choose_block();
            _inventory_text = "Iron Block";
            if(A_held) {
                map.block00.unselect_block();
                map.block01.unselect_block();
                map.block10.unselect_block();
                map.block11.unselect_block();
                map.block20.select_block();
                map.block21.unselect_block();
                map.block30.unselect_block();
                map.block31.unselect_block();
                _build_block_type = IRON_BLOCK;
            }
            break;
        case 15:
            map.block21.choose_block();
            _inventory_text = "Diam Block";
            if(A_held) {
                map.block00.unselect_block();
                map.block01.unselect_block();
                map.block10.unselect_block();
                map.block11.unselect_block();
                map.block20.unselect_block();
                map.block21.select_block();
                map.block30.unselect_block();
                map.block31.unselect_block();
                _build_block_type = DIAMOND_BLOCK;
            }
            break;
        case 16:
            map.block22.choose_block();
            _inventory_text = "Inventory";
            break;
        case 17:
            map.block23.choose_block();
            _inventory_text = "Unequip";
            if(A_held) {
                map.block23.select_block();
                _character_sprite.remove_shoes();
                _character_sprite.remove_helmet();
                _character_sprite.remove_armor();
                _character_sprite.remove_tool();
            }
            break;
        case 18:
            map.block24.choose_block();
            _inventory_text = "Bomb";
            if(A_held) {
                map.block24.select_block();
                _build_block_type = BOMB;
            }
            break;
        case 19:
            map.block25.choose_block();
            _inventory_text = "Iron Shoes";
            if(A_held) {
                map.block25.select_block();
                _character_sprite.remove_shoes();
                _character_sprite.add_shoes(iron_shoes);
                if(map.block26.get_is_selected()) map.block26.unselect_block();
            }
            break;
        case 20:
            map.block26.choose_block();
            _inventory_text = "Diam Shoes";
            if(A_held) {
                map.block26.select_block();
                _character_sprite.remove_shoes();
                _character_sprite.add_shoes(diamond_shoes);
                if(map.block25.get_is_selected()) map.block25.unselect_block();
            }
            break;
            
        // Fourth row
        case 21:
            map.block30.choose_block();
            _inventory_text = "Iron";
            if(A_held) {
                map.block00.unselect_block();
                map.block01.unselect_block();
                map.block10.unselect_block();
                map.block11.unselect_block();
                map.block20.unselect_block();
                map.block21.unselect_block();
                map.block30.select_block();
                map.block31.unselect_block();
                _build_block_type = IRON;
            }
            break;
        case 22:
            map.block31.choose_block();
            _inventory_text = "Diamond";
            if(A_held) {
                map.block00.unselect_block();
                map.block01.unselect_block();
                map.block10.unselect_block();
                map.block11.unselect_block();
                map.block20.unselect_block();
                map.block21.unselect_block();
                map.block30.unselect_block();
                map.block31.select_block();
                _build_block_type = DIAMOND;
            }
            break;
        case 23:
            map.block32.choose_block();
            _inventory_text = "Inventory";
            break;
        case 24:
            map.block33.choose_block();
            _inventory_text = "Inventory";
            break;
        case 25:
            map.block34.choose_block();
            _inventory_text = "Inventory";
            break;
        case 26:
            map.block35.choose_block();
            _inventory_text = "Inventory";
            break;
        case 27:
            map.block36.choose_block();
            _inventory_text = "Inventory";
            break;
        default:
            break;
    }
    
    if(_prev_block_number != _block_number){
        switch(_prev_block_number){
            // First row
            case 0:
                map.block00.unselect_block();
                break;
            case 1:
                map.block01.unselect_block();
                break;
            case 2:
                map.block02.unselect_block();
                break;
            case 3:
                map.block03.unselect_block();
                break;
            case 4:
                map.block04.unselect_block();
                break;
            case 5:
                map.block05.unselect_block();
                break;
            case 6:
                map.block06.unselect_block();
                break;
                
            // Second row
            case 7:
                map.block10.unselect_block();
                break;
            case 8:
                map.block11.unselect_block();
                break;
            case 9:
                map.block12.unselect_block();
                break;
            case 10:
                map.block13.unselect_block();
                break;
            case 11:
                map.block14.unselect_block();
                break;
            case 12:
                map.block15.unselect_block();
                break;
            case 13:
                map.block16.unselect_block();
                break;
                
            // Third row
            case 14:
                map.block20.unselect_block();
                break;
            case 15:
                map.block21.unselect_block();
                break;
            case 16:
                map.block22.unselect_block();
                break;
            case 17:
                map.block23.unselect_block();
                break;
            case 18:
                map.block24.unselect_block();
                break;
            case 19:
                map.block25.unselect_block();
                break;
            case 20:
                map.block26.unselect_block();
                break;
                
            // Fourth row
            case 21:
                map.block30.unselect_block();
                break;
            case 22:
                map.block31.unselect_block();
                break;
            case 23:
                map.block32.unselect_block();
                break;
            case 24:
                map.block33.unselect_block();
                break;
            case 25:
                map.block34.unselect_block();
                break;
            case 26:
                map.block35.unselect_block();
                break;
            case 27:
                map.block36.unselect_block();
                break;
            default:
                break;
        }
    }
    return map;
}

void SceneEngine::draw(N5110 &lcd){
    _current_map.draw(lcd);
    if(_Y_switch) lcd.printString(_inventory_text, 25, 5);
    /*char y_str[10];
    char x_str[10];
    char z_str[10];
    sprintf(y_str, "%i", _test_int);
    sprintf(x_str, "%i", _test_int2);
    sprintf(z_str, "%i", _mapped_y);
    lcd.printString(y_str, 0, 0);
    lcd.printString(x_str, 0, 1);
    lcd.printString(z_str, 0, 2);*/
}

MapBlocks SceneEngine::get_blocks(){
    return _current_map.get_blocks();   
}

Vector2D SceneEngine::get_character_position(){
    return _character_position;   
}

