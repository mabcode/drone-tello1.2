#include "Down.hpp"

void Down::execute(DroneState *ds)
{
    if (ds->hasTakenOff())
    {
        std::cout << "down\n";
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Down::Down()
{
}