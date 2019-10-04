#include "MessageCenter.hpp"
#include <string>

MessageCenter::MessageCenter(){
    command=-1;
}

std::string MessageCenter::decode(char* cmd){
    std::string messege(cmd);
    return messege;
}

const char* MessageCenter::encode(std::string cmd){    
    return cmd.c_str();
}

int MessageCenter::validate(std::string cmd){
    std::string tempCmd;
    std::stringstream ss(cmd);
    ss>> tempCmd;

    if(tempCmd == "command"){return 0;}
    else if(tempCmd == "takeoff"){return 1;}
    else if(tempCmd == "land"){return 2;}
    else if(tempCmd == "streamon"){return 3;}
    else if(tempCmd == "streamoff"){return 4;}
    else if(tempCmd == "emergency"){return 5;}
    else if(tempCmd == "up"){return 6;}
    else if(tempCmd == "down"){return 7;}
    else if(tempCmd == "left"){return 8;}
    else if(tempCmd == "right"){return 9;}
    else if(tempCmd == "forward"){return 10;}
    else if(tempCmd == "back"){return 11;}
    else if(tempCmd == "cw"){return 12;}
    else if(tempCmd == "ccw"){return 13;}
    else if(tempCmd == "flip"){return 14;}
    else if(tempCmd == "go"){return 15;}
    else if(tempCmd == "stop"){return 16;} 
    else {return -1;}
}

