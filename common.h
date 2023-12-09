#pragma once
#include <cstdlib> 
#include<raylib.h>
#include <raymath.h>

namespace constants {
    extern int height;
    extern int width;
    extern int offset;

    extern Color green;
    extern Color darkGreen;

    extern int blockSprites[4][4][4];
    
    extern bool isBlockDown;

    extern double lastUpdateTime;
}

int GenerateRandom(int x);
double eventTriggered(double interval);