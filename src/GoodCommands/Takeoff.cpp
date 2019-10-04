#include "Takeoff.hpp"

void Takeoff::execute(DroneState *ds){
     ds->move(0,0,0);
}

Takeoff::Takeoff(){
    
}