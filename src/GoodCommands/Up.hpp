#pragma once
#include "../Message/CommandList.hpp"

class Up : public CommandList{

    private:

    public:
    Up();
        void execute(DroneState *ds, std::string cmd);
};