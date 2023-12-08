#include"blocks.h"
#include"common.h"
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
        