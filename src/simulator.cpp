#include <iostream>
#include <thread>
using namespace std;

#include "CommunicationCenter.hpp"
#include "Mission/MissionCollection.hpp"
#include "Status.hpp"

#define PORT 9090
#define IPADDRESS "127.0.0.1"
//#define IPADDRESS "192.168.10.1"

int main() {
    bool isSim=true;
    
	CommunicationCenter *scc = new CommunicationCenter(PORT,(char*)IPADDRESS,isSim);
    Status *status = new Status();
	
    cout<<"Your in the server\n";

    std::thread dataOut(&CommunicationCenter::sendStatusFromDrone, scc);
    scc->handleUserCommand();

    delete scc;
    dataOut.join();	
	return 0;
}
