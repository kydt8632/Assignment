@ECHO OFF
ECHO [42mConfiguration started [0m
DEL /Q build
MKDIR build
CD build
CMAKE .. -G "Visual Studio 16 2019" ^
		 -A "x64"
CD ..
ECHO [42mConfiguring done, you can open build/assignment.sln [0m
PAUSE
REM DONE!