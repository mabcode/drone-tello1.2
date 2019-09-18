#include "MissionCollection.hpp"

MissionCollection::MissionCollection(){
    missions[0] = new Mission1;
    missions[1] = new Mission2;
    missions[2] = new Mission3;
}

Mission* MissionCollection::getMission(int miss){
    return missions[miss];
}