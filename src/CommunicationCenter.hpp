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
#include <string>
#include <thread>

class CommunicationCenter {
	
	private:
		int socketDatagram;
		long retval;
		struct sockaddr_in cliaddr, servaddr ;
		int maxRetries;
		char received[50];
		MessageCenter *messageC;
		std::thread dataIN;
		bool stop_thread;
		

	public:
		CommunicationCenter(int port, char* address, bool isSim =false);
		~CommunicationCenter();

		void startDroneConnection();
		int commandDrone(std::string cmd);
		long send(const char* msg, int msgsize);
		int receive(char* command);
		void getStatusFromDrone(void);
		void socketSetup(sockaddr_in &addr, int port);
	};