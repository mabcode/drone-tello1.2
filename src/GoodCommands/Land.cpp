#include "Land.hpp"

void Land::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "land\n";
        ds->setHasTakenOff(false);
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

    Land::Land()
    {
    }