#include <iostream>
using namespace std;

#include "CommunicationCenter.hpp"
#include "Mission/MissionCollection.hpp"

#define PORT 9090
#define IPADDRESS "127.0.0.1"
//#define IPADDRESS "192.168.10.1"

int main() {

    bool isSim=true;

	CommunicationCenter *ccs = new CommunicationCenter(PORT,(char*)IPADDRESS,isSim);

    char received[50];
	
    cout<<"Your in the server\n";

    while(1){
        ccs->receive(received);
	    std::cout<<received<<std::endl;
        fill(received, received+50,0);
        
        std::string request = "ok";
	    ccs->send(request.c_str(),request.length());
        
    }

    delete ccs;

	
	return 0;
}
