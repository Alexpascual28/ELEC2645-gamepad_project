#include "GameEngine.h"

void GameEngine::init(){
    _character.init(CHARACTER_WIDTH, CHARACTER_HEIGHT, INIT_X_POS, INIT_Y_POS, INIT_X_SPEED, INIT_Y_SPEED, JUMP_SPEED, GRAVITY);
    //_map.init(BLOCK_WIDTH, BLOCK_HEIGHT, 2, UNDERWORLD);
    _scene.init(BLOCK_WIDTH, BLOCK_HEIGHT);
    _collisions.init(_character, BLOCK_WIDTH, BLOCK_HEIGHT);
    _sprites.init();
    
    // To make A button act as a switch during welcome
    _welcome_switch = true;
} 

void GameEngine::read_input(Gamepad &pad){
    // Joystick
    Vector2D input = pad.get_coord();
    _x = input.x;
    _y = input.y;
    
    // Previous
    _A_prev = _A; 
    _B_prev = _B;
    _X_prev = _X;
    _Y_prev = _Y;
    
    // Buttons
    _A = pad.A_held();
    _B = pad.B_held();
    _X = pad.X_held();
    _Y = pad.Y_held();
    
    // Buttons as switches
    if(_A_prev == false && _A == true) {
        if(_A_switch == false) _A_switch = true;
        else _A_switch = false;
    }
    if(_B_prev == false && _B == true) {
        if(_B_switch == false) _B_switch = true;
        else _B_switch = false;
    }
    if(_X_prev == false && _X == true) {
        if(_X_switch == false) _X_switch = true;
        else _X_switch = false;
    }
    if(_Y_prev == false && _Y == true) {
        if(_Y_switch == false) _Y_switch = true;
        else _Y_switch = false;
    }
}

void GameEngine::update(){
    _character.update(_x, _A);
    
    if(_B_switch || _X_switch) {
        _character.freeze_character();
    } else _character.unfreeze_character();
    
    if(_Y_switch) {
        _character.freeze_character();
        _character.remove_character();
    } else {
        _character.reappear_character();
        _character.unfreeze_character();
    }
    
    _scene.update(_character, _collisions.get_border_collisions(), _Y_switch, _X_switch, _A, _B_switch, _y, _x);
    _character.set_sprite(_sprites.get_character());
    
    update_collisions();
}

void GameEngine::draw(N5110 &lcd){
    _scene.draw(lcd);
    //_map.draw(lcd);
    _character.draw(lcd);
    //char y_str[10];
    //sprintf(y_str, "%f", _y);
    //lcd.printString(y_str, 0, 3);
}

void GameEngine::update_collisions(){
    _character.set_position(_scene.get_character_position());
    _character.set_position(_collisions.map_collisions(_character, _scene.get_blocks())); // Update position based on block collisions
    _character.set_position(_collisions.border_collisions(_character)); // Update position based on border collisions
}

void GameEngine::welcome(Gamepad &pad, N5110 &lcd){
    lcd.printString("  MINECRAFT  ",0,0);
    lcd.printString(" Press A for ", 0, 2);
    lcd.printString("  Tutorial ", 0, 3);
    lcd.printString(" Press Start ",0,5);
    lcd.refresh();
    
    while (pad.start_held() == false) {
        BlockEngine block;
        block.init(12, 12, 36, 12, DIRT);
        if(pad.A_held()){
            pad.leds_on();
            lcd.clear();
            lcd.printString("  This is a  ", 0,1);
            lcd.printString("  building ", 0, 2);
            lcd.printString(" and terrain ", 0, 3);
            lcd.printString(" editor game ", 0, 4);
            lcd.refresh();
            wait(2);
            pad.leds_off();
            lcd.clear();
            lcd.printString("  You can  ", 0,1);
            lcd.printString("place blocks,", 0, 2);
            lcd.printString(" remove them, ", 0, 3);
            lcd.printString(" and edit ", 0, 4);
            lcd.printString("your character", 0, 5);
            lcd.refresh();
            wait(2);
            pad.leds_on();
            lcd.clear();
            lcd.printString(" The following", 0,1);
            lcd.printString("  blocks are", 0, 2);
            lcd.printString("  available:", 0, 3);
            lcd.refresh();
            wait(2);
            pad.leds_off();
            lcd.clear();
            block.draw(lcd);
            lcd.printString("    Dirt   ", 0,5);
            lcd.refresh();
            wait(0.5);
            pad.leds_on();
            lcd.clear();
            block.place_block(STONE);
            block.draw(lcd);
            lcd.printString("    Stone   ", 0,5);
            lcd.refresh();
            wait(0.5);
            pad.leds_off();
            lcd.clear();
            block.place_block(WOOD);
            block.draw(lcd);
            lcd.printString("    Wood   ", 0,5);
            lcd.refresh();
            wait(0.5);
            pad.leds_on();
            lcd.clear();
            block.place_block(LEAF);
            block.draw(lcd);
            lcd.printString("    Leaf   ", 0,5);
            lcd.refresh();
            wait(0.5);
            pad.leds_off();
            lcd.clear();
            block.place_block(DIAMOND_BLOCK);
            block.draw(lcd);
            lcd.printString("    Diamond   ", 0,5);
            lcd.refresh();
            wait(0.5);
            pad.leds_on();
            lcd.clear();
            block.place_block(IRON_BLOCK);
            block.draw(lcd);
            lcd.printString("    Iron   ", 0,5);
            lcd.refresh();
            wait(0.5);
            pad.leds_off();
            lcd.clear();
            block.place_block(BOMB);
            block.draw(lcd);
            lcd.printString("    Bomb   ", 0,5);
            lcd.refresh();
            wait(0.5);
            block.remove_block();
            lcd.clear();
            lcd.printString("  They are  ", 0,1);
            lcd.printString(" stored in ", 0, 2);
            lcd.printString(" your inventory ", 0, 3);
            lcd.refresh();
            wait(2);
            lcd.clear();
            lcd.printString(" To open it  ", 0,1);
            lcd.printString("press Y and", 0, 2);
            lcd.printString("select your", 0, 3);
            lcd.printString("item with A", 0, 4);
            lcd.refresh();
            wait(2.5);
            lcd.clear();
            lcd.printString("You can also", 0,1);
            lcd.printString("equip your", 0, 2);
            lcd.printString("character in", 0, 3);
            lcd.printString("the inventory", 0, 4);
            lcd.refresh();
            wait(2.5);
            lcd.clear();
            lcd.printString("  To place  ", 0,1);
            lcd.printString("blocks,press X", 0, 2);
            lcd.printString(" and select ", 0, 3);
            lcd.printString("the position", 0, 4);
            lcd.printString("  with A", 0, 5);
            lcd.refresh();
            wait(2.5);
            lcd.clear();
            lcd.printString("  To remove  ", 0,1);
            lcd.printString("blocks,press B", 0, 2);
            lcd.printString(" and select ", 0, 3);
            lcd.printString("the position", 0, 4);
            lcd.printString("  with A", 0, 5);
            lcd.refresh();
            wait(2.5);
            lcd.clear();
            lcd.printString("  Move with  ", 0,1);
            lcd.printString("joystick", 0, 2);
            lcd.printString(" and jump ", 0, 3);
            lcd.printString("  with A", 0, 4);
            lcd.refresh();
            wait(2.5);
            lcd.clear();
            lcd.printString("  Make sure  ", 0,1);
            lcd.printString("to explore", 0, 2);
            lcd.printString(" the caves!! ", 0, 3);
            lcd.refresh();
            wait(2);
            pad.leds_on();
            lcd.clear();
            lcd.printString(" Press Start", 0, 2);
            lcd.printString("  To begin ", 0, 3);
            lcd.refresh();
        }
    }
}
