#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    Block GetRandomBlock();
    std::vector<Block> GetAllBlocks();
    void Draw();
    void HandeInput();
    void MoveBlockLeft();
    void MoveBlockLRight();
    void MoveBlockDown();
    Grid grid;

private:
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;

    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    bool IsBlockOutside();
};