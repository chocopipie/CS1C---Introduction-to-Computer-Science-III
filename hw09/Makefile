CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = shapeClass.o triangleClass.o rectangleClass.o 

all: hw09

hw09: hw09.cpp shapeClass.o triangleClass.o rectangleClass.o 
	$(CC) $(FLAGS) hw09.cpp -o hw09 $(OBJS)

shapeClass.o: shapeClass.cpp shapeClass.h
	$(CC) $(FLAGS) -c shapeClass.cpp -o shapeClass.o 

triangleClass.o: triangleClass.cpp triangleClass.h
	$(CC) $(FLAGS) -c triangleClass.cpp -o triangleClass.o 

rectangleClass.o: rectangleClass.cpp rectangleClass.h
	$(CC) $(FLAGS) -c rectangleClass.cpp -o rectangleClass.o 

clean:
	rm *.o hw09 hw09.tar 

tar: 
	tar cf hw09.tar hw09.scr Makefile hw09.cpp shapeClass.h shapeClass.cpp triangleClass.h triangleClass.cpp rectangleClass.h rectangleClass.cpp 