#include <iostream>
#include<raylib.h>
#include"game.h"
#include"common.h"


int main () 
{

    std::cout << "Starting the game ..." << std::endl;
    InitWindow(constants::width, constants::height, "Retro Tetris");
    SetTargetFPS(60);

    Font font = LoadFontEx("Font/monogram.ttf", 64, 0, 0);

    Game game = Game();

    while(WindowShouldClose() == false)
    {
        UpdateMusicStream(game.music);
        game.HandeInput();
        if(general::EventTriggered(0.27))
        {
            game.MoveBlockDown();
        }   
        BeginDrawing();
        ClearBackground(constants::darkBlue);
        DrawTextEx(font, "Score", {365, 15}, 38, 2, WHITE);
        DrawTextEx(font, "Next", {370, 175}, 38, 2, WHITE);
        if(game.gameOver)
            DrawTextEx(font, "GAME OVER", {320, 450}, 38, 2, WHITE);

        DrawRectangleRounded({320, 55, 170, 60}, 0.3, 6, constants::lightBlue);
        char scoreText[10];
        sprintf(scoreText, "%d", game.score);
        Vector2 textSize = MeasureTextEx(font, scoreText, 38, 2);
        DrawTextEx(font, scoreText, {320 + (170 - textSize.x)/2, 65}, 38, 2, WHITE);
        DrawRectangleRounded({320, 215, 170, 180}, 0.3, 6, constants::lightBlue);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}