#pragma once
#include "../Message/CommandList.hpp"

class Streamon : public CommandList{

    private:

    public:
        Streamon();
        void execute(DroneState *ds, std::string cmd);
};