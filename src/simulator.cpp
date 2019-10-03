#include <iostream>
#include <thread>
using namespace std;

#include "CommunicationCenter.hpp"
#include "Mission/MissionCollection.hpp"

#define PORT 9090
#define IPADDRESS "127.0.0.1"
//#define IPADDRESS "192.168.10.1"

int main(int argc, char* argv[]) {

    if(argc !=3){
		cout<<"===================================\n";
		cout<<"Need args (./sim 9090 8890)\n";
		cout<<"===================================\n";
		return 0;
	}

    bool isSim=true;
    
	CommunicationCenter *scc = new CommunicationCenter(atoi(argv[1]),atoi(argv[2]),(char*)IPADDRESS,isSim);
	
    cout<<"This is the Simulator\n";

    std::thread dataOut(&CommunicationCenter::sendStatusFromDrone, scc);
    scc->handleUserCommand();

    delete scc;
    dataOut.join();	
	return 0;
}
