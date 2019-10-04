#include "Flip.hpp"

void Flip::execute(DroneState *ds){
    ds->move(0,0,0);
}

Flip::Flip(){
    
}