#pragma once
#include <cstdlib> 
#include<raylib.h>
#include <raymath.h>
#include<vector>


namespace constants {
    extern const int height;
    extern const int width;
    extern const int offset;

    extern const Color darkGrey;
    extern const Color green;
    extern const Color red;
    extern const Color orange;
    extern const Color yellow;
    extern const Color purple;
    extern const Color cyan;
    extern const Color blue;
    extern const Color lightBlue;
    extern const Color darkBlue;
}

namespace general
{
    bool EventTriggered(double interval);
    std::vector<Color> GetCellColors();
}
