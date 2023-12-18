#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    std::vector<Block> GetAllBlocks();
    void Draw();
    void HandeInput();
    void MoveBlockLeft();
    void MoveBlockLRight();
    void MoveBlockDown();
    Grid grid;
    bool gameOver;

private:
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;

    Block GetRandomBlock();
    void RotateBlock();
    void LockBlock();
    void Reset();
    bool BlockFits();
    bool IsBlockOutside();
};