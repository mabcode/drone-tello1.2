#include "Back.hpp"

void Back::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "back\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Back::Back()
{
}