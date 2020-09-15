DEL /Q build
MKDIR build
CD build
cmake .. -G "Visual Studio 12 2013 Win64"
CD ..
PAUSE
REM DONE!