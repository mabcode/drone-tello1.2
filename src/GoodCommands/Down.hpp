#pragma once
#include "../Message/CommandList.hpp"

class Down : public CommandList{

    private:

    public:
        Down();    
        void execute(DroneState *ds, std::string cmd);
};