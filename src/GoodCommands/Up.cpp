#include "Up.hpp"

void Up::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "up\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Up::Up()
{
}