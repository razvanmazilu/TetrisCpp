#pragma once
#include"common.h"

class Block
{
public:
    int type; 
    int block[4][4];
    Block();
    void Draw(Vector2 startPos);
    void Rotate(char direction);
    void Update();
    void CheckColisionWithWals();
};