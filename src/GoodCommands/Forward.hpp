#pragma once
#include "../Message/CommandList.hpp"

class Forward : public CommandList{

    private:

    public:
        Forward();
        void execute(DroneState *ds);
};