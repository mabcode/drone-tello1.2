#include <iostream>
#include <thread>
using namespace std;

#include "CommunicationCenter.hpp"
#include "Mission/MissionCollection.hpp"
#include "UserInterface.hpp"


//#define PORT 8890 //Receive state
//#define PORT 9090 //My Simulator
//#define PORT 8889 //Send and receive commands
//#define IPADDRESS "127.0.0.1" // localIP
//#define IPADDRESS "192.168.10.1" // DroneIP

int main(int argc, char* argv[]) {

	if(argc !=4){
		cout<<"===================================\n";
		cout<<"Need args (./telloDrone 9090 8890)\n";
		cout<<"===================================\n";
		return 0;
	}

	CommunicationCenter *cc = new CommunicationCenter(atoi(argv[1]),atoi(argv[2]),argv[3]);
	MissionCollection *mc = new MissionCollection();
	UserInterface *ui = new UserInterface();
	
	ui->connectPromt(cc);
	
	std::thread dataIn(&CommunicationCenter::getStatusFromDrone , cc);
	
	ui->getUserInput(cc,mc);

	dataIn.join();
	delete cc;
	delete mc;
	delete ui;
	
	return 0;
}
