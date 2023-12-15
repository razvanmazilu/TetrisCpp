#pragma once
#include <vector>
#include "raylib.h"
class Grid
{
public:
    int grid[20][10];

    Grid();
    void Initialize();
    void Print();
    void Draw();

private:
   int numRows;
   int numCols;
   int cellSize;

   std::vector<Color> colors;


};