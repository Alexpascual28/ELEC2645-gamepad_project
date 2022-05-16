/** BlockEngine
* @brief Defines the block object
* @author Alejandro Pascual San Román
* @date May, 2020
*/

#ifndef BLOCKENGINE_H
#define BLOCKENGINE_H

#include "mbed.h"
#include "N5110.h"
#include "Gamepad.h"
#include "Bitmap.h"
#include "SpriteEngine.h"

// Enum of all block types
enum BlockType {
    DIRT, WOOD, LEAF, STONE, IRON_BLOCK, DIAMOND_BLOCK, AIR, // Blocks
    DIAMOND, IRON, DIAMOND_SWORD, IRON_SWORD, STONE_PICKAXE, IRON_PICKAXE, BOMB, // Items
    DIAMOND_HELMET, IRON_HELMET, DIAMOND_SHOES, IRON_SHOES, DIAMOND_ARMOR, IRON_ARMOR, // Equipment
    FRAME, CRAFT, REMOVE_CRAFTING, REMOVE_ITEM, // Inventory Parts
};

class BlockEngine {
    public:
        /** Constructor */
        void init(int block_width, int block_height, int x_pos, int y_pos, BlockType type);
        
        /** Mutators */
        /** Draws block on screen
        * @param lcd screen object
        */
        void draw(N5110 &lcd);
        void remove_block(); /** Removes block, changes sprite to "air" */
        /** Changes member variables based on inputted block type
        * @param enum for the type of block
        */
        void place_block(BlockType type);
        void choose_block(); /** Changes sprite to "chosen_block" sprite */
        void select_block(); /** Changes sprite to "selected_block" sprite */
        void unselect_block(); /** Changes sprite back to regular */
        
        /** Accesors */
        /** Get the current type of block
        * @return type of block (enum)
        */
        BlockType get_type();
        /** Get the block position
        * @return struct with x and y position
        */
        Vector2D get_position();
        /** Get the block dimensions
        * @return struct with x and y dimensions
        */
        Vector2D get_dimensions();
        /** Get info regarding if the block is a collider or not
        * @return bool regarding the block collision with the character
        */
        bool get_collider();
        /** Get info regarding if the block is selected
        * @return bool is selected
        */
        bool get_is_selected();
        /** Get info regarding if the block is being hovered over
        * @return bool is being hovered, "chosen"
        */
        bool get_is_chosen();
        
    private:
    
        int _block_width;
        int _block_height;
        int _x_pos;
        int _y_pos;
        BlockType _type;
        
        bool _collider;
        
        int *_select_sprite;
        int *_choose_sprite;
        int *_sprite;
        
        bool _is_selected;
        bool _is_chosen;
};

#endif