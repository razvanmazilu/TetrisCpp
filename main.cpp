#include <iostream>
#include<raylib.h>
#include"game.h"
#include"common.h"


int main () 
{

    std::cout << "Starting the game ..." << std::endl;
    InitWindow(constants::width, constants::height, "Retro Tetris");
    SetTargetFPS(60);

    Game game = Game();

    while(WindowShouldClose() == false)
    {
        game.HandeInput();
        BeginDrawing();
        ClearBackground(constants::darkBlue);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}