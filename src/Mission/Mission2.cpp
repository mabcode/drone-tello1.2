#include "Mission2.hpp"

void Mission2::execute(CommunicationCenter *cc){
    cc->commandDrone("takeoff");
	cc->commandDrone("flip r");
	cc->commandDrone("cw 180");
	cc->commandDrone("flip r");
	cc->commandDrone("land");
}