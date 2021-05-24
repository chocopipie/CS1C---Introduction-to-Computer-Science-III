/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW14 : LINKED LIST
 *****************************************************************************/
#include "doublyLinkedList.h"

/******************************************************************************
 * PROGRAM : DOUBLY LINKED LIST
 * ---------------------------------------------------------------------------
 * This program using the doubly linked list implementation to creat a list obj, 
 * insert to the back, create a deep copy using copy constructor and copy 
 * assignment, create a list in the reverse order, and print the list
 *****************************************************************************/
int main()
{
	 // instantiate a DoublyLinkedList + type int => a doubly linked list of int
	DoublyLinkedList<int> List1;  
	List1.insertBack(88);
	List1.insertBack(78);
	List1.insertBack(62);
	List1.insertBack(143);
	List1.insertBack(60);
	cout << "Part 1:\n";
	cout << "Linked list 1: ";
	List1.PrintList();
	   
	cout << "\nPart 2:\n";
	DoublyLinkedList<int> CopyList = List1;
	cout << "Linked list 1 copy constructor: ";
	CopyList.PrintList();

	DoublyLinkedList<int> OverloadedList;
	OverloadedList.insertBack(1);
	OverloadedList.insertBack(2);
	OverloadedList.insertBack(3);
	OverloadedList = List1;
	cout << "Linked list 1 copy assignment: ";
	OverloadedList.PrintList();
	 
	cout << "\nPart3:\n";
	DoublyLinkedList<int> List2 = List1;
	List2.reverseList();
	cout << "Linked list 2: ";
	List2.PrintList();

	cout << "\nPart4(after deleting the third node):\n";
	List1.deleteNode(62);
	List2.deleteNode(62);
	cout << "Linked list 1: ";
	List1.PrintList();
	cout << "Linked list 2: ";
	List2.PrintList();
     

	cout << "\nPart 5 (after adding a node in the middle of the list):\n";
	List1.insertMiddle(70);	
	cout << "Linked list 1: ";
	List1.PrintList(); 
	List2.insertMiddle(70); 
	cout << "Linked list 2: ";
	List2.PrintList(); 


	/* ----------- DOUBLES ------------ */
	// instantiate a DoublyLinkedList + type int => a doubly linked list of int
	DoublyLinkedList<double> List1a;  
	List1a.insertBack(88.8);
	List1a.insertBack(78.7);
	List1a.insertBack(62.6);
	List1a.insertBack(143.1);
	List1a.insertBack(60.6);
	cout << "Part 1:\n";
	cout << "Linked list 1: ";
	List1a.PrintList();   
	   
	cout << "\nPart 2:\n";
	DoublyLinkedList<double> CopyLista; 
	CopyLista = List1a;
	cout << "Linked list 1 copy constructor: ";
	CopyLista.PrintList();


	DoublyLinkedList<double> OverloadedLista;
	OverloadedLista.insertBack(1.1);
	OverloadedLista.insertBack(2.2);
	OverloadedLista.insertBack(3.3);
	OverloadedLista = List1a;
	cout << "Linked list 1 copy assignment: ";
	OverloadedLista.PrintList();
	
	cout << "\nPart3:\n";
	DoublyLinkedList<double> List2a = List1a;
	List2a.reverseList();
	cout << "Linked list 2: ";
	List2a.PrintList();

	cout << "\nPart4(after deleting the third node):\n";
	List1a.deleteNode(62.6);
	List2a.deleteNode(62.6);
	cout << "Linked list 1: ";
	List1a.PrintList();
	cout << "Linked list 2: ";
	List2a.PrintList();
    
	cout << "\nPart 5 (after adding a node in the middle of the list):\n";
	List1a.insertMiddle(70.1);	
	cout << "Linked list 1: ";
	List1a.PrintList();
	List2a.insertMiddle(70.1);
	cout << "Linked list 2: ";
	List2a.PrintList();
	

	return 0;
}