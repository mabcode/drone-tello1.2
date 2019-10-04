#pragma once
#include "../Message/CommandList.hpp"

class Streamoff : public CommandList{

    private:

    public:
        Streamoff();
        void execute(DroneState *ds);
};