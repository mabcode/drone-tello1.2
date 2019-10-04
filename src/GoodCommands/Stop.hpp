#pragma once
#include "../Message/CommandList.hpp"

class Stop : public CommandList{

    private:

    public:
        Stop();
        void execute(DroneState *ds);
};