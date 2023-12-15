#pragma once
#include"common.h"
#include<vector>
#include<map>
#include"position.h"

class Block
{
public:
    int id; 
    std::map<int, std::vector<Position>> cells;

    Block();
    void Draw();

private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;
};