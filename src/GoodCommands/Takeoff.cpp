#include "Takeoff.hpp"

void Takeoff::execute(DroneState *ds, std::string cmd){

    std::cout<<"takeoff\n";
    ds->setHasTakenOff(true);
    ds->move(0,0,50);

}

Takeoff::Takeoff(){
    
}