#pragma once
#include "../Message/CommandList.hpp"

class Emergency : public CommandList{

    private:

    public:
        Emergency();
        void execute(DroneState *ds);
};