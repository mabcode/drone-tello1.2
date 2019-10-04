#include "Command.hpp"


void Command::execute(DroneState *ds){
    ds->move(0,0,0);
}

Command::Command(){
    
}
