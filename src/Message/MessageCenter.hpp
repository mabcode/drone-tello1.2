#pragma once

#include <string>
class MessageCenter{

    private:

    public:
        std::string decode(char* cmd);
        const char* encode(std::string cmd);
        void isValid(void);
};