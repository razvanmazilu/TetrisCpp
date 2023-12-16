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
    void Move(int rows, int columns);
    void Rotate();
    void UndoRotation();
    std::vector<Position> GetCellPositions();

private:
    int cellSize;
    int rotationState;
    int rowOffset;
    int columnOffset;
    std::vector<Color> colors;
};