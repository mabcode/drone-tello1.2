#include <iostream>
using namespace std;

#include "CommunicationCenter.hpp"
#include "Mission/MissionCollection.hpp"

#define PORT 9090
//#define PORT 8889
#define IPADDRESS "127.0.0.1"
//#define IPADDRESS "192.168.10.1"

int main() {

	CommunicationCenter *cc = new CommunicationCenter(PORT,(char*)IPADDRESS);
	MissionCollection *mc = new MissionCollection();
	int userInput=0;

	cout<<"Type 1 to put drone in command mode.\n";
	cin>>userInput;

	if(userInput == 1)
		cc->startDroneConnection();

	while(userInput != 99){
		cout<<"Enter a mission that you would like to fly between 0 and 2 (99 will exit)\n";
		cin>>userInput;

		if(userInput <0 || userInput > 2)
			cout<<"That is not a valid mission. Choose another\n";
		else{
			mc->getMission(userInput)->execute(cc);	
		}
	}

	delete cc;
	delete mc;

	
	return 0;
}
