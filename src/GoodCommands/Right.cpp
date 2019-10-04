#include "Right.hpp"

void Right::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "right\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Right::Right()
{
}