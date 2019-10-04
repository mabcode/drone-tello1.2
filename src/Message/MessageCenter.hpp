#pragma once

#include <string>
#include <sstream>

#include "CommandList.hpp"
#include "../GoodCommands/Command.hpp"   
#include "../GoodCommands/Takeoff.hpp"   
#include "../GoodCommands/Land.hpp"      
#include "../GoodCommands/Streamon.hpp"  
#include "../GoodCommands/Streamoff.hpp" 
#include "../GoodCommands/Emergency.hpp" 
#include "../GoodCommands/Up.hpp"            
#include "../GoodCommands/Down.hpp"          
#include "../GoodCommands/Left.hpp"  
#include "../GoodCommands/Right.hpp"     
#include "../GoodCommands/Forward.hpp"   
#include "../GoodCommands/Back.hpp"      
#include "../GoodCommands/Cw.hpp"        
#include "../GoodCommands/Ccw.hpp"           
#include "../GoodCommands/Flip.hpp"  
#include "../GoodCommands/Go.hpp"        
#include "../GoodCommands/Stop.hpp"  


class MessageCenter{

    private:
        CommandList* cmdList[17];
        int command;

    public:
        MessageCenter();
        CommandList* getMessage(int mess);
        std::string decode(char* cmd);
        const char* encode(std::string cmd);
        int validate(std::string);
        
};