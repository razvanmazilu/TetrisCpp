#include <iostream>
#include<raylib.h>
#include"common.h"
#include"background.h"

int main () {

    std::cout << "Starting the game ..." << std::endl;
    InitWindow(constants::width, constants::height, "Retro Tetris");
    SetTargetFPS(60);
    Background bk;


    while(WindowShouldClose() == false){

        BeginDrawing();
     

        ClearBackground(constants::green);
        bk.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}