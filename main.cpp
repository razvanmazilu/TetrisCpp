#include <iostream>
#include<raylib.h>
#include"common.h"
#include"background.h"
#include"blocks.h"
#include"grid.h"


int main () 
{

    std::cout << "Starting the game ..." << std::endl;
    InitWindow(constants::width, constants::height, "Retro Tetris");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 1;
    grid.grid[17][8] = 1;
    grid.grid[17][10] = 1;
    grid.Print();

    while(WindowShouldClose() == false)
    {

        BeginDrawing();
        ClearBackground(constants::green);
        grid.Draw();

        EndDrawing();
    }
    CloseWindow();
    return 0;
}