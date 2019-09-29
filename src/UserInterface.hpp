#pragma once

#include "CommunicationCenter.hpp"
#include "Mission/MissionCollection.hpp"

class UserInterface {
    private:
    int userInput;

    public:
        UserInterface();
        void connectPromt(CommunicationCenter *_cc);
        void getUserInput(CommunicationCenter *_cc, MissionCollection *_mc);
};