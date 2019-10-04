#include "Emergency.hpp"

void Emergency::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "emergency\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Emergency::Emergency()
{
}