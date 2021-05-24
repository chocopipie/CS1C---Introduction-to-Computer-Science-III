CC = g++
FLAGS = -std=c++14 -Wall -g

all: hwec

hwec: hwec.cpp 
	$(CC) $(FLAGS) hwec.cpp -o hwec 

clean:
	rm *.o hwec hwec.tar

tar:
	tar cf hwec.tar hwec.scr Makefile hwec.cpp sort_algorithm.h quicksort.h mergesort.h