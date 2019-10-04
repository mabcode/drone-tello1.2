#pragma once
#include "../Message/CommandList.hpp"

class Left : public CommandList{

    private:

    public:
        Left();
        void execute(DroneState *ds);
};