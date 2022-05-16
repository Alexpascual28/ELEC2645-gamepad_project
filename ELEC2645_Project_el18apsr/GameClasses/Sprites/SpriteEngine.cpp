#include "SpriteEngine.h"

void SpriteEngine::init(){
    _character_sprite = naked_stickman;
}

void SpriteEngine::add_tool(int *tool){
    // Top part
    _character_sprite[82] = _character_sprite[82] | tool[18];
    _character_sprite[93] = _character_sprite[93] | tool[29];
    _character_sprite[94] = _character_sprite[94] | tool[30];
    _character_sprite[95] = _character_sprite[95] | tool[31];
    
    // Middle part
    _character_sprite[106] = _character_sprite[106] | tool[42];
    _character_sprite[107] = _character_sprite[107] | tool[43];
    _character_sprite[118] = _character_sprite[118] | tool[54];
    _character_sprite[119] = _character_sprite[119] | tool[55];
    _character_sprite[130] = _character_sprite[130] | tool[66];
    _character_sprite[131] = _character_sprite[131] | tool[67];
    _character_sprite[142] = _character_sprite[142] | tool[78];
    _character_sprite[143] = _character_sprite[143] | tool[79];
    _character_sprite[154] = _character_sprite[154] | tool[90];
    _character_sprite[155] = _character_sprite[155] | tool[91];
    _character_sprite[166] = _character_sprite[166] | tool[102];
    _character_sprite[167] = _character_sprite[167] | tool[103];
    
    // Handle
    _character_sprite[177] = _character_sprite[177] | tool[113];
    _character_sprite[188] = _character_sprite[188] | tool[124];
}

void SpriteEngine::remove_tool(){
        // Top part
    _character_sprite[82] = 0;
    _character_sprite[93] = 0;
    _character_sprite[94] = 0;
    _character_sprite[95] = 0;
    
    // Middle part
    _character_sprite[106] = 0;
    _character_sprite[107] = 0;
    _character_sprite[118] = 0;
    _character_sprite[119] = 0;
    _character_sprite[130] = 0;
    _character_sprite[131] = 0;
    _character_sprite[142] = 0;
    _character_sprite[143] = 0;
    _character_sprite[154] = 0;
    _character_sprite[155] = 0;
    _character_sprite[166] = 0;
    _character_sprite[167] = 0;
    
    // Handle
    _character_sprite[177] = 0;
    _character_sprite[188] = 0;
}

void SpriteEngine::add_helmet(int *helmet){
    _character_sprite[4] = _character_sprite[4] | helmet[41];
    _character_sprite[5] = _character_sprite[5] | helmet[42];
    _character_sprite[15] = _character_sprite[15] | helmet[52];
    _character_sprite[16] = _character_sprite[16] | helmet[53];
    _character_sprite[17] = _character_sprite[17] | helmet[54];
    _character_sprite[18] = _character_sprite[18] | helmet[55]; 
}

void SpriteEngine::remove_helmet(){
    _character_sprite[4] = 0;
    _character_sprite[5] = 0;
    _character_sprite[15] = 0;
    _character_sprite[16] = 0;
    _character_sprite[17] = 0;
    _character_sprite[18] = 0; 
}

void SpriteEngine::add_armor(int *armor){
    // Shoulder piece
    _character_sprite[97] = _character_sprite[97] | armor[38];
    _character_sprite[104] = _character_sprite[104] | armor[45];
    
    // Neck piece
    _character_sprite[109] = _character_sprite[109] | armor[50];
    _character_sprite[110] = _character_sprite[110] | armor[51];
    _character_sprite[111] = _character_sprite[111] | armor[52];
    _character_sprite[114] = _character_sprite[114] | armor[55];
    _character_sprite[115] = _character_sprite[115] | armor[56];
    _character_sprite[116] = _character_sprite[116] | armor[57];
    
    // Arm piece
    _character_sprite[121] = _character_sprite[121] | armor[62];
    _character_sprite[128] = _character_sprite[128] | armor[69];
}

void SpriteEngine::remove_armor(){
    // Shoulder piece
    _character_sprite[97] = 0;
    _character_sprite[104] = 0;
    
    // Neck piece
    _character_sprite[109] = 0;
    _character_sprite[110] = 0;
    _character_sprite[111] = 0;
    _character_sprite[114] = 0;
    _character_sprite[115] = 0;
    _character_sprite[116] = 0;
    
    // Arm piece
    _character_sprite[121] = 0;
    _character_sprite[128] = 0;
}

void SpriteEngine::add_shoes(int *shoes){
    // Laces
    _character_sprite[254] = _character_sprite[254] | shoes[63];
    _character_sprite[259] = _character_sprite[259] | shoes[68];
    
    // Tops
    _character_sprite[265] = _character_sprite[265] | shoes[74];
    _character_sprite[266] = _character_sprite[266] | shoes[75];
    _character_sprite[267] = _character_sprite[267] | shoes[76];
    
    _character_sprite[270] = _character_sprite[270] | shoes[79];
    _character_sprite[271] = _character_sprite[271] | shoes[80];
    _character_sprite[272] = _character_sprite[272] | shoes[81];
    
    // Soles
    _character_sprite[277] = _character_sprite[277] | shoes[86];
    _character_sprite[278] = _character_sprite[278] | shoes[87];
    _character_sprite[279] = _character_sprite[279] | shoes[88];
    
    _character_sprite[282] = _character_sprite[282] | shoes[91];
    _character_sprite[283] = _character_sprite[283] | shoes[92];
    _character_sprite[284] = _character_sprite[284] | shoes[93];
}

void SpriteEngine::remove_shoes(){
    // Laces
    _character_sprite[254] = 0;
    _character_sprite[259] = 0;
    
    // Tops
    _character_sprite[265] = 0;
    _character_sprite[266] = 0;

    _character_sprite[271] = 0;
    _character_sprite[272] = 0;
    
    // Soles
    _character_sprite[277] = 0;
    _character_sprite[284] = 0;
}

int * SpriteEngine::get_character(){
    return _character_sprite; 
}
