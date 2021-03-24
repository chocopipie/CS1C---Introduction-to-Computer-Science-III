CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = shapeClass.o circleClass.o rectangleClass.o

all: hw09ec

hw09ec: hw09ec.cpp shapeClass.o circleClass.o rectangleClass.o 
	$(CC) $(FLAGS) hw09ec.cpp -o hw09ec $(OBJS)

shapeClass.o: shapeClass.cpp shapeClass.h 
	$(CC) $(FLAGS) -c shapeClass.cpp -o shapeClass.o 

circleClass.o: circleClass.cpp circleClass.h 
	$(CC) $(FLAGS) -c circleClass.cpp -o circleClass.o 

rectangleClass.o: rectangleClass.cpp rectangleClass.h 
	$(CC) $(FLAGS) -c rectangleClass.cpp -o rectangleClass.o 

clean: 
	rm *.o hw09ec hw09ec.tar 

tar: 
	tar cf hw09ec.tar hw09ec.scr Makefile hw09ec.cpp shapeClass.h shapeClass.cpp circleClass.h circleClass.cpp rectangleClass.h rectangleClass.cpp