#include "Mission3.hpp"

void Mission3::execute(CommunicationCenter *cc){
    cc->commandDrone("takeoff");
	cc->commandDrone("backward 20");
	cc->commandDrone("cw 90");
	cc->commandDrone("backward 20");
	cc->commandDrone("cw 90");
	cc->commandDrone("backward 20");
	cc->commandDrone("cw 90");
	cc->commandDrone("backward 20");
	cc->commandDrone("cw 90");
	cc->commandDrone("land");

}