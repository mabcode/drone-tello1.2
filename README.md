Build Project:
-This project is compliled using Cmake and the build file is not provided. 
-To build this project first navigate to the src directory.
-Once in the src directory make a build directory and cd into it.
-Now that you are in the build directory type "cmake ../" this will connect all the needed files and keep them isolated in the build directory. 
-This will configure your ./sim , ./telloDrone, and your tests
-When you run "make", this will enable you to to run the tests connected to the project. The instructions to run the tests are listed in the test section. 

        ====>>>In order compile this file you will need istall or have "Cmake" and "Catch2" <<<====
Run Project:
~flyer~
-In the "build" dir type "./telloDrone" into the terminal

~simulator~
-In the "build" dir type "./sim" into the terminal

Run Tests:
-In the build dit type "./tests" into the terminal.

In order to run the test cases you must install catch2 "testing for c++". The install instructions are listed below.I installed catch2
globally on my system. This is why it is not included in my source code. 
        Install Catch2 (for testing):
        $ git clone https://github.com/catchorg/Catch2.git
        $ cd Catch2
        $ cmake -Bbuild -H. -DBUILD_TESTING=OFF
        $ sudo cmake --build build/ --target install

**Yes I could have configured the cmake file to include this outside library but I was running out of time         


