#include "queue.h"

template <typename T>
struct nodeType
{
    T item;
    nodeType<T> *next;
};

template <typename T>
class linkedQueue
{
  public:

    /************************************
    ****  CONSTRUCTOR / DESTRUCTOR ****
    ***********************************/ 

/******************************************************
 * Constructor linkedQueue: Class linkedQueue
 * ___________________________________________________
 * This creates a default instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set by default
 * ****************************************************/
  linkedQueue();
   

/******************************************************
 * Copy constructor linkedQueue: Class linkedQueue
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
  linkedQueue(const linkedQueue<T> &existingQueue);



/******************************************************
 * Overloaded copy assignment operator=: Class linkedQueue
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
  //T& operator=(const linkedQueue<T> &rhsQueue);



/******************************************************
 * Destructor ~linkedQueue: Class linkedQueue
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
  ~linkedQueue();

    /******************
    **** MUTATORS  ****
    ******************/

/******************************************************
 * Method enqueue: Class linkedQueue
 * ___________________________________________________
 * This method inserts an element at the end of the 
 * queue
 * ___________________________________________________
 * PRE-CONDITIONS
 *  the queue exists and is not full
 * 
 * POST-CONDITIONS
 *  queueElement is added to the queue
 * ****************************************************/
  void enqueue(const T &queueElement);


/******************************************************
 * Method dequeue: Class linkedQueue
 * ___________________________________________________
 * This method removes element at the 
 * front of the queue
 * ___________________________________________________
 * PRE-CONDITIONS
 *  the queue exists and is not empty
 * 
 * POST-CONDITIONS
 *  removes the element at the front of the queue
 * ****************************************************/
  void dequeue();    


  /*******************
   **** ACCESSORS ****
   *******************/

/******************************************************
 * Method getFront: Class linkedQueue
 * ___________________________________________________
 * This method returns the element at the front without
 * removing it.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  the queue exists and is not empty
 * 
 * POST-CONDITIONS
 *  returns the element at the front of the queue 
 * ****************************************************/
  T getFront() const;


  /******************************************************
 * Method getRear: Class linkedQueue
 * ___________________________________________________
 * This method returns the element at the rear without
 * removing it.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  the queue exists and is not empty
 * 
 * POST-CONDITIONS
 *  returns the element at the front of the queue array
 * ****************************************************/
  T getRear() const;


/******************************************************
 * Method size: Class linkedQueue
 * ___________________________________________________
 * This method returns the size of the queue (item in 
 * the list).
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  returns the number of items in the list (int)
 * ****************************************************/
  int size() const;


/******************************************************
 * Method isEmpty: Class linkedQueue
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
 * Method isFull: Class linkedQueue
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
  nodeType<T> *head;   // ptr to the front of the list
  nodeType<T> *tail;   // ptr to the rear of the list
};


// ---------------------------------------------------------------------------

template <typename T>
linkedQueue<T>::linkedQueue()
{
  head = nullptr;
  tail = nullptr;
}



// need change
template <typename T>
linkedQueue<T>::linkedQueue(const linkedQueue<T> &existingQueue)
{
  nodeType<T> *tempNode = new nodeType<T>;
  tempNode = existingQueue.head; 
  while (tempNode != nullptr)
  {
    enqueue(tempNode->item);
    tempNode = tempNode->next;
  } 
}



template <typename T>
linkedQueue<T>::~linkedQueue()
{
  nodeType<T> *tempNode;
  tempNode = head;
  while (tempNode != nullptr)
  {

    head = head->next;
    delete tempNode;

    tempNode = head;
  }
  head = nullptr;
  tail = nullptr;
}



template <typename T>
bool linkedQueue<T>::isFull() const
{
  return false;
}



template <typename T>
bool linkedQueue<T>::isEmpty() const
{
  return (head == nullptr);
}



template <typename T>
T linkedQueue<T>::getFront() const
{
  assert(head != nullptr);
  return head->item;
}



template <typename T>
T linkedQueue<T>::getRear() const
{
  assert(tail != nullptr);
  return tail->item;
}



template <typename T>
int linkedQueue<T>::size() const
{
  int queueSize;

  while (tail != nullptr)
  {
    tail = tail->next;
    queueSize++;
  }
  return queueSize;
}



template <typename T>
void linkedQueue<T>::enqueue(const T &queueElement)
{
  nodeType<T>* tempNode = new nodeType<T>;
  tempNode->item = queueElement;
  tempNode->next = nullptr;
  
  if (isEmpty())
  {
    head = tempNode;
    tail = tempNode;
  }
  else
  {
    tail->next = tempNode;
    tail = tail->next; 
  }
}



template <typename T>
void linkedQueue<T>::dequeue()
{
  nodeType<T>* tempNode;
  if (!isEmpty())
  {
    tempNode = head;
    head = head->next;
    delete tempNode;
    tempNode = nullptr;

    if (head == nullptr)
    {
      tail = nullptr;
    }
  }
  else 
  {
    std::cout << "Cannot remove from an empty queue.\n";
  }
}


template <typename T>
void linkedQueue<T>::PrintQueue() const
{
  nodeType<T> *tempNode;
  tempNode = head;

  while (tempNode != nullptr)
  {
    std::cout << tempNode->item << " ";
    tempNode = tempNode->next;
  }
}