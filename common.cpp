#include"common.h"
#include<iostream>
#include<time.h>

int constants::height = 600;
int constants::width = 300;
int constants::offset = 20;

const Color constants::darkGrey = {26, 31, 40, 255};
const Color constants::green = {47, 230, 23, 255};
const Color constants::red = {232, 18, 18, 255};
const Color constants::orange = {226, 116, 17, 255};
const Color constants::yellow = {237, 234, 4, 255};
const Color constants::purple = {166, 0, 247, 255};
const Color constants::cyan = {21, 204, 209, 255};
const Color constants::blue = {13, 64, 216, 255};
const Color constants::lightBlue = {59, 85, 162, 255};
const Color constants::darkBlue = {44, 44, 127, 255};

std::vector<Color> GetCellColors()
{
    return {constants::darkGrey, constants::green, constants::red, constants::orange, 
    constants::yellow, constants::purple, constants::cyan, constants::blue};
}