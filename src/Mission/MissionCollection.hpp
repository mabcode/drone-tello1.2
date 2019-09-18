#pragma once
#include "Mission.hpp"
#include "Mission1.hpp"
#include "Mission2.hpp"
#include "Mission3.hpp"


class MissionCollection {

    private:
        Mission* missions[3];
    public:
        MissionCollection();
        Mission* getMission(int miss);
};