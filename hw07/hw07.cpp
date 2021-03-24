/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW07 : POINTERS & DYNAMIC ARRAYS
 *****************************************************************************/
#include "ManageInventory.h"



int main()
{
	mi::ManageInventory Inventory1;

	// add items to the inventory list
	Inventory1.addItem("Nike basketball shoes", 22, 145.99);
	Inventory1.addItem("Under Armour T-shirt", 33, 29.99);
	Inventory1.addItem("Brooks running shoes", 11, 111.44);
	Inventory1.addItem("Asics running shoes", 20, 165.88);
	Inventory1.addItem("Nike shorts", 77, 45.77);

	// print the inventory list
	cout << "LIST 1:\n";
	Inventory1.PrintItem();

	// prompt user for the quantity of each item they want to purchase
	Inventory1.addPurchase();

	// PRINT RECEIPT
	cout << endl;
	Inventory1.PrintReceipt();

	// PRINT INVENTORY AFTER PURCHASE
	cout << endl << endl;
	Inventory1.PrintAfterPurchase();

	// PRINT TRANSACTION HISTORY
	cout << endl << endl;
	Inventory1.PrintTransHist();
	

	// TEST COPY CONSTRUCTOR
	// instantiate a new inventory management obj
	//	 which is the copy of the original
	mi::ManageInventory Inventory2(Inventory1);

	cout << endl;
	// print the inventory list of the new object
	cout << "LIST 2:\n";
	Inventory2.PrintItem();

	// print the transaction history of the new obj
	Inventory2.PrintTransHist();
	//Inventory2.PrintAfterPurchase();
	return 0;
}
