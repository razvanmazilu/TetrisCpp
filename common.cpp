#include"common.h"
#include<iostream>
#include<time.h>

int constants::height = 640;
int constants::width = 320;
int constants::offset = 10;

Color constants::green = {173, 204, 96, 255};
Color constants::darkGreen = {43, 51, 24, 255};

int constants::blockSprites[4][4][4] =  {
                                            {
                                                {0,1,0,0},
                                                {0,1,0,0},
                                                {0,1,0,0},
                                                {0,1,0,0}
                                            },
                                            {
                                                {0,1,0,0},
                                                {0,1,1,0},
                                                {0,0,1,0},
                                                {0,0,0,0}
                                            },
                                            {   {0,0,1,0},
                                                {0,1,1,0},
                                                {0,1,0,0},
                                                {0,0,0,0}
                                            },
                                            {
                                                {0,0,0,0},
                                                {0,1,1,0},
                                                {0,1,1,0},
                                                {0,0,0,0}
                                            },
                                         };
int GenerateRandom(int x) { 
    std::cout<<__func__<<std::endl;
    std::cout<<"x :"<<x<<std::endl;
    srand(time(0));
    return rand()%x; 
    }