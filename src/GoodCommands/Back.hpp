#pragma once
#include "../Message/CommandList.hpp"

class Back : public CommandList{

    private:

    public:
        Back();
        void execute(DroneState *ds);
};