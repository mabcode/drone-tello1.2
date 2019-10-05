#pragma once
#include "../DroneState.hpp"
#include <iostream>
#include <sstream>

class CommandList{

    private:

    public:
        virtual void execute(DroneState *ds, std::string cmd)=0;

};