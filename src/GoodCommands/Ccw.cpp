#include "Ccw.hpp"

void Ccw::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "ccw\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Ccw::Ccw()
{
}