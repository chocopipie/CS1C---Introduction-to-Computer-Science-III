/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW12 : TEMPLATES (QUEUES)
 *****************************************************************************/
#include <iostream>
#include "linkedQueue.h"



int main()
{

  /* *******linkedQueue (int) **********/
  linkedQueue <int> queuehaha;
  queuehaha.dequeue();
  queuehaha.enqueue(2);
  queuehaha.enqueue(3);
  queuehaha.enqueue(4);
  queuehaha.PrintQueue();
  if (queuehaha.isEmpty())
    std::cout << "Empty\n";
  else
    std::cout << "Not empty\n";
  queuehaha.dequeue();
  queuehaha.dequeue();
  queuehaha.PrintQueue();
  queuehaha.dequeue();
    if (queuehaha.isEmpty())
    std::cout << "Empty\n";
  else
    std::cout << "Not empty\n";
  

  
  
  /******* queue1 (int) *****************/
	queue <int> queue1(20);
	queue1.enqueue(1);
	queue1.enqueue(2);
	queue1.enqueue(3);
	queue1.enqueue(4);
	queue1.enqueue(5);
	queue1.enqueue(6);
	queue1.PrintQueue();



  queue1.dequeue();
  queue1.dequeue();
  queue1.dequeue();
  queue1.dequeue();
  queue1.PrintQueue();


  
  queue1.enqueue(10);
  queue1.enqueue(20);
  queue1.enqueue(30);
  queue1.enqueue(40);
  queue1.enqueue(50);
  queue1.PrintQueue();

  /******* queue2 (double) *****************/
	queue <double> queue2(20);
	queue2.enqueue(3.4);
	queue2.enqueue(1.4);
	queue2.enqueue(8.5);
  queue2.enqueue(4.2);
  queue2.enqueue(9.3);
  queue2.enqueue(6.4);
	queue2.PrintQueue();


  queue2.dequeue();
  queue2.dequeue();
  queue2.dequeue();
  queue2.dequeue();
  queue2.PrintQueue();

  
  queue2.enqueue(3.7);
  queue2.enqueue(10.4);
  queue2.enqueue(3.5);
  queue2.enqueue(26.4);
  queue2.enqueue(9.4);
  queue2.PrintQueue();

    /******* queue1 (string) *****************/
	queue <std::string> queue3(20);
	queue3.enqueue("cat");
	queue3.enqueue("dog");
  queue3.enqueue("mouse");
  queue3.enqueue("tiger");
  queue3.enqueue("monkey");
  queue3.enqueue("goat");
	queue3.PrintQueue();


  queue3.dequeue();
  queue3.dequeue();
  queue3.dequeue();
  queue3.dequeue();
  queue3.PrintQueue();


  
  queue3.enqueue("turtle");
  queue3.enqueue("bird");
  queue3.enqueue("tiger");
  queue3.enqueue("cow");
  queue3.enqueue("gorilla");
  queue3.PrintQueue(); 
	return 0;
}

