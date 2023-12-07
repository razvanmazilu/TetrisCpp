#include"background.h"

void  Background::Draw()
{
    //border
    Rectangle border = {static_cast<float>(constants::offset), static_cast<float>(constants::offset), \
            static_cast<float>(constants::width - 2 * constants::offset), \
            static_cast<float>(constants::height - 2 * constants::offset)};
    DrawRectangleLinesEx(border, 5, constants::darkGreen);

}