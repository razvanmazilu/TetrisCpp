#include"blocks.h"
#include<iostream>

Block::Block()
{
    std::cout<<__func__<<std::endl;
    type = GenerateRandom(4);  
    //debug
    std::cout<<"type :"<<type<<std::endl;
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
        {
            block[i][j] = constants::blockSprites[type][i][j];
            std::cout<<block[i][j]<<" ";
        }
            
         std::cout<<"\n";
    }       
}

void Block::Draw(Vector2 startPos, Color color) 
{
    
    Rectangle segment = { startPos.x, 
    startPos.y , 
    10, 10};
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
        {
            if(block[i][j] == 1)
            {
                DrawRectangleRounded(segment, 0.5, 6, color);
            }
            segment.x = startPos.x + i*10;
            segment.y = startPos.y + j*10;
        }
    }
}

void Block::Delete(Vector2 startPos, Color color)
{
    Draw(startPos, color);
}