//To connect to socket, code used from https://github.com/butcherg/DatagramSocket/blob/master
#pragma once

#include "Message/MessageCenter.hpp"

#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <string>

class CommunicationCenter {
	
	private:
		int socketDatagram;
		long retval;
		struct sockaddr_in cliaddr, servaddr ;
		int maxRetries;
		char received[50];
		MessageCenter *messageC;


	public:
		CommunicationCenter(int port, char* address, bool isSim =false);
		~CommunicationCenter();

		void startDroneConnection();
		int commandDrone(std::string cmd);
		long send(const char* msg, int msgsize);
		int receive(char* command);
	};