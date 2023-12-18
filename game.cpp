#include "game.h"
#include <random>
#include <iostream>

Game::Game()
{
    gameOver = false;
    grid = Grid();
    blocks = GetAllBlocks();
    currentBlock = GetRandomBlock();
    nextBlock = GetRandomBlock();
}

Block Game::GetRandomBlock()
{
    if (blocks.empty())
    {
        blocks = GetAllBlocks();
    }
    int randomIndex = rand() % blocks.size();
    Block block = blocks[randomIndex];
    blocks.erase(blocks.begin() + randomIndex);
    std::cout<<__func__<< ":: block Id:"<< block.id <<"\n";
    return block;
}

std::vector<Block> Game::GetAllBlocks()
{
    return {IBlock(), JBlock(), LBlock(), OBlock(), SBlock(), TBlock(), ZBlock()};
}

void Game::Draw()
{
    grid.Draw();
    currentBlock.Draw();
}

void Game::HandeInput()
{
    int keyPressed = GetKeyPressed();

    if(keyPressed != 0 && gameOver)
    {
        gameOver = false;
        Reset();
    }
    switch(keyPressed)
    {
    case KEY_LEFT:
        MoveBlockLeft();
        break;
    case KEY_RIGHT:
        MoveBlockLRight();
        break;
    case KEY_DOWN:
        MoveBlockDown();
        break;
    case KEY_UP:
        RotateBlock();
        break;
    }
}

void Game::MoveBlockLeft()
{
    if(!gameOver)
    {
        currentBlock.Move(0,-1);
        if(IsBlockOutside() || BlockFits() == false)
        {
            currentBlock.Move(0,1);
        }
    }
}

void Game::MoveBlockLRight()
{
    if(!gameOver)
    {
        currentBlock.Move(0,1);
        if(IsBlockOutside() || BlockFits() == false)
        {
            currentBlock.Move(0,-1);
        }
    }
}

void Game::MoveBlockDown()
{
    if(!gameOver)
    {
        currentBlock.Move(1,0);
        if(IsBlockOutside() || BlockFits() == false)
        {
            currentBlock.Move(-1,0);
            LockBlock();
        }
    }
}

void Game::RotateBlock()
{
    if(!gameOver)
    {
        currentBlock.Rotate();
        if(IsBlockOutside())
            currentBlock.UndoRotation();
    }

}

void Game::LockBlock()
{
    std::vector<Position> tiles = currentBlock.GetCellPositions();
    for(Position item: tiles)
    {
        grid.grid[item.row][item.column] = currentBlock.id;
    }
    currentBlock = nextBlock;
    if(BlockFits() == false)
    {
        gameOver = true;
    }
    nextBlock = GetRandomBlock();
    grid.ClearFullRows();
}

void Game::Reset()
{
    grid.Initialize();
    blocks = GetAllBlocks();
    currentBlock = GetRandomBlock();
    nextBlock = GetRandomBlock();
}

bool Game::BlockFits()
{
    std::vector<Position> tiles = currentBlock.GetCellPositions();
    for(Position item: tiles)
    {
        if(grid.IsCellEmpty(item.row, item.column) == false)
            return false;
    }
    return true;
}

bool Game::IsBlockOutside()
{
    std::vector<Position> tiles = currentBlock.GetCellPositions();

    for(Position item: tiles)
    {
        if(grid.IsCellOutside(item.row, item.column))
        {
            return true;
        }
    }
    return false;
}
