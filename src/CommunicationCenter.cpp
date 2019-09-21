#include "CommunicationCenter.hpp"
#include <iostream>

#include <string>

CommunicationCenter::CommunicationCenter(int port, char* address, bool isSim){
	retval=0;
	maxRetries=3;
    socketDatagram = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);

    //set up bind address
    memset(&servaddr,0,sizeof(servaddr));
    servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(port);
    servaddr.sin_addr.s_addr = inet_addr(address);
    

	if(isSim){
    	//set up address to use for sending
    	memset(&cliaddr,0,sizeof(cliaddr));
    	cliaddr.sin_family = AF_INET;
		cliaddr.sin_port = htons(port);
    	cliaddr.sin_addr.s_addr = htonl(INADDR_ANY);	
    	retval = bind(socketDatagram,(struct sockaddr *)&servaddr,sizeof(servaddr));
	}
}

CommunicationCenter::~CommunicationCenter(){
	 close(socketDatagram);
}	

void CommunicationCenter::startDroneConnection(){
	std::cout<<"Connecting to drone\n";
	maxRetries--;
	const char* cmdOut = messageC->encode("command");
	send(cmdOut,strlen(cmdOut));
	receive(received);
	std::string mess(received);
	std::cout<<messageC->decode(received)<<std::endl;
	sleep(1);
	if(mess != "ok" && maxRetries>0)
		startDroneConnection();
	if(maxRetries==0){
		std::cout<<"Could not connect to drone!!\n";
		exit(0);
	}
}

int CommunicationCenter::commandDrone(std::string cmd){
	send(cmd.c_str(),cmd.length());
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
long CommunicationCenter::send(const char* command, int commandLength){
    if(retval==0){
		return sendto(socketDatagram, command, commandLength, 0, (struct sockaddr *)&servaddr,	sizeof(servaddr));
	}
	else{
		return sendto(socketDatagram, command, commandLength, 0, (struct sockaddr *)&cliaddr,	sizeof(cliaddr));
	}
}

//will return the length of the message received 
int CommunicationCenter::receive(char* msg){
	if(retval==0){
    	socklen_t sendersize = sizeof(servaddr);
		int rettemp = recvfrom(socketDatagram,msg,sendersize,0, (struct sockaddr *)&servaddr, &		sendersize);
    	return rettemp;
	}
	else {
		socklen_t sendersize = sizeof(cliaddr);
		int rettemp = recvfrom(socketDatagram,msg,sendersize,0, (struct sockaddr *)&cliaddr, &		sendersize);
    	return rettemp;
	}

}


