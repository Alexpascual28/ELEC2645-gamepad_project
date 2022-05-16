#include "Character.h"

void Character::init(int char_width, int char_height, int x_pos, int y_pos, int x_speed, int y_speed, int jump_speed, int gravity){
    // Character dimensions
    _char_width = char_width;
    _char_height = char_height;
    
    _x_pos = x_pos; // Initial horizontal position
    _y_pos = y_pos; // Initial vertical position (HEIGHT comes from N5110.h)
    
    // Initial speeds
    _x_speed = x_speed;
    _y_speed = y_speed;
    
    // Gravity motion variables
    _jump_speed = jump_speed; // Jump speed
    _gravity = gravity;
    
    // Sprite
    _character_sprite = naked_stickman;
    
    // To save values when changing them
    _save_changes = true;
    
    _freeze = false;
}

void Character::update(float x_input, bool A_held){
    //Tests
    /*_x_pos = (x_input - 1)*_x_speed;
    //_y_pos = (_y + (1-0.0127));*/
    
    _old_x_pos = _x_pos;
    _old_y_pos = _y_pos;
    
    if(_freeze == false) {
        //Jump
        _y_pos = _y_pos + _y_speed;
        _y_speed = _y_speed + _gravity;
        if (_y_speed > 10 && A_held) _y_speed = _jump_speed; // Only jump if touching surface
        if (_y_speed > 15) _y_speed = 15; // Regulate vertical speed
        
        //Move
        _x_pos = _x_pos + (x_input - 1)*_x_speed;
    }
}

void Character::draw(N5110 &lcd){
    /*sprintf(_x_str, "%i", _x_pos);
    sprintf(_y_str, "%i", _y_pos);
    lcd.printString(_x_str, 0, 3);
    lcd.printString(_y_str, 0, 2);*/
    //lcd.drawRect(_x_pos, _y_pos, _char_width, _char_height, FILL_BLACK);
    Bitmap character(_character_sprite, _char_height, _char_width);
    character.render(lcd, _x_pos, _y_pos);
}

void Character::set_position(Vector2D pos){
    _x_pos = pos.x;
    _y_pos = pos.y;
}

void Character::set_sprite(int *sprite){
    _character_sprite = sprite;
}

void Character::remove_character(){
    if(_save_changes){
    // Save previous values
    _prev_character_sprite = _character_sprite;
    _prev_char_height = _char_height;
    _prev_char_width = _char_width;
    
    // Dissapear character
    _character_sprite = blank_sprite;
    _char_height = 0;
    _char_width = 0;
    _save_changes = false;
    }
}

void Character::reappear_character(){
    if(_save_changes == false){
        _character_sprite = _prev_character_sprite;
        _char_height = _prev_char_height;
        _char_width = _prev_char_width;
        _save_changes = true;
    }
}

void Character::freeze_character(){
    _freeze = true;
    _x_pos = _old_x_pos;
    _y_pos = _old_y_pos;
}

void Character::unfreeze_character(){
    _freeze = false;
}

Vector2D Character::get_position(){
    Vector2D pos = {_x_pos, _y_pos};
    return pos;
}

Vector2D Character::get_old_position(){
    Vector2D old_pos = {_old_x_pos, _old_y_pos};
    return old_pos;
}

Vector2D Character::get_dimensions(){
    Vector2D dim = {_char_width, _char_height};    
    return dim;
}

Vector2D Character::get_speed(){
    Vector2D speed = {_x_speed, _y_speed};   
    return speed;
}

