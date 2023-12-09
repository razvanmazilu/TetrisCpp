#pragma once
#include"common.h"

class Block
{
public:
    int type; 
    int block[4][4];
    Block();
    void Draw(Vector2 startPos, Color color);
    void Delete(Vector2 position, Color color);
    void Rotate(char direction);
    void Update();
    void CheckColisionWithWals();
};