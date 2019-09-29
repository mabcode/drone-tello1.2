#include <iostream>
#include <thread>
using namespace std;

#include "CommunicationCenter.hpp"
#include "Mission/MissionCollection.hpp"
#include "UserInterface.hpp"

//#define PORT 8890 //Receive state
#define PORT 9090 //My Simulator
//#define PORT 8889 //Send and receive commands
#define IPADDRESS "127.0.0.1" // localIP
//#define IPADDRESS "192.168.10.1" // DroneIP

int main() {

	CommunicationCenter *cc = new CommunicationCenter(PORT,(char*)IPADDRESS);
	MissionCollection *mc = new MissionCollection();
	UserInterface *ui = new UserInterface();
	
	ui->connectPromt(cc);
	
	std::thread dataIn(&CommunicationCenter::getStatusFromDrone , cc, 8890);
	
	ui->getUserInput(cc,mc);

	dataIn.join();
	delete cc;
	delete mc;


	
	return 0;
}
