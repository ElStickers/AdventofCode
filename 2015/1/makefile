CPP_FLAGS = -std=c++11 -Wall -Wextra -Werror

CC = c:\mingw\bin\g++
RM = rm -f # PowerShell

day1.exe: day1.o
	$(CC) $(CPP_FLAGS) day1.o -o day1.exe

day1.o: day1.cpp
	$(CC) $(CPP_FLAGS) -c day1.cpp -o day1.o

clean:
	$(RM) *.o

cleanall: clean
	$(RM) *.exe
