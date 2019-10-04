#pragma once
#include "../Message/CommandList.hpp"

class Go : public CommandList{

    private:

    public:
        Go();
        void execute(DroneState *ds);
};