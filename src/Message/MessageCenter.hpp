#pragma once

#include <string>
#include <sstream>
class MessageCenter{

    private:
        int command;

    public:
        MessageCenter();
        std::string decode(char* cmd);
        const char* encode(std::string cmd);
        int validate(std::string);
        
};