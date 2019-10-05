#include "Go.hpp"

void Go::execute(DroneState *ds, std::string cmd)
{
    if (ds->hasTakenOff())
    {
        std::cout << "go\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Go::Go()
{
}