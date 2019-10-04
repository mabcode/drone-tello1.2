
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
	tests/tester.cpp
	tests/test_CommunicationCenter.cpp
	tests/test_DroneState.cpp
	tests/test_Status.cpp
	tests/test_UserInterface.cpp
	tests/test_MissionCollection.cpp
	tests/test_Mission.cpp
	tests/test_Message.cpp
	)

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
	Status.cpp
	Status.hpp
	UserInterface.cpp
	UserInterface.hpp
)

add_executable(
	sim
	simulator.cpp
	CommunicationCenter.cpp
	CommunicationCenter.hpp
	Message/MessageCenter.hpp
	Message/MessageCenter.cpp
	Message/CommandList.hpp
	Message/GoodCommands/Command.hpp
	Message/GoodCommands/Takeoff.hpp
	Message/GoodCommands/Land.hpp
	Message/GoodCommands/Streamon.hpp
	Message/GoodCommands/Streamoff.hpp
	Message/GoodCommands/Emergency.hpp
	Message/GoodCommands/Up.hpp
	Message/GoodCommands/Down.hpp
	Message/GoodCommands/Left.hpp
	Message/GoodCommands/Right.hpp
	Message/GoodCommands/Forward.hpp
	Message/GoodCommands/Back.hpp
	Message/GoodCommands/Cw.hpp
	Message/GoodCommands/Ccw.hpp
	Message/GoodCommands/Flip.hpp
	Message/GoodCommands/Go.hpp
	Message/GoodCommands/Stop.hpp
	DroneState.hpp
	DroneState.cpp
	Status.cpp
	Status.hpp
)


