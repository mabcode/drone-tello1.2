#include "Cw.hpp"

void Cw::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "cw\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Cw::Cw()
{
}