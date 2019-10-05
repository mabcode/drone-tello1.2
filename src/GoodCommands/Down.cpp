#include "Down.hpp"

void Down::execute(DroneState *ds, std::string cmd)
{
    int x = ds->getValue(cmd);
    if (ds->hasTakenOff())
    {
        std::cout << "down\n";
        ds->move(0,0,-x);
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Down::Down()
{
}