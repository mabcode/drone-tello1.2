#pragma once
#include "../Message/CommandList.hpp"

class Ccw : public CommandList{

    private:

    public:
        Ccw();
        void execute(DroneState *ds, std::string cmd);
};