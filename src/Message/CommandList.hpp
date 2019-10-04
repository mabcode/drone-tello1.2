#pragma once
#include "../DroneState.hpp"

class CommandList{

    private:

    public:
        virtual void execute(DroneState *ds)=0;

};