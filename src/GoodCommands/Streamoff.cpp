#include "Streamoff.hpp"

void Streamoff::execute(DroneState *ds){
     ds->move(0,0,0);
}

Streamoff::Streamoff(){
    
}