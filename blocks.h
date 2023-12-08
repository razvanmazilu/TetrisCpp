#pragma once
#include<ranlib.h>
class Block
{
public:
    int type; 
    int block[4][4];
    Block();
    void Draw();
    void Rotate(char direction);
    void Update();
    void CheckColisionWithWals();
};