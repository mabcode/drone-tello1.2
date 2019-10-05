#include "Mission1.hpp"

void Mission1::execute(CommunicationCenter *cc){
    cc->commandDrone("takeoff");
	cc->commandDrone("left 20");
	cc->commandDrone("up 10");
	cc->commandDrone("right 40");
	cc->commandDrone("down 10");
    cc->commandDrone("left 20");
	cc->commandDrone("land");
}