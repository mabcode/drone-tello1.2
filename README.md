Build Project:
-In the "build" dir type "make" into the terminal
-The make file is built using Cmake. If there are any issues with the make file navigate to the "build" directory and type "cmake ../".
This will connect all the needed files and allow you to use them with "make". The Cmake file is also configured to connect the testing files.
-When you run "make", this will enable you to to run the tests connected to the project. The instructions to run the tests are listed in the test section. 

        ====>>>In order compile this file you will need istall or have "Cmake" and "Catch2" <<<====
Run Project:
-In the "build" dir type "./telloDrone" into the terminal

Run Tests:
-In the build dit type "./tests" into the terminal.

In order to run the test cases you must install catch2 "testing for c++". The install instructions are listed below.I installed catch2
globally on my system. This is why it is not included in my source code. 
        Install Catch2 (for testing):
        $ git clone https://github.com/catchorg/Catch2.git
        $ cd Catch2
        $ cmake -Bbuild -H. -DBUILD_TESTING=OFF
        $ sudo cmake --build build/ --target install
         


