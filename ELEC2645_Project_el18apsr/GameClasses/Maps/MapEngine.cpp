#include "MapEngine.h"

void MapEngine::init(int block_width, int block_height, int ID, MapTag const tag){
    _block_width = block_width;
    _block_height = block_height;
    _tag = tag;
    _ID = ID;
    
    if(tag == INVENTORY) {
        _block_type = (BlockType*)inventory;
        
    } else if(tag == TEST) {
        _block_type = (BlockType*)test;
        
    } else if(tag == BLANK) {
        _block_type = (BlockType*)blank;
        
    } else if(tag == UNDERWORLD) {
        switch(ID) {
            case 0:
                _block_type =(BlockType*)map_underworld_0;
                _init.left_position = (Vector2D){0,0};
                _init.right_position = (Vector2D){6*_block_width, _block_height};
                _init.mid_position = (Vector2D){0, 0};
                break;
            case 1:
                _block_type =(BlockType*)map_underworld_1;
                _init.left_position = (Vector2D){0, 2*_block_height};
                _init.right_position = (Vector2D){6*_block_width, 0};
                _init.mid_position = (Vector2D){6*_block_width, 0};
                break;
            case 2:
                _block_type =(BlockType*)map_underworld_2;
                _init.left_position = (Vector2D){0, 2*_block_height};
                _init.right_position = (Vector2D){6*_block_width, _block_height};
                _init.mid_position = (Vector2D){4*_block_width, 0};
                break;
            case 3:
                _block_type =(BlockType*)map_underworld_3;
                _init.left_position = (Vector2D){2*_block_width, 0};
                _init.right_position = (Vector2D){6*_block_width, 2*_block_height};
                _init.mid_position = (Vector2D){2*_block_width, 0};
                break;
            case 4:
                _block_type =(BlockType*)map_underworld_4;
                _init.left_position = (Vector2D){2*_block_width, _block_height};
                _init.right_position = (Vector2D){6*_block_width, _block_height};
                _init.mid_position = (Vector2D){3*_block_width, _block_height};
                break;
            case 5:
                _block_type =(BlockType*)map_underworld_5;
                _init.left_position = (Vector2D){0, _block_height};
                _init.right_position = (Vector2D){6*_block_width, _block_height};
                _init.mid_position = (Vector2D){2*_block_width, _block_height};
                break;
            case 6:
                _block_type =(BlockType*)map_underworld_6;
                _init.left_position = (Vector2D){0, _block_height};
                _init.right_position = (Vector2D){5*_block_width, 2*_block_height};
                _init.mid_position = (Vector2D){2*_block_width, 0};
                break;
        }
    } else { // Defaults to OVERWORLD
        switch(ID) {
            case 0:
                _block_type =(BlockType*)map_overworld_0;
                _init.left_position = (Vector2D){0,0};
                _init.right_position = (Vector2D){6*_block_width, _block_height};
                _init.mid_position = (Vector2D){3*_block_width, _block_height};
                break;
            case 1:
                _block_type =(BlockType*)map_overworld_1;
                _init.left_position = (Vector2D){0,_block_height};
                _init.right_position = (Vector2D){6*_block_width, _block_height};
                _init.mid_position = (Vector2D){3*_block_width, -1*_block_height};
                break;
            case 2:
                _block_type =(BlockType*)map_overworld_2;
                _init.left_position = (Vector2D){0,_block_height};
                _init.right_position = (Vector2D){6*_block_width, _block_height};
                _init.mid_position = (Vector2D){3*_block_width, _block_height};
                break;
            case 3:
                _block_type =(BlockType*)map_overworld_3;
                _init.left_position = (Vector2D){0,_block_height};
                _init.right_position = (Vector2D){6*_block_width, _block_height};
                _init.mid_position = (Vector2D){3*_block_width, -1*_block_height};
                break;
            case 4:
                _block_type =(BlockType*)map_overworld_4;
                _init.left_position = (Vector2D){0,0};
                _init.right_position = (Vector2D){6*_block_width, 0};
                _init.mid_position = (Vector2D){3*_block_width, 0};
                break;
            case 5:
                _block_type =(BlockType*)map_overworld_5;
                _init.left_position = (Vector2D){0,_block_height};
                _init.right_position = (Vector2D){6*_block_width, _block_height};
                _init.mid_position = (Vector2D){3*_block_width, _block_height};
                break;
            case 6:
                _block_type =(BlockType*)map_overworld_6;
                _init.left_position = (Vector2D){0,_block_height};
                _init.right_position = (Vector2D){6*_block_width, _block_height};
                _init.mid_position = (Vector2D){3*_block_width, _block_height};
                break;
        }
    }
    init_blocks(_block_type);
}

void MapEngine::init_blocks(BlockType *block_type){
    _blocks.block00.init(_block_width, _block_height, 0, 0, *(block_type));
    _blocks.block01.init(_block_width, _block_height, 12, 0, *(block_type+1));
    _blocks.block02.init(_block_width, _block_height, 24, 0, *(block_type+2));
    _blocks.block03.init(_block_width, _block_height, 36, 0, *(block_type+3));
    _blocks.block04.init(_block_width, _block_height, 48, 0, *(block_type+4));
    _blocks.block05.init(_block_width, _block_height, 60, 0, *(block_type+5));
    _blocks.block06.init(_block_width, _block_height, 72, 0, *(block_type+6));
    
    _blocks.block10.init(_block_width, _block_height, 0, 12, *(block_type+7));
    _blocks.block11.init(_block_width, _block_height, 12, 12, *(block_type+8));
    _blocks.block12.init(_block_width, _block_height, 24, 12, *(block_type+9));
    _blocks.block13.init(_block_width, _block_height, 36, 12, *(block_type+10));
    _blocks.block14.init(_block_width, _block_height, 48, 12, *(block_type+11));
    _blocks.block15.init(_block_width, _block_height, 60, 12, *(block_type+12));
    _blocks.block16.init(_block_width, _block_height, 72, 12, *(block_type+13));
    
    _blocks.block20.init(_block_width, _block_height, 0, 24, *(block_type+14));
    _blocks.block21.init(_block_width, _block_height, 12, 24, *(block_type+15));
    _blocks.block22.init(_block_width, _block_height, 24, 24, *(block_type+16));
    _blocks.block23.init(_block_width, _block_height, 36, 24, *(block_type+17));
    _blocks.block24.init(_block_width, _block_height, 48, 24, *(block_type+18));
    _blocks.block25.init(_block_width, _block_height, 60, 24, *(block_type+19));
    _blocks.block26.init(_block_width, _block_height, 72, 24, *(block_type+20));
    
    _blocks.block30.init(_block_width, _block_height, 0, 36, *(block_type+21));
    _blocks.block31.init(_block_width, _block_height, 12, 36, *(block_type+22));
    _blocks.block32.init(_block_width, _block_height, 24, 36, *(block_type+23));
    _blocks.block33.init(_block_width, _block_height, 36, 36, *(block_type+24));
    _blocks.block34.init(_block_width, _block_height, 48, 36, *(block_type+25));
    _blocks.block35.init(_block_width, _block_height, 60, 36, *(block_type+26));
    _blocks.block36.init(_block_width, _block_height, 72, 36, *(block_type+27));
}

void MapEngine::draw(N5110 &lcd){
    _blocks.block00.draw(lcd);
    _blocks.block01.draw(lcd);
    _blocks.block02.draw(lcd);
    _blocks.block03.draw(lcd);
    _blocks.block04.draw(lcd);
    _blocks.block05.draw(lcd);
    _blocks.block06.draw(lcd);
    
    _blocks.block10.draw(lcd);
    _blocks.block11.draw(lcd);
    _blocks.block12.draw(lcd);
    _blocks.block13.draw(lcd);
    _blocks.block14.draw(lcd);
    _blocks.block15.draw(lcd);
    _blocks.block16.draw(lcd);
    
    _blocks.block20.draw(lcd);
    _blocks.block21.draw(lcd);
    _blocks.block22.draw(lcd);
    _blocks.block23.draw(lcd);
    _blocks.block24.draw(lcd);
    _blocks.block25.draw(lcd);
    _blocks.block26.draw(lcd);
    
    _blocks.block30.draw(lcd);
    _blocks.block31.draw(lcd);
    _blocks.block32.draw(lcd);
    _blocks.block33.draw(lcd);
    _blocks.block34.draw(lcd);
    _blocks.block35.draw(lcd);
    _blocks.block36.draw(lcd);
}

void MapEngine::set_blocks(MapBlocks blocks){
    _blocks.block00 = blocks.block00;
    _blocks.block01 = blocks.block01;
    _blocks.block02 = blocks.block02;
    _blocks.block03 = blocks.block03;
    _blocks.block04 = blocks.block04;
    _blocks.block05 = blocks.block05;
    _blocks.block06 = blocks.block06;
    
    _blocks.block10 = blocks.block10;
    _blocks.block11 = blocks.block11;
    _blocks.block12 = blocks.block12;
    _blocks.block13 = blocks.block13;
    _blocks.block14 = blocks.block14;
    _blocks.block15 = blocks.block15;
    _blocks.block16 = blocks.block16;

    _blocks.block20 = blocks.block20;
    _blocks.block21 = blocks.block21;
    _blocks.block22 = blocks.block22;
    _blocks.block23 = blocks.block23;
    _blocks.block24 = blocks.block24;
    _blocks.block25 = blocks.block25;
    _blocks.block26 = blocks.block26;
    
    _blocks.block30 = blocks.block30;
    _blocks.block31 = blocks.block31;
    _blocks.block32 = blocks.block32;
    _blocks.block33 = blocks.block33;
    _blocks.block34 = blocks.block34;
    _blocks.block35 = blocks.block35;
    _blocks.block36 = blocks.block36;
}

MapBlocks MapEngine::get_blocks(){    
    return _blocks;
}

MapTag MapEngine::get_tag(){
    return _tag;   
}

int MapEngine::get_ID(){
    return _ID;   
}

InitPositions MapEngine::get_positions(){
    return _init;   
}

void MapEngine::set_positions(InitPositions init){
    _init = init;
}

