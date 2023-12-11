#include"common.h"
#include<iostream>
#include<time.h>

int constants::height = 450;
int constants::width = 220;
int constants::offset = 20;
int constants::lowerLimit = height - 2*offset - 15;

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


bool constants::isBlockDown = false;
double constants::lastUpdateTime = 0.0;

int GenerateRandom(int x) { 
    std::cout<<__func__<<std::endl;
    std::cout<<"x :"<<x<<std::endl;
    srand(time(0));
    return rand()%x; 
}

double eventTriggered(double interval) {
    double currentTime = GetTime();
    if(currentTime - constants::lastUpdateTime >= interval) {
        constants::lastUpdateTime = currentTime;
        return true;
    }
    return false;
}