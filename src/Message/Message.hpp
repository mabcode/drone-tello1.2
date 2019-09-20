#pragma once
#include "../CommunicationCenter.hpp"


class Message{

    private:

    public:
        virtual void execute(CommunicationCenter *cc)=0;
};