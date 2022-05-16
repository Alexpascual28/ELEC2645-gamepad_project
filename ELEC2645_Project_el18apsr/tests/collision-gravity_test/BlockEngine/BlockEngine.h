#ifndef BLOCKENGINE_H
#define BLOCKENGINE_H

#include "mbed.h"
#include "N5110.h"
#include "Gamepad.h"
#include "Bitmap.h"
#include "Sprites.h"

enum BlockType {
    DIRT,
    WOOD,
    LEAF,
    STONE,
    IRON_BLOCK,
    DIAMOND_BLOCK,
    AIR,
};

class BlockEngine {
    public:
        void place(int block_width, int block_height, int x_pos, int y_pos, BlockType type);
        void draw(N5110 &lcd);
        BlockType get_type();
        Vector2D get_position();
        Vector2D get_dimensions();
        bool get_collision();
    private:
        int _block_width;
        int _block_height;
        int _x_pos;
        int _y_pos;
        BlockType _type;
        bool _collision;
        int *_sprite;
};

#endif