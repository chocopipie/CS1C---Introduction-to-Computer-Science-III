CC = g++
FLAGS = -std=c++11 -Wall -g

all: hw10

hw10: hw10.cpp 
	$(CC) $(FLAGS) hw10.cpp -o hw10 

clean: 
	rm *.o hw10 hw10.tar

tar:
	tar cf hw10.tar hw10 hw10.scr Makefile hw10.cpp