#ifndef MAPDATA_H
#define MAPDATA_H

#include "BlockEngine.h"

// Air

static BlockType blank[4][7] = { 
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
};

//Overworld

static BlockType map_overworld_0[4][7] = { 
    {AIR, AIR, AIR, AIR, LEAF, LEAF, LEAF},
    {AIR, AIR, AIR, AIR, LEAF, WOOD, LEAF},
    {DIRT, DIRT, DIRT, AIR, AIR, WOOD, AIR},
    {STONE, IRON_BLOCK, DIAMOND_BLOCK, STONE, DIRT, DIRT, DIRT},
};

static BlockType map_overworld_1[4][7] = { 
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {AIR, AIR, DIRT, DIRT, DIRT, AIR, AIR},
    {AIR, DIRT, STONE, STONE, IRON_BLOCK, DIRT, AIR},
    {DIRT, STONE, STONE, IRON_BLOCK, STONE, STONE, DIRT},
};

static BlockType map_overworld_2[4][7] = { 
    {AIR, LEAF, LEAF, LEAF, LEAF, LEAF, LEAF},
    {AIR, LEAF, WOOD, LEAF, LEAF, WOOD, LEAF},
    {AIR, AIR, WOOD, AIR, AIR, WOOD, AIR},
    {DIRT, DIRT, DIRT, DIRT, DIRT, DIRT, DIRT},
};

static BlockType map_overworld_3[4][7] = { 
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {AIR, AIR, DIRT, DIRT, DIRT, AIR, AIR},
    {AIR, LEAF, STONE, STONE, STONE, LEAF, AIR},
    {DIRT, DIRT, STONE, DIAMOND_BLOCK, STONE, DIRT, DIRT},
};

static BlockType map_overworld_4[4][7] = { 
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {DIRT, AIR, AIR, DIRT, DIRT, DIRT, DIRT},
    {STONE, DIRT, DIRT, STONE, IRON_BLOCK, STONE, STONE},
};

static BlockType map_overworld_5[4][7] = { 
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {AIR, AIR, LEAF, AIR, AIR, AIR, AIR},
    {AIR, LEAF, LEAF, LEAF, AIR, AIR, AIR},
    {DIRT, DIRT, DIRT, DIRT, DIRT, DIRT, DIRT},
};

static BlockType map_overworld_6[4][7] = { 
    {AIR, LEAF, AIR, AIR, AIR, LEAF, AIR},
    {LEAF, WOOD, LEAF, AIR, LEAF, WOOD, LEAF},
    {AIR, WOOD, AIR, AIR, AIR, WOOD, AIR},
    {DIRT, DIRT, STONE, STONE, DIRT, DIRT, DIRT},
};

//Underworld

static BlockType map_underworld_0[4][7] = { 
    {AIR, STONE, STONE, STONE, STONE, STONE, STONE},
    {AIR, IRON_BLOCK, IRON_BLOCK, STONE, STONE, AIR, AIR},
    {STONE, IRON_BLOCK, IRON_BLOCK, STONE, STONE, DIAMOND_BLOCK, AIR},
    {STONE, STONE, STONE, STONE, STONE, DIAMOND_BLOCK, STONE},
};

static BlockType map_underworld_1[4][7] = { 
    {STONE, STONE, STONE, STONE, STONE, STONE, AIR},
    {STONE, STONE, IRON_BLOCK, STONE, STONE, STONE, AIR},
    {AIR, STONE, STONE, STONE, STONE, STONE, IRON_BLOCK},
    {AIR, STONE, STONE, STONE, STONE, IRON_BLOCK, STONE},
};

static BlockType map_underworld_2[4][7] = { 
    {STONE, STONE, STONE, STONE, AIR, STONE, STONE},
    {STONE, STONE, STONE, STONE, AIR, AIR, AIR},
    {AIR, STONE, STONE, STONE, STONE, STONE, AIR},
    {AIR, AIR, DIAMOND_BLOCK, DIAMOND_BLOCK, STONE, STONE, STONE},
};

static BlockType map_underworld_3[4][7] = { 
    {STONE, AIR, AIR, STONE, STONE, STONE, STONE},
    {STONE, STONE, AIR, IRON_BLOCK, IRON_BLOCK, IRON_BLOCK, STONE},
    {STONE, STONE, STONE, STONE, STONE, IRON_BLOCK, AIR},
    {DIAMOND_BLOCK, STONE, STONE, STONE, STONE, STONE, AIR},
};

static BlockType map_underworld_4[4][7] = { 
    {STONE, STONE, STONE, STONE, STONE, STONE, STONE},
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {STONE, STONE, AIR, AIR, AIR, AIR, AIR},
    {DIAMOND_BLOCK, STONE, STONE, STONE, IRON_BLOCK, IRON_BLOCK, STONE},
};

static BlockType map_underworld_5[4][7] = { 
    {STONE, STONE, STONE, STONE, STONE, IRON_BLOCK, IRON_BLOCK},
    {AIR, AIR, AIR, STONE, STONE, STONE, AIR},
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {STONE, STONE, STONE, STONE, IRON_BLOCK, IRON_BLOCK, STONE},
};

static BlockType map_underworld_6[4][7] = { 
    {STONE, STONE, AIR, STONE, STONE, STONE, STONE},
    {AIR, AIR, AIR, STONE, STONE, STONE, STONE},
    {AIR, STONE, STONE, IRON_BLOCK, STONE, AIR, AIR},
    {STONE, STONE, DIAMOND_BLOCK, DIAMOND_BLOCK, IRON_BLOCK, AIR, STONE},
};

// Inventory

static BlockType inventory[4][7] = { 
    {DIRT, STONE, AIR, IRON_SWORD, DIAMOND_SWORD, IRON_HELMET, DIAMOND_HELMET},
    {WOOD, LEAF, AIR, STONE_PICKAXE, IRON_PICKAXE, IRON_ARMOR, DIAMOND_ARMOR},
    {IRON_BLOCK, DIAMOND_BLOCK, AIR, REMOVE_ITEM, BOMB, IRON_SHOES, DIAMOND_SHOES},
    {IRON, DIAMOND, AIR, AIR, AIR, AIR, AIR},
};

// Test

static BlockType test[4][7] = { 
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
    {STONE, STONE, STONE, AIR, AIR, AIR, AIR},
    {AIR, AIR, STONE, AIR, AIR, AIR, AIR},
    {AIR, AIR, AIR, AIR, AIR, AIR, AIR},
};

#endif