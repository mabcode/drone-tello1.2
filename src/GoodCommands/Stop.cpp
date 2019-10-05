#include "Stop.hpp"

void Stop::execute(DroneState *ds, std::string cmd)
{
    if (ds->hasTakenOff())
    {
        std::cout << "stop\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Stop::Stop()
{
}