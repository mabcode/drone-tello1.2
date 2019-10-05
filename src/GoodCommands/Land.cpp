#include "Land.hpp"

void Land::execute(DroneState *ds, std::string cmd)
{
    if (ds->hasTakenOff())
    {
        std::cout << "land\n";
        ds->setHasTakenOff(false);
        ds->resetFlyingInfo();
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

    Land::Land()
    {
    }