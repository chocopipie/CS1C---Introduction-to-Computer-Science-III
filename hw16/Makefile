CC = g++
FLAGS = -std=c++14 -Wall -g

all: hw16

hw16: hw16.cpp 
	$(CC) $(FLAGS) hw16.cpp -o hw16

clean: 
	rm *.o hw16 hw16.tar

tar:
	tar cf hw16.tar hw16.scr Makefile hw16.cpp