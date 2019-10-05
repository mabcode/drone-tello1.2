#pragma once
#include "../Message/CommandList.hpp"

class Right : public CommandList{

    private:

    public:
        Right();
        void execute(DroneState *ds, std::string cmd);
};