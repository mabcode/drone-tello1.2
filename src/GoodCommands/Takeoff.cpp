#include "Takeoff.hpp"

void Takeoff::execute(DroneState *ds){
    std::cout<<"takeoff\n";
    ds->setHasTakenOff(true);

}

Takeoff::Takeoff(){
    
}