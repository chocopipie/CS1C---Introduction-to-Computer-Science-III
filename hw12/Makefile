CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = queue.o 

all: hw12

hw12: hw12.cpp 
	$(CC) $(FLAGS) hw12.cpp -o hw12  

#queue.o: queue.cpp queue.h 
#	$(CC) $(FLAGS) -c queue.cpp -o queue.o 

clean: 
	rm *.o hw12 hw12.tar 

tar: 
	tar cf hw12.tar hw12.scr Makefile hw12.cpp queue.h linkedQueue.h