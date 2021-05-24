/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW13 : EXCEPTIONS
 *****************************************************************************/
#include<iostream>
#include<string>
#include<cassert>
#include<cmath>

using namespace std;

class exception_full;
class exception_empty;

template <typename T>
class queue
{
  public:

    /************************************
    ****  CONSTRUCTOR / DESTRUCTOR ****
    ***********************************/ 

/******************************************************
 * Constructor queue: Class queue
 * ___________________________________________________
 * This creates a default instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set by default
 * ****************************************************/
  queue(int size);
   

/******************************************************
 * Copy constructor queue: Class queue
 * ___________________________________________________
 * This creates a deep copy of the queue (from the 
 * existing object to the newly instantiated object)
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  Creates a deep copy of a queue to a newly instantiated 
 * obj
 * ****************************************************/  
  queue(const queue<T> &existingQueue);



/******************************************************
 * Overloaded copy assignment operator queue: Class queue
 * ___________________________________________________
 * This creates a deep copy of the queue (from the 
 * existing object to another existing object)
 * ___________________________________________________
 * PRE-CONDITIONS
 *  existing queue obj
 * 
 * POST-CONDITIONS
 *  Creates a deep copy of a queue to an existing obj 
 * obj
 * ****************************************************/  
  T& operator=(const queue<T> &rhsQueue);



/******************************************************
 * Destructor ~queue: Class queue
 * ___________________________________________________
 * This terminates instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The object will be destructed automatically,
 * deallocate the dynamic array
 * ****************************************************/
  ~queue();

    /******************
    **** MUTATORS  ****
    ******************/

/******************************************************
 * Method enqueue: Class queue
 * ___________________________________________________
 * This method inserts an element at the end of the 
 * queue
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  queueArray[rear] = queueElement
 * ****************************************************/
  void enqueue(const T &queueElement);


/******************************************************
 * Method dequeue: Class queue
 * ___________________________________________________
 * This method removes and returns the element at the 
 * front of the queue
 * ___________________________________________________
 * PRE-CONDITIONS
 *  T obj
 * 
 * POST-CONDITIONS
 *  removes and returns the element at the 
 * front of the queue
 * ****************************************************/
  void dequeue();    


  /*******************
   **** ACCESSORS ****
   *******************/

/******************************************************
 * Method getFront: Class queue
 * ___________________________________________________
 * This method returns the element at the front without
 * removing it.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  returns the element at the front of the queue array
 * ****************************************************/
  T getFront() const;


  /******************************************************
 * Method getRear: Class queue
 * ___________________________________________________
 * This method returns the element at the rear without
 * removing it.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  returns the element at the front of the queue array
 * ****************************************************/
  T getRear() const;


/******************************************************
 * Method size: Class queue
 * ___________________________________________________
 * This method returns the size of the queue array.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  returns the size of the queue array (int)
 * ****************************************************/
  int size() const;


/******************************************************
 * Method isEmpty: Class queue
 * ___________________________________________________
 * This method indicates whether or not elements 
 * are stored
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  returns true or false
 * ****************************************************/
bool isEmpty() const;


/******************************************************
 * Method isFull: Class queue
 * ___________________________________________________
 * This method indicates whether the queue is full 
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  returns true or false
 * ****************************************************/
bool isFull() const;


/******************************************************
 * Method PrintQueue: Class queue
 * ___________________________________________________
 * This method prints the queue to the screen
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  returns nothing
 * ****************************************************/
void PrintQueue() const;

private:
	int maxSize;             // maximum capacity of the queue
	int front;				 // front points to the front element in the queue
	int rear; 				 // rear points to the last element in the queue
	int count; 			     // size of the queue
	T *queueArray;   // array to store queue elements

  
};

template <class T>
queue<T>::queue(int size)
{
  maxSize = size;
  front = 0;
  rear = maxSize - 1;
  count = 0;
  queueArray = new T[maxSize];
}
   


template <class T>
queue<T>::queue(const queue<T> &existingQueue)
{
  queueArray = NULL;
  delete [] queueArray;

  // copy static variables
  maxSize = existingQueue.maxSize;
  count = existingQueue.count;
  front = existingQueue.front;
  rear = existingQueue.rear;

  // create a new dynamic array for the new obj's ptr
  queueArray = new T[existingQueue.maxSize];

  // copy the dynamic data
  for (int i=0; i<existingQueue.maxSize; ++i)
      queueArray[i] = existingQueue.queueArray[i];
}



template <class T> 
T& queue<T>::operator=(const queue<T> &rhsQueue)
{
  if (this != &rhsQueue)
  {
    T* queuePtr = new T[rhsQueue.maxSize]; // allocate new space for QueueType[]
    std::copy(rhsQueue.queueArray[front], rhsQueue.queueArray[front] + rhsQueue.queueArray[rear], queuePtr);
    delete [] queueArray; // deallocate old space
    queueArray = new T[rhsQueue.maxSize]; // create a new dynamic array for the new obj's ptr

    // copy dynamic data
    for (int i=0; i<maxSize; ++i)
        queueArray[i] = rhsQueue.queueArray[i];

    // copy static variables
    maxSize = rhsQueue.maxSize;
    count = rhsQueue.count;
    front = rhsQueue.front;
    rear = rhsQueue.rear; 
    
  }

  return *this;
}



template <class T>
queue<T>::~queue()
{
  delete[] queueArray;
}



template <class T>
bool queue<T>::isEmpty() const
{
  return (count == 0);
}



template <class T>
bool queue<T>::isFull() const
{
  return (count == maxSize);
}



template <class T>
int queue<T>::size() const
{
  return count;
}



template <class T>
T queue<T>::getFront() const
{
  assert(!isEmpty());
  //std::cout << "\nThe queue is empty.\n";
  return queueArray[front];
}


template <class T>
T queue<T>::getRear() const
{
  assert(!isEmpty());
  //std::cout << "\nThe queue is empty.\n";
  return queueArray[rear];
}


template <class T>
void queue<T>::PrintQueue() const
{
  queue<T> temp(*this);
  while (!temp.isEmpty())
  {
    std::cout << temp.getFront() << " ";
    temp.dequeue();
  }
  std::cout << std::endl;
}



template <class T>
void queue<T>::enqueue(const T &queueElement) 
{
  if (!isFull())
  {
    std::cout << "\nInserting " << queueElement << "...\n";
    rear = (rear + 1) % maxSize;
    count++;
    queueArray[rear] = queueElement;
  }
  else
  {
    //std::cout << "\nThe queue is full.\n";
    throw exception_full();
  }
}



template <class T>
void queue<T>::dequeue() 
{
  if (!isEmpty())
  {
    count--;
    front = (front + 1) % maxSize;
  }
  else
  {
    //std::cout << "\nThe queue is empty.\n";
    throw exception_empty();
  }
  
}

