#include"blocks.h"
#include<iostream>

Block::Block()
{
    std::cout<<__func__<<std::endl;
    type = GenerateRandom(4);  
    //debug
    std::cout<<"type :"<<type<<std::endl;
    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            block[i][j] = constants::blockSprites[type][i][j];
        }
    }
    DebugPrint();     
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
            segment.x = startPos.x + j*10;
            segment.y = startPos.y + i*10;
        }
    }
}

void Block::Rotate()
{
    int tmp = 0;
    for(int i = 0; i < 4; i++)
        for(int j = i ;j < 4 ; j++)
        {
            if(i < j)
            {
                tmp = block[i][j];
                block[i][j] = block[j][i];
                block[j][i] = tmp;
            }     
        }
    for(int i = 0; i < 4; i++)
        for(int j = 0 ;j < 2; j++)
        {
            tmp = block[j][i];
            block[j][i] = block[4-j-1][i];
            block[4-j-1][i] = tmp;
        }

    std::cout<<"Rotated"<<std::endl;
    DebugPrint();
}

void Block::Delete(Vector2 startPos, Color color)
{
    Draw(startPos, color);
}

void Block::DebugPrint()
{
    for(int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //block[i][j] = constants::blockSprites[type][i][j];
            std::cout<<block[i][j]<<" ";
        }    
         std::cout<<"\n";
    }  
}