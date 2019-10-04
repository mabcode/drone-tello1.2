#pragma once
#include "../DroneState.hpp"
#include <iostream>

class CommandList{

    private:

    public:
        virtual void execute(DroneState *ds)=0;

};