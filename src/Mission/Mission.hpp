#pragma once
#include "../CommunicationCenter.hpp"

class Mission{

    private:

    public:
        virtual void execute(CommunicationCenter *cc)=0;
};