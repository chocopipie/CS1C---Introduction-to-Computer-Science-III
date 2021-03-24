CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = employee.o programmer.o architect.o

all: hw04

hw04: hw04.cpp lotto.h lotto.cpp employee.o programmer.o architect.o
	$(CC) $(FLAGS) hw04.cpp lotto.cpp -o hw04 $(OBJS)

employee.o: employee.cpp employee.h 
	$(CC) $(FLAGS) -c employee.cpp -o employee.o 

programmer.o: programmer.cpp programmer.h
	$(CC) $(FLAGS) -c programmer.cpp -o programmer.o

architect.o: architect.cpp architect.h 
	$(CC) $(FLAGS) -c architect.cpp -o architect.o

clean:
	rm *.o hw04 hw04.tar

tar:
	tar cf hw04.tar hw04.scr Makefile hw04.cpp lotto.h lotto.cpp employee.h employee.cpp employee.o programmer.h programmer.cpp programmer.o architect.h architect.cpp architect.o 