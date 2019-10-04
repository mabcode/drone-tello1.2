#include "Stop.hpp"

void Stop::execute(DroneState *ds){
    ds->move(0,0,0);   
}

Stop::Stop(){
    
}