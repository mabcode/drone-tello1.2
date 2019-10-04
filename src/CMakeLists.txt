
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
	DroneState.hpp
	DroneState.cpp
	Status.cpp
	Status.hpp
	UserInterface.cpp
	UserInterface.hpp
	Message/MessageCenter.hpp
	Message/MessageCenter.cpp
	Message/CommandList.hpp
	Message/CommandList.cpp

	GoodCommands/Command.hpp
	GoodCommands/Command.cpp
	GoodCommands/Takeoff.hpp
	GoodCommands/Takeoff.cpp
	GoodCommands/Land.hpp
	GoodCommands/Land.cpp
	GoodCommands/Streamon.hpp
	GoodCommands/Streamon.cpp
	GoodCommands/Streamoff.hpp
	GoodCommands/Streamoff.cpp
	GoodCommands/Emergency.hpp
	GoodCommands/Emergency.cpp
	GoodCommands/Up.hpp
	GoodCommands/Up.cpp
	GoodCommands/Down.hpp
	GoodCommands/Down.cpp
	GoodCommands/Left.hpp
	GoodCommands/Left.cpp
	GoodCommands/Right.hpp
	GoodCommands/Right.cpp
	GoodCommands/Forward.hpp
	GoodCommands/Forward.cpp
	GoodCommands/Back.hpp
	GoodCommands/Back.cpp
	GoodCommands/Cw.hpp
	GoodCommands/Cw.cpp
	GoodCommands/Ccw.hpp
	GoodCommands/Ccw.cpp
	GoodCommands/Flip.hpp
	GoodCommands/Flip.cpp
	GoodCommands/Go.hpp
	GoodCommands/Go.cpp
	GoodCommands/Stop.hpp
	GoodCommands/Stop.cpp
)


add_executable(
	sim
	simulator.cpp
	CommunicationCenter.cpp
	CommunicationCenter.hpp
	DroneState.hpp
	DroneState.cpp
	Status.cpp
	Status.hpp

	Message/MessageCenter.hpp
	Message/MessageCenter.cpp
	Message/CommandList.hpp
	Message/CommandList.cpp

	GoodCommands/Command.hpp
	GoodCommands/Command.cpp
	GoodCommands/Takeoff.hpp
	GoodCommands/Takeoff.cpp
	GoodCommands/Land.hpp
	GoodCommands/Land.cpp
	GoodCommands/Streamon.hpp
	GoodCommands/Streamon.cpp
	GoodCommands/Streamoff.hpp
	GoodCommands/Streamoff.cpp
	GoodCommands/Emergency.hpp
	GoodCommands/Emergency.cpp
	GoodCommands/Up.hpp
	GoodCommands/Up.cpp
	GoodCommands/Down.hpp
	GoodCommands/Down.cpp
	GoodCommands/Left.hpp
	GoodCommands/Left.cpp
	GoodCommands/Right.hpp
	GoodCommands/Right.cpp
	GoodCommands/Forward.hpp
	GoodCommands/Forward.cpp
	GoodCommands/Back.hpp
	GoodCommands/Back.cpp
	GoodCommands/Cw.hpp
	GoodCommands/Cw.cpp
	GoodCommands/Ccw.hpp
	GoodCommands/Ccw.cpp
	GoodCommands/Flip.hpp
	GoodCommands/Flip.cpp
	GoodCommands/Go.hpp
	GoodCommands/Go.cpp
	GoodCommands/Stop.hpp
	GoodCommands/Stop.cpp
)


