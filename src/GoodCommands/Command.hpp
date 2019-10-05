#pragma once
#include "../Message/CommandList.hpp"

class Command : public CommandList{

    private:

    public:
        Command();
        void execute(DroneState *ds, std::string cmd);
};