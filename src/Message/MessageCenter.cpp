#include "MessageCenter.hpp"
#include <string>

std::string MessageCenter::decode(char* cmd){
    std::string messege(cmd);
    return messege;
}

const char* MessageCenter::encode(std::string cmd){    
    return cmd.c_str();
}

void MessageCenter::isValid(void){
    
}

