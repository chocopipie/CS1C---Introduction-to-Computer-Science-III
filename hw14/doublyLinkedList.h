/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW14 : LINKED LIST
 *****************************************************************************/
#include <iostream>
using namespace std;

template <class T>
struct ListNode
{
	T info;
	ListNode<T> *prev;
	ListNode<T> *next;
};

template <class T>
class DoublyLinkedList
{
public:
	DoublyLinkedList(); // constructor
	DoublyLinkedList(const DoublyLinkedList<T> &existingList); // copy constructor
	const DoublyLinkedList<T> &operator=(const DoublyLinkedList<T> &rhsList);
	~DoublyLinkedList(); // destructor

	/* ---- ACCESSOR ----- */
	bool isEmpty() const;   // check if the list is empty or not
	void PrintList() const;  // print the list
	void PrintListReverse() const; // print the list in reverse order
	// int getSize() const;    // return number of nodes in the list
	void search(const T &searchItem); // search for an item in the list
	
	/* ------ MUTATOR ------ */
	void insertFront(const T &insertItem);  // insert a node to the front
	void insertBack(const T &insertItem);  // insert a node to the back
	void insertMiddle(const T &insertItem);  // insert a node to the middle
	void deleteNode(const T &deleteItem);  // delete a node from the list
	void reverseList();  // reverse the list

private:
	int count;
	ListNode<T>* head;
	ListNode<T>* tail;
};


/******************************************************************************
 * CONSTRUCTOR
 * ----------------------------------------------------------------------------
 * Initialize the list to an empty list
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * obj of DoublyLinkedList class
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * an empty obj
 *****************************************************************************/
template <class T>
DoublyLinkedList<T>::DoublyLinkedList()
{
	head = nullptr;
	tail = nullptr;
	count = 0;
}


/******************************************************************************
 * DESTRUCTOR
 * ----------------------------------------------------------------------------
 * Destroy the instance of the DoublyLinkedList class
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * obj of DoublyLinkedList class
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * de-allocate all memory
 *****************************************************************************/
template <class T>
DoublyLinkedList<T>::~DoublyLinkedList()
{
	ListNode<T> *tempNode;
	

	while (head != nullptr)
	{
		tempNode = head;
		head = tempNode->next;
		delete tempNode;
	}
	tail = nullptr;
	count = 0;
}



/******************************************************************************
 * COPY CONSTRUCTOR
 * ----------------------------------------------------------------------------
 * Create a deep copy of the existing linked list to a newly instantiated list 
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * newly instantiated obj of DoublyLinkedList class
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * a newly instantiated obj DoublyLinkedList is initialized to the value of 
 * the existing list
 *****************************************************************************/
template <class T> 
DoublyLinkedList<T>::DoublyLinkedList(const DoublyLinkedList<T> &existingList)
{
	ListNode<T> *currentNode;// ptr to the current node, traverse through the list

	head = nullptr;
	tail = nullptr;
	count = 0;

	currentNode = existingList.head;

	while (currentNode != nullptr)
	{
		insertBack(currentNode->info);      // create a node (data copied) and insert it to the back
		currentNode = currentNode->next;   
	}
}


/******************************************************************************
 * COPY OPERATION
 * ----------------------------------------------------------------------------
 * Create a deep copy of the existing linked list to an existing instantiated 
 * list 
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * an obj of DoublyLinkedList class
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * a newly instantiated obj DoublyLinkedList is initialized to the value of 
 * the existing list
 *****************************************************************************/
template <class T>
const DoublyLinkedList<T> &DoublyLinkedList<T>::operator=(const DoublyLinkedList<T> &rhsList)
{
	//ListNode<T> *newNode;    // ptr to the new node
	ListNode<T> *currentNode; // ptr to the current node, traverse through the list

	
	if (head != nullptr)
	{
		ListNode<T> *tempNode;
		while (head != nullptr)
		{
			tempNode = head;
			head = head->next;
			delete tempNode;
		}
		tail = nullptr;
		count = 0;
	}

	currentNode = rhsList.head;

	while (currentNode != nullptr)
	{
		insertBack(currentNode->info);      // create a node (data copied) and insert it to the back
		currentNode = currentNode->next;   
	}
	
	return *this;
}


/******************************************************************************
 * FUNCTION: isEmpty
 * ----------------------------------------------------------------------------
 * Check if the list is empty or not
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * an obj of DoublyLinkedList class
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * return a bool
 *****************************************************************************/
template<class T>
bool DoublyLinkedList<T>::isEmpty() const  // check if the list is empty or not
{
	return (head == nullptr);
}


/******************************************************************************
 * FUNCTION PrintList
 * ----------------------------------------------------------------------------
 * Print the list to the screen
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * obj of DoublyLinkedList class
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * print all the nodes in the list on the screen
 *****************************************************************************/
template<class T>
void DoublyLinkedList<T>::PrintList() const  // print the list
{
	ListNode<T> *currentNode = head;

	while (currentNode != nullptr)
	{
		cout << currentNode->info << " ";
		currentNode = currentNode->next;
	}
	cout << endl;
}


/******************************************************************************
 * FUNCTION PrintListReverse
 * ----------------------------------------------------------------------------
 * Print the list to the screen reverserly
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * obj of DoublyLinkedList class
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * print all the nodes in the list on the screen
 *****************************************************************************/
template<class T>
void DoublyLinkedList<T>::PrintListReverse() const // print the list in reverse order
{
	ListNode<T> *currentNode = tail;
	while (currentNode != nullptr)
	{
		cout << currentNode->info << " ";
		currentNode = currentNode->prev;
	}
	cout << endl << endl;
}


/******************************************************************************
 * FUNCTION search
 * ----------------------------------------------------------------------------
 * search for the node containing the item user wanna find
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * obj of DoublyLinkedList class, T object (search item)
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * the position of the node containing the searchItem
 *****************************************************************************/
template<class T>
void DoublyLinkedList<T>::search(const T &searchItem) // search for an item in the list
{
	ListNode<T> *currentNode = head;
	bool found = false;
	int position;
	position = 1;

	if (currentNode == nullptr)
	{
		cout << "\nCan't search an empty list.\n";
	}
	else
	{
		while (currentNode != nullptr && !found)
		{
			if (currentNode->info == searchItem)
			{
				found = true;
			}
			else
			{
				currentNode = currentNode->next;
				position++;
			}
		}
	}
	
	if (currentNode == nullptr)
	{
		cout << "\nI'm sorry, " << searchItem << " was NOT found.\n";
	}
	else
	{
		cout << "\nFound " << searchItem << " at position " << position << " of the list.\n";
	}
}



/******************************************************************************
 * FUNCTION insertFront
 * ----------------------------------------------------------------------------
 * sinserts the node to the front of the list
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * obj of DoublyLinkedList class, T object (insert item)
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * the node is inserted to the front of the list (head = insertItem)
 *****************************************************************************/
template<class T>
void DoublyLinkedList<T>::insertFront(const T &insertItem)  // insert a node to the front
{
	ListNode<T> *newNode;
	newNode = new ListNode<T>;
	newNode->info = insertItem; 

	newNode->next = head;
	newNode->prev = nullptr;
	if (head != nullptr)
	{
		head->prev = newNode;
	}

	head = newNode;

	// update the tail (when the new node is at the end of the list)
	if (newNode->next == nullptr)
	{
		tail = newNode;
	}

	count++;
}



/******************************************************************************
 * FUNCTION insertBack
 * ----------------------------------------------------------------------------
 * sinserts the node to the back of the list
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * obj of DoublyLinkedList class, T object (insert item)
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * the node is inserted to the back of the list (tail = insertItem)
 *****************************************************************************/
template<class T>
void DoublyLinkedList<T>::insertBack(const T &insertItem)  // insert a node to the back
{
	ListNode<T> *newNode;
	newNode = new ListNode<T>;
	newNode->info = insertItem; 

	newNode->next = nullptr;

	if (head == nullptr)   // if the list is empty
	{
		head = newNode;
		tail = newNode;
		newNode->prev = nullptr;
	}
	else
	{
		newNode->prev = tail;
		tail->next = newNode;
		tail = newNode;
	}

	count++;
}



/******************************************************************************
 * FUNCTION insertMiddle
 * ----------------------------------------------------------------------------
 * sinserts the node to the middle of the list
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * obj of DoublyLinkedList class, T object (insert item)
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * the node is inserted to the middle of the list 
 *****************************************************************************/
template<class T>
void DoublyLinkedList<T>::insertMiddle(const T &insertItem)  // insert a node to the middle
{
	ListNode<T> *currentNode;   // the ptr to the node goes through the list
	int position;    // position of the node in the middle
	position = count / 2;
	currentNode = head;

	ListNode<T> *newNode = new ListNode<T>;
	newNode->info = insertItem;


	for (int i = 1; i < position; i++)
	{
		currentNode = currentNode->next;
	}
	
	// NEED TO HANDLE CASE WHEN THERE IS NO NODE OR ONE NODE
	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
		newNode->next = nullptr;
		newNode->prev = nullptr;
	}
	else if (head->next == nullptr)
	{
		currentNode->next = newNode;
		newNode->prev = currentNode;
		newNode->next = nullptr;
	}
	else
	{
		newNode->prev = currentNode;
		newNode->next = currentNode->next;
		currentNode->next->prev = newNode;
		currentNode->next = newNode;
	}

}



/******************************************************************************
 * FUNCTION deleteNode
 * ----------------------------------------------------------------------------
 * delete the node from the list
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * obj of DoublyLinkedList class, T object (delete item)
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * delete the node from the list
 *****************************************************************************/
template<class T>
void DoublyLinkedList<T>::deleteNode(const T &deleteItem)  // delete a node from the list
{
	ListNode<T> *currentNode;    // the node user wanna delete
	
	bool found = false;
	currentNode = head;

	if (currentNode == nullptr)
	{
		cout << "\nCAN't delete from an EMPTY list.\n";
	}
	else
	{
		while (currentNode != nullptr && !found)
		{
			if (currentNode->info == deleteItem)
			{
				found = true;
			}
			else
			{
				currentNode = currentNode->next;
			}	
		}

		if (currentNode == nullptr)
		{
			cout << "\nThe node is not in the list.\n";
		}
		else
		{
			// case: remove first node
			if (currentNode == head)
			{
				head = currentNode->next;
				// case: the only node
				if (currentNode->next != nullptr)  
				{
					currentNode->next->prev = nullptr;
				}
			}
			// case: remove node in the middle or end
			else  
			{
				currentNode->prev->next = currentNode->next;
				if (currentNode->next != nullptr)
				{
					currentNode->next->prev = currentNode->prev;
				}
			}

			delete currentNode;
			currentNode = nullptr;
		}
	}
}



/******************************************************************************
 * FUNCTION ireverseList
 * ----------------------------------------------------------------------------
 * reverse the list
 * ----------------------------------------------------------------------------
 * PRECONDITION:
 * obj of DoublyLinkedList class
 * ----------------------------------------------------------------------------
 * POSTCONDITION:
 * the list is reversed
 *****************************************************************************/
template<class T>
void DoublyLinkedList<T>::reverseList()
{
	ListNode<T> *ptr1 = head;
	ListNode<T> *ptr2 = ptr1->next;

	ptr1->next = nullptr;
	ptr1->prev = ptr2;

	while (ptr2 != nullptr)
	{
		ptr2->prev = ptr2->next;
		ptr2->next = ptr1;
		ptr1 = ptr2;
		ptr2 = ptr2->prev;
	}

	head = ptr1;
}




