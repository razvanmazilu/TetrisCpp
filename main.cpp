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
    Vector2 position = {150.0, 20.0};
    Block block;


    while(WindowShouldClose() == false){

        BeginDrawing();
        
        ClearBackground(constants::green);
        bk.Draw();
        block.Draw(position, constants::darkGreen);
        if(!constants::isBlockDown){
             if(eventTriggered(0.2))
            {
                block.Delete(position, constants::green);
                position.y += 10;
            }
            if (position.y == constants::lowerLimit)
            {
                constants::isBlockDown = true;
            }
        }
   

        EndDrawing();
    }
    CloseWindow();
    return 0;
}