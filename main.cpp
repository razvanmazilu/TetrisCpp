#include <iostream>
#include<raylib.h>
#include"common.h"
#include"background.h"
#include"blocks.h"

int main () {

    std::cout << "Starting the game ..." << std::endl;
    InitWindow(constants::width, constants::height, "Retro Tetris");
    SetTargetFPS(60);
    Background bk;
    


    while(WindowShouldClose() == false){

        BeginDrawing();
        Block block;
        ClearBackground(constants::green);
        bk.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}