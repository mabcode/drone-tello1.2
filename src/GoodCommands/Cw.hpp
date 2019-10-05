#pragma once
#include "../Message/CommandList.hpp"

class Cw : public CommandList{

    private:

    public:
        Cw();
        void execute(DroneState *ds, std::string cmd);
};