#include <iostream>
#include<raylib.h>
#include"common.h"
#include"background.h"
#include"block.h"
#include"grid.h"
#include"blocks.cpp"


int main () 
{

    std::cout << "Starting the game ..." << std::endl;
    InitWindow(constants::width, constants::height, "Retro Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.Print();

    LBlock block = LBlock();
    while(WindowShouldClose() == false)
    {

        BeginDrawing();
        ClearBackground(constants::green);
        grid.Draw();
        block.Draw();

        EndDrawing();
    }
    CloseWindow();
    return 0;
}