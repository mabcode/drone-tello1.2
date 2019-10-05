#include "Emergency.hpp"

void Emergency::execute(DroneState *ds, std::string cmd)
{
    if (ds->hasTakenOff())
    {
        std::cout << "emergency\n";
        ds->resetFlyingInfo();
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Emergency::Emergency()
{
}