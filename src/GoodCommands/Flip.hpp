#pragma once
#include "../Message/CommandList.hpp"

class Flip : public CommandList{

    private:

    public:
        Flip();
        void execute(DroneState *ds, std::string cmd);
};