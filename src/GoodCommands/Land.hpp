#pragma once
#include "../Message/CommandList.hpp"

class Land : public CommandList{

    private:

    public:
        Land();
        void execute(DroneState *ds, std::string cmd);
};