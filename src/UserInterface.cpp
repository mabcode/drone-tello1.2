#include "UserInterface.hpp"

#include <iostream>

UserInterface::UserInterface(){
    userInput=0;
}

void UserInterface::connectPromt(CommunicationCenter *_cc){
    std::cout<<"Type 1 to put drone in command mode.\n";
	std::cin>>userInput;

	if(userInput == 1){
		_cc->startDroneConnection();
	}

}
void UserInterface::getUserInput(CommunicationCenter *_cc, MissionCollection *_mc){
    while(userInput != 99){
		std::cout<<"Enter a mission that you would like to fly between 0 and 2 (99 will exit)\n";
		std::cin>>userInput;

		if(userInput <0 || userInput > 2)
			std::cout<<"That is not a valid mission. Choose another\n";
		else{
			_mc->getMission(userInput)->execute(_cc);	
		}
	}

}