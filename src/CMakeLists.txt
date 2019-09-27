
cmake_minimum_required (VERSION 3.5)
project (telloDrone)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-std=c++11 -pthread ${CMAKE_CXX_FLAGS}")
endif()

find_package(Catch2 REQUIRED)

add_executable(
	tests 
	tester.cpp)

target_link_libraries(tests Catch2::Catch2)

include(Ctest)
include(Catch)

catch_discover_tests(tests)

add_executable(
	telloDrone
	main.cpp
	CommunicationCenter.cpp
	CommunicationCenter.hpp
	Mission/MissionCollection.cpp
	Mission/MissionCollection.hpp
	Mission/Mission.cpp
	Mission/Mission.hpp
	Mission/Mission1.cpp
	Mission/Mission1.hpp
	Mission/Mission2.cpp
	Mission/Mission2.hpp
	Mission/Mission3.cpp
	Mission/Mission3.hpp
	Message/MessageCenter.hpp
	Message/MessageCenter.cpp
	DroneState.hpp
	DroneState.cpp
)

add_executable(
	sim
	simulator.cpp
	CommunicationCenter.cpp
	CommunicationCenter.hpp
	Message/MessageCenter.hpp
	Message/MessageCenter.cpp
	DroneState.hpp
	DroneState.cpp
)


