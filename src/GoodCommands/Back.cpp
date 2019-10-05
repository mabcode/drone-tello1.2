#include "Back.hpp"

void Back::execute(DroneState *ds, std::string cmd)
{
    int x = ds->getValue(cmd);
    if (ds->hasTakenOff())
    {
        std::cout << "back\n";
        ds->move(0,-x,0);
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Back::Back()
{
}