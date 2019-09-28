#include <iostream>
#include <thread>
using namespace std;

#include "CommunicationCenter.hpp"
#include "Mission/MissionCollection.hpp"
#include "DroneState.hpp"

#define PORT 9090
#define IPADDRESS "127.0.0.1"
//#define IPADDRESS "192.168.10.1"

int main() {

    bool isSim=true;

	CommunicationCenter *scc = new CommunicationCenter(PORT,(char*)IPADDRESS,isSim);
    DroneState *ds = new DroneState();

    char received[500];
	
    cout<<"Your in the server\n";

    std::thread dataOut(&CommunicationCenter::sendStatusFromDrone, scc, 8890);

    while(1){
        scc->receive(received);
	    std::cout<<received<<std::endl;
        fill(received, received+50,0);
        
        std::string request = "ok";
	    scc->send(request.c_str(),request.length());
        
    }

    delete scc;
    dataOut.join();

	
	return 0;
}
