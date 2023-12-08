#pragma once
#include <cstdlib> 
#include<raylib.h>

namespace constants {
    extern int height;
    extern int width;
    extern int offset;

    extern Color green;
    extern Color darkGreen;

    extern int blockSprites[4][4][4];
    
}

int GenerateRandom(int x);