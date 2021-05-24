/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW13 : EXCEPTIONS
 *****************************************************************************/
#include "exception_empty.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int queueSize;       // size of the queue array

	// test assert macro for user's input (pass)
	cout << "Enter the size of the queue array: ";
	cin >> queueSize;
	assert(queueSize > 0);  // check if queueSize is > 0
	cout << "The array of size " << queueSize << " is created.\n";

	queue<int> queue1(queueSize);  

	try
	{
		// adding elements to the array
		queue1.enqueue(1);
		queue1.enqueue(2);
		queue1.enqueue(3);
		queue1.enqueue(4);
		queue1.enqueue(5);
		queue1.enqueue(6);
		queue1.enqueue(7);

		//if (queue1.isFull())
		//	cout << "ERROR: Cannot add to a full array.\n";

		queue1.dequeue();
		queue1.dequeue();
		queue1.dequeue();
		queue1.dequeue();
		queue1.dequeue();
		queue1.dequeue();
		queue1.dequeue();

		// test removing from an empty queue
		queue1.dequeue();

		//if (queue1.isEmpty())
		//	throw 1;
	}
	catch(exception_full)
	{
		exception_full obj;
		cout << obj.what();
		// if 1 or 2
		//cout << "ERROR: Cannot delete from any empty array.\n";
	}
	catch(exception_empty)
	{
		exception_empty obj;
		cout << obj.what();
	}
	catch(const char* msg)
	{
		cout << msg << endl;
	}

	// test assert macro for getting the first element in the queue (fail bc the queue is empty)
	cout << queue1.getFront();

	
	return 0;
}