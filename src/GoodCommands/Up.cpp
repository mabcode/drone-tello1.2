#include "Up.hpp"

void Up::execute(DroneState *ds, std::string cmd)
{   
    int x = ds->getValue(cmd);

    if (ds->hasTakenOff())
    {
        std::cout << "up\n";
        ds->move(0,0,x);
    }
    else
    {
        std::cout << "You have not taken off yet\n";
    }
}

Up::Up()
{
}