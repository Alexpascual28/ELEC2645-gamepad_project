/** ScenesEngine
* @brief Manages transitions between scenes and manages inventory
* @author Alejandro Pascual San Román
* @date May, 2020
*/

#ifndef SCENEENGINE_H
#define SCENEENGINE_H

#include "mbed.h"
#include "N5110.h"
#include "Gamepad.h"

#include "Character.h"
#include "MapEngine.h"
#include "BlockEngine.h"
#include "CollisionEngine.h"

struct AvailableBlocks {
    BlockEngine block_up_left;   
    BlockEngine block_up_middle;
    BlockEngine block_up_right;
    BlockEngine block_down_left;   
    BlockEngine block_down_middle;
    BlockEngine block_down_right;
};

enum Scene {
    SCENE0_OVERWORLD,
    SCENE1_OVERWORLD,
    SCENE2_OVERWORLD,
    SCENE3_OVERWORLD,
    SCENE4_OVERWORLD,
    SCENE5_OVERWORLD,
    SCENE6_OVERWORLD,
    
    SCENE0_UNDERWORLD,
    SCENE1_UNDERWORLD,
    SCENE2_UNDERWORLD,
    SCENE3_UNDERWORLD,
    SCENE4_UNDERWORLD,
    SCENE5_UNDERWORLD,
    SCENE6_UNDERWORLD,
};

class SceneEngine {
    public:
        /** Constructors */
        void init(int block_width, int block_height);
        
        /** Mutators */
        /** Updates all scenes, handles inventory and placing and removing blocks mechanics */
        void update(Character character, BorderCollisions is_colliding, bool Y_switch, bool X_switch, bool A_held, bool B_switch, float y_input, float x_input);
        /** Draws current scene
        * @param lcd screen object
        */
        void draw(N5110 &lcd);
        
        /** Accesors */
        /** Returns blocks from current map
        * @returns map blocks struct (MapBlocks)
        */
        MapBlocks get_blocks();
        /** Outputs produced character position based on transitions between scenes
        * @returns position struct (Vector2D)
        */
        Vector2D get_character_position();
    
    private:
        int get_position_block_number(float x_pos, float y_pos);
        void get_block_number(/*int position_block_number,*/ float y_input, float x_input);
        MapBlocks choose_blocks(bool A_held, bool X_switch, bool Y_switch, bool B_switch, BlockType type);
        MapBlocks inventory_manager(bool A_held);
    
        void update_scenes();
        void save_scenes();
            
        Vector2D _character_position;
        
        int _ID;
        int _prev_ID;
        
        MapTag _tag;
        MapTag _prev_tag;
        bool _save_prev_tag;
        
        int _block_number;
        int _prev_block_number;
        
        BlockType _build_block_type;
        
        MapEngine _current_map;
        
        MapEngine _scene0_overworld;
        MapEngine _scene1_overworld;
        MapEngine _scene2_overworld;
        MapEngine _scene3_overworld;
        MapEngine _scene4_overworld;
        MapEngine _scene5_overworld;
        MapEngine _scene6_overworld;
        
        MapEngine _scene0_underworld;
        MapEngine _scene1_underworld;
        MapEngine _scene2_underworld;
        MapEngine _scene3_underworld;
        MapEngine _scene4_underworld;
        MapEngine _scene5_underworld;
        MapEngine _scene6_underworld;
        
        MapEngine _inventory_scene;
        
        MapEngine _blank;
        MapEngine _test;
        
        SpriteEngine _character_sprite;
        
        int _test_int;
        int _test_int2;
        
        int _mapped_x;
        int _mapped_y;
        
        int _prev_mapped_x;
        int _prev_mapped_y;
        
        bool _Y_switch;
        
        char *_inventory_text;
};

#endif