#pragma once

#include "Message/MessageCenter.hpp"
#include "DroneState.hpp"
#include "Status.hpp"

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
		int socketDatagram,socketDatagram2;
		long retval,retval2;
		struct sockaddr_in cliaddr, servaddr, flowCliaddr, flowServaddr;
		int maxRetries;
		char received[500];
		char dStatus[5000];
		MessageCenter *messageC;
		DroneState *droneState;
		Status *status;
		std::thread dataIN;
		bool stop_thread;
		

	public:
		CommunicationCenter(int port, char* address, bool isSim =false);
		~CommunicationCenter();

		void startDroneConnection();
		int commandDrone(std::string cmd);
		long send(const char* msg, int msgsize, int socket, sockaddr_in &addr);
		int receive(char* command,int socket, sockaddr_in &addr);
		void getStatusFromDrone(void);
		void sendStatusFromDrone(void);
		void handleUserCommand(void);
		void socketSetup(sockaddr_in &addr, int port);
	};