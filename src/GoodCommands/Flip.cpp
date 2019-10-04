#include "Flip.hpp"

void Flip::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "flip\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Flip::Flip()
{
}