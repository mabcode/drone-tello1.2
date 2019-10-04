#pragma once
#include "../Message/CommandList.hpp"

class Takeoff : public CommandList{

    private:

    public:
        Takeoff();
        void execute(DroneState *ds);
};