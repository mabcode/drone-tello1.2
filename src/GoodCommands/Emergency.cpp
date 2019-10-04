#include "Emergency.hpp"

void Emergency::execute(DroneState *ds){
    ds->move(0,0,0);
}

Emergency::Emergency(){
    
}