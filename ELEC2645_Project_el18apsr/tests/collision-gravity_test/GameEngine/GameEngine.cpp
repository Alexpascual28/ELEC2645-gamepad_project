#include "GameEngine.h"

void GameEngine::init(){
    _character.init(CHARACTER_WIDTH, CHARACTER_HEIGHT, INIT_X_POS, INIT_Y_POS, INIT_X_SPEED, INIT_Y_SPEED, JUMP_SPEED, GRAVITY);
    _block1.place(BLOCK_WIDTH, BLOCK_HEIGHT, BLOCK1_X_POS, BLOCK1_Y_POS, WOOD);
    _block2.place(BLOCK_WIDTH, BLOCK_HEIGHT, BLOCK2_X_POS, BLOCK2_Y_POS, DIRT);
} 

void GameEngine::read_input(Gamepad &pad){
    // Joystick
    Vector2D input = pad.get_coord();
    _x = input.x;
    
    // Buttons
    _A = pad.A_held();
}

void GameEngine::update(){
    _character.update(_x, _A);
    border_collisions();
    block_collision_admin();
}

void GameEngine::draw(N5110 &lcd){
    _block1.draw(lcd);
    _block2.draw(lcd);
    _character.draw(lcd);
}

void GameEngine::border_collisions(){
    Vector2D position = _character.get_position();
    
    // Map constraints
    if(position.x >= WIDTH-CHARACTER_WIDTH) position.x = WIDTH-CHARACTER_WIDTH; // Horizontal (WIDTH comes from N5110.h)
    if(position.x <= 0) position.x = 0;
    if(position.y >= HEIGHT-CHARACTER_HEIGHT) position.y = HEIGHT-CHARACTER_HEIGHT; // Vertical (HEIGHT comes from N5110.h)
    if(position.y <= 0) position.y = 0;
    
    _character.set_position(position);
}

void GameEngine::block_collision_admin(){
    
    Vector2D character_position = _character.get_position();
    Vector2D old_character_position = _character.get_old_position();
    
    Vector2D block1_position = _block1.get_position();
    Vector2D block2_position = _block2.get_position();

    // Block 1
    if (_block1.get_collision()) {
        character_position = apply_block_collisions(character_position, old_character_position, block1_position);
    }
    
    // Block 2
    if (_block2.get_collision()) {
        character_position = apply_block_collisions(character_position, old_character_position, block2_position);
    }
    
    _character.set_position(character_position);
}

Vector2D GameEngine::apply_block_collisions(Vector2D character_position, Vector2D old_character_position, Vector2D block_position){
    if ((character_position.y >= block_position.y - CHARACTER_HEIGHT) && // if character is colliding with block
        (character_position.y <= block_position.y + BLOCK_HEIGHT) &&
        (character_position.x >= block_position.x - CHARACTER_WIDTH) &&
        (character_position.x <= block_position.x + BLOCK_WIDTH)) {
        
        if ((old_character_position.x <= block_position.x - CHARACTER_WIDTH) &&
            (character_position.x >= block_position.x - CHARACTER_WIDTH)) character_position.x = block_position.x - CHARACTER_WIDTH; // from Left
                
        if ((old_character_position.x >= block_position.x + BLOCK_WIDTH) &&
            (character_position.x <= block_position.x + BLOCK_WIDTH)) character_position.x = block_position.x + BLOCK_WIDTH; // from Right
                
        if ((old_character_position.y <= block_position.y - CHARACTER_HEIGHT) &&
            (character_position.y >= block_position.y - CHARACTER_HEIGHT)) character_position.y = block_position.y - CHARACTER_HEIGHT; // from Top
                
        if ((old_character_position.y >= block_position.y + BLOCK_HEIGHT) &&
            (character_position.y <= block_position.y + BLOCK_HEIGHT)) character_position.y = block_position.y + BLOCK_HEIGHT; // from Bottom
    }
    return character_position;
}

