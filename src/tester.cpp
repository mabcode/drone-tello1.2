#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <typeinfo>
#include <string>
#include "Status.cpp"
#include "CommunicationCenter.cpp"
#include "Mission/MissionCollection.cpp"
#include "Mission/Mission.cpp"
#include "Mission/Mission1.cpp"
#include "Mission/Mission2.cpp"
#include "Mission/Mission3.cpp"
#include "Message/MessageCenter.cpp"

#define PORT 8889
#define IPADDRESS "127.0.0.1"
//#define IPADDRESS "192.168.10.1"

char received[50];
CommunicationCenter *cc = new CommunicationCenter(PORT,(char*)IPADDRESS);
MissionCollection *mc = new MissionCollection();
Mission1 *m1 = new Mission1;
Mission2 *m2 = new Mission2;
Mission3 *m3 = new Mission3;

std::string cmd="test";

// TEST_CASE("Command is sent to the drone", "[send]"){
//     REQUIRE((cc->send(cmd.c_str(),cmd.length())) != 0);
//     CHECK_FALSE((cc->send(cmd.c_str(),cmd.length())) == 0);
//     REQUIRE((cc->send(cmd.c_str(),cmd.length())) == 4);
//     REQUIRE((cc->send(cmd.c_str(),cmd.length())) != 3);
//     REQUIRE((cc->send(cmd.c_str(),cmd.length())) != 5);
// }

TEST_CASE("Test the 3 missions exist", "[getMission]"){
    for(int i=0 ; i>3 ;i++){
        REQUIRE(mc->getMission(i));
    }
}

TEST_CASE("Test type of mission", "[getMission]"){
    REQUIRE(typeid(Mission1).name() != typeid(Mission).name());
    REQUIRE(typeid(Mission2).name() != typeid(Mission).name());
    REQUIRE(typeid(Mission3).name() != typeid(Mission).name());
}

TEST_CASE("Check if there are missions", "[Mission]"){
    CHECK_FALSE(&m1 == NULL);
    CHECK_FALSE(&m2 == NULL);
    CHECK_FALSE(&m3 == NULL);
}

TEST_CASE("Check MissionCollection", "[MissionCollection]"){
    CHECK_FALSE(&mc == NULL);
}













