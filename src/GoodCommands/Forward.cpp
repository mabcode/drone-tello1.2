#include "Forward.hpp"

void Forward::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "forward\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Forward::Forward()
{
}