#include "CommunicationCenter.hpp"
#include <iostream>

CommunicationCenter::CommunicationCenter(int port, int port2, char* address, bool Sim){
	status = new Status;
	cmds = new MessageCenter;

	maxRetries=3;
	stop_thread=false;
    socketDatagram = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
	socketDatagram2 = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);

	socketSetup(servaddr,port);
	socketSetup(flowServaddr,port2);
	
	if(Sim){
    	bind(socketDatagram,(struct sockaddr *)&servaddr,sizeof(servaddr));
	}
	if(!Sim){
		bind(socketDatagram2,(struct sockaddr *)&flowServaddr,sizeof(flowServaddr));
	}
}

CommunicationCenter::~CommunicationCenter(){
	close(socketDatagram);
	close(socketDatagram2);
	stop_thread=true;
	delete status;
	delete cmds;
}	

void CommunicationCenter::getStatusFromDrone(void){
	while(1){
		this->receive(dStatus, socketDatagram2 ,flowServaddr);
		std::string mess(dStatus);
		//std::cout<<mess<<std::endl;
		sleep(1);
	}
}

void CommunicationCenter::sendStatusFromDrone(void){
	while(1){
		std::string temp =status->getMessageText();
		this->send(temp.c_str(), temp.length(),socketDatagram2,flowServaddr);
		usleep(100);
	}
}

void CommunicationCenter::startDroneConnection(){
	std::cout<<"Connecting to drone\n";
	maxRetries--;
	std::string request = "command";
	send(request.c_str(),request.length(),socketDatagram, servaddr);
	int temp = receive(received, socketDatagram,servaddr);
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
	receive(received, socketDatagram,servaddr);
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
int CommunicationCenter::receive(char* msg, int socket, sockaddr_in &addr){
    socklen_t sendersize = sizeof(addr);
	int rettemp = recvfrom(socket,msg,5000,0, (struct sockaddr *)&addr, &sendersize);
    return rettemp;
}

void CommunicationCenter::socketSetup(sockaddr_in &address, int port){
	memset(&address,0,sizeof(address));
    address.sin_family = AF_INET;
	address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(INADDR_ANY);
}

void CommunicationCenter::handleUserCommand(DroneState *_ds){
	int cmd = -1;
    while(1){
        this->receive(received,socketDatagram,servaddr);
		std::string mess(received);
		cmd = cmds->validate(mess);

		if(cmd == -1){
			std::cout<<"That is not valid command\n";
		}
		else{
			 cmds->getMessage(cmd)->execute(_ds);
		}
		
        std::fill(received, received+500,0);

        std::string request = "ok";
	    this->send(request.c_str(),request.length(),socketDatagram, servaddr);
    }
}



