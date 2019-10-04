#include "Left.hpp"

void Left::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "left\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Left::Left()
{
}