/** MapEngine
* @brief Defines the map or "scene" object
* @author Alejandro Pascual San Román
* @date May, 2020
*/

#ifndef MAPENGINE_H
#define MAPENGINE_H

#include "mbed.h"
#include "N5110.h"
#include "Gamepad.h"

#include "BlockEngine.h"
#include "MapData.h"

enum MapTag {
    OVERWORLD,
    UNDERWORLD,
    INVENTORY,
    TEST,
    BLANK,
};

struct InitPositions {
    Vector2D left_position;
    Vector2D right_position;
    Vector2D mid_position;
};

struct MapBlocks {
    BlockEngine block00;
    BlockEngine block01;
    BlockEngine block02;
    BlockEngine block03;
    BlockEngine block04;
    BlockEngine block05;
    BlockEngine block06;
    
    BlockEngine block10;
    BlockEngine block11;
    BlockEngine block12;
    BlockEngine block13;
    BlockEngine block14;
    BlockEngine block15;
    BlockEngine block16;
    
    BlockEngine block20;
    BlockEngine block21;
    BlockEngine block22;
    BlockEngine block23;
    BlockEngine block24;
    BlockEngine block25;
    BlockEngine block26;

    BlockEngine block30;
    BlockEngine block31;
    BlockEngine block32;
    BlockEngine block33;
    BlockEngine block34;
    BlockEngine block35;
    BlockEngine block36;
};

class MapEngine {
    
    public:
        /** Constructors */
        void init(int block_width, int block_height, int ID, MapTag const tag);
        
        /** Mutators */
        /** Draws map
        * @param lcd screen object
        */
        void draw(N5110 &lcd);
        /** Sets blocks that conform map
        * @param struct with 28 block objects (MapBlocks)
        */
        void set_blocks(MapBlocks blocks);
        /** Sets initial position of the character in between transitions between maps
        * @param struct containing three nested Vector2D structs, for initial left position, initial right position and initial middle position.
        * @returns welcome menu
        */
        void set_positions(InitPositions init);
        
        /** Accesors */
        /** Returns block distribution in map
        * @returns block struct containing all block objects in map
        */
        MapBlocks get_blocks();
        /** Returns map tag (OVERWORLD, UNDERWORLD, INVENTORY, ETC)
        * @returns map tag struct (MapTag)
        */
        MapTag get_tag();
        /** Returns map ID (from 0 to 6)
        * @returns ID (int)
        */
        int get_ID();
        /** Returns initial positions in map
        * @returns Initial positions struct (InitPositions)
        */
        InitPositions get_positions();
        
    private:
        void init_blocks(BlockType *block_type);
        
        int _block_width;
        int _block_height;

        BlockType *_block_type;
        MapBlocks _blocks;
        
        InitPositions _init;
        
        MapTag _tag;
        int _ID;
};
    
#endif