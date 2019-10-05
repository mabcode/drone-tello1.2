#include "Right.hpp"

void Right::execute(DroneState *ds, std::string cmd)
{
    int x = ds->getValue(cmd);

    if (ds->hasTakenOff())
    {      
        std::cout << "right\n";
        ds->move(x,0,0);
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Right::Right()
{
}