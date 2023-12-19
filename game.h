#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game
{
public:
    Game();
    ~Game();
    void Draw();
    void HandeInput();
    void MoveBlockDown();
    
    bool gameOver;
    int score;
    Music music;

private:
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
    Grid grid;
    Sound clearSound;
    Sound rotateSound;

    void MoveBlockLeft();
    void MoveBlockLRight();
    std::vector<Block> GetAllBlocks();
    Block GetRandomBlock();
    void RotateBlock();
    void LockBlock();
    void Reset();
    bool BlockFits();
    bool IsBlockOutside();
    void UpdateScore(int linesClear, int moveDownPoints);
};