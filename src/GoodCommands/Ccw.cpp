#include "Ccw.hpp"

void Ccw::execute(DroneState *ds, std::string cmd)
{
    int x = ds->getValue(cmd);
    if (ds->hasTakenOff())
    {
        std::cout << "ccw\n";
        ds->rotate(-x);
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Ccw::Ccw()
{
}