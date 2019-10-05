#include "Cw.hpp"

void Cw::execute(DroneState *ds, std::string cmd)
{
    int x = ds->getValue(cmd);
    if (ds->hasTakenOff())
    {
        std::cout << "cw\n";
        ds->rotate(x);
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Cw::Cw()
{
}