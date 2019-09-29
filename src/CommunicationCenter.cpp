#include "CommunicationCenter.hpp"
#include <iostream>

CommunicationCenter::CommunicationCenter(int port, char* address, bool isSim){
	droneState = new DroneState;
	messageC = new MessageCenter;
	status = new Status;

	retval=0;
	retval2=0;
	maxRetries=3;
	stop_thread=false;
    socketDatagram = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
	socketDatagram2 = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);

	socketSetup(servaddr,port);
	socketSetup(flowServaddr,8090);
	
	if(isSim){
    	socketSetup(cliaddr,port);
		socketSetup(flowCliaddr,8090);

    	retval = bind(socketDatagram,(struct sockaddr *)&servaddr,sizeof(servaddr));
		retval2 = bind(socketDatagram2,(struct sockaddr *)&flowServaddr,sizeof(flowServaddr));
	}
}

CommunicationCenter::~CommunicationCenter(){
	close(socketDatagram);
	close(socketDatagram2);
	stop_thread=true;
	delete droneState;
	delete status;
	delete messageC;
}	

void CommunicationCenter::getStatusFromDrone(int port){
	// while(1){


	// 	std::cout<<port<<std::endl;
	// 	sleep(2);
	// }
}

void CommunicationCenter::sendStatusFromDrone(int port){
	// while(1){


	// 	std::cout<<port<<std::endl;
	// 	sleep(2);
	// }
}

void CommunicationCenter::startDroneConnection(){
	std::cout<<"Connecting to drone\n";
	maxRetries--;
	std::string request = "command";
	send(request.c_str(),request.length(),socketDatagram, servaddr);
	int temp = receive(received);
	std::string mess(received);
	std::cout<<mess<<std::endl;
	sleep(1);
	if(temp <= 0 && maxRetries>0)
		startDroneConnection();
	if(maxRetries==0){
		std::cout<<"Could not connect to drone!!\n";
		exit(0);
	}
}

int CommunicationCenter::commandDrone(std::string cmd){
	send(cmd.c_str(),cmd.length(),socketDatagram,servaddr);
	receive(received);
	std::string mess(received);
	std::cout<<mess<<std::endl;
	sleep(2);
	if(mess=="ok")
		return 1;
	else
		return 0;
}

//will return the length of the string sent
long CommunicationCenter::send(const char* command, int commandLength,int socket, sockaddr_in &addr){
	return sendto(socket, command, commandLength, 0, (struct sockaddr *)&addr,sizeof(addr));
	
}

//will return the length of the message received 
int CommunicationCenter::receive(char* msg){
	if(retval==0){
    	socklen_t sendersize = sizeof(servaddr);
		int rettemp = recvfrom(socketDatagram,msg,sendersize,0, (struct sockaddr *)&servaddr, &sendersize);
    	return rettemp;
	}
	else {
		socklen_t sendersize = sizeof(cliaddr);
		int rettemp = recvfrom(socketDatagram,msg,sendersize,0, (struct sockaddr *)&cliaddr, &sendersize);
    	return rettemp;
	}

}

void CommunicationCenter::socketSetup(sockaddr_in &address, int port){
	memset(&address,0,sizeof(address));
    address.sin_family = AF_INET;
	address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(INADDR_ANY);
}


void CommunicationCenter::handleUserCommand(void){
    while(1){
        this->receive(received);
	    std::cout<<received<<std::endl;
        std::fill(received, received+500,0);
        
        std::string request = "ok";
	    this->send(request.c_str(),request.length(),socketDatagram, servaddr);
        
    }
}



