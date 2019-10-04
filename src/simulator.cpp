#include <iostream>
#include <thread>
using namespace std;

#include "CommunicationCenter.hpp"
#include "Message/MessageCenter.hpp"
#include "DroneState.hpp"

//#define PORT 9090
//#define IPADDRESS "127.0.0.1"
//#define IPADDRESS "192.168.10.1"

int main(int argc, char* argv[]) {

    if(argc !=4){
		cout<<"===================================\n";
		cout<<"Need args (./sim 9090 8890 127.0.0.1)\n";
		cout<<"===================================\n";
		return 0;
	}

    bool isSim=true;
    
	CommunicationCenter *scc = new CommunicationCenter(atoi(argv[1]),atoi(argv[2]),argv[3],isSim);

    MessageCenter *message = new MessageCenter();
    DroneState *ds = new DroneState();
    
	
    cout<<"This is the Simulator\n";

    std::thread dataOut(&CommunicationCenter::sendStatusFromDrone, scc);
    scc->handleUserCommand();

    delete scc;
    delete message;
    delete ds;
    dataOut.join();	
	return 0;
}
