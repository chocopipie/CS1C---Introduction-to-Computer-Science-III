/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW07 : POINTERS & DYNAMIC ARRAYS
 *****************************************************************************/
#include "ManageInventory.h"

namespace mi
{
	ManageInventory::ManageInventory(): count(0), 
									p_pInventoryItems (new Item*[size]),
									purchaseQty(0)
	{} 



	ManageInventory::ManageInventory(int size): size(size), 
												count(0), 
												p_pInventoryItems(new Item*[size]),
												purchaseQty(size)
	{}



	ManageInventory::ManageInventory(const ManageInventory& ExistingInventory)
	{
		count = ExistingInventory.count;
		size = ExistingInventory.size;
		p_pInventoryItems = new Item*[size];
		//vector<int> purchaseQty;

		for (int i = 0; i < count; i++)
		{
			p_pInventoryItems[i] = ExistingInventory.p_pInventoryItems[i];
		}

		for (int j = 0; j < count; j++)
		{
			purchaseQty.push_back(ExistingInventory.purchaseQty[j]);
			//purchaseQty[j] = ExistingInventory.purchaseQty[j];
		}

	}



	ManageInventory::~ManageInventory()
	{
		for (int i = 0; i < count; i++)
		{
			p_pInventoryItems[i] = NULL;
		}
		delete [] p_pInventoryItems;
		purchaseQty.clear();
	}



	void ManageInventory::addItem(string name, int quantity, float cost)
	{
		Item* pItem = new Item;
		pItem->name = name;
		pItem->quantity = quantity;
		pItem->cost = cost;
		p_pInventoryItems[count] = pItem;

		count++;
	}


	void ManageInventory::addPurchase()
	{
		// purchase quantity of each inventory
		int nikeShoesQty;
		int armourQty;
		int brooksQty;
		int asicsQty;
		int nikeShortsQty;


		// prompt user for the quantity of each item they wish to buy
		cout << "\nEnter the number of each item you wish to buy:\n";
		cout << "Nike basketball shoes: ";
		cin >> nikeShoesQty;
		purchaseQty.push_back(nikeShoesQty);

		cout << "Under Armour T-shirt: ";
		cin >> armourQty;
		purchaseQty.push_back(armourQty);

		cout << "Brooks running shoes: ";
		cin >> brooksQty;
		purchaseQty.push_back(brooksQty);

		cout << "Asics running shoes: ";
		cin >> asicsQty;
		purchaseQty.push_back(asicsQty);

		cout << "Nike shorts: ";
		cin >> nikeShortsQty;
		purchaseQty.push_back(nikeShortsQty);
	}



	void ManageInventory::PrintItem() const
	{
		cout << "\nINVENTORY LIST: \n";
		cout << left;
		cout << setw(25) << "Name of equipment " << setw(12) << "Cost"
		<< "Quantity\n";
		for (int i = 0; i < count; i++)
		{
			cout << setw(25) << p_pInventoryItems[i]->name
			<< "$" << setw(12) << p_pInventoryItems[i]->cost 
			<< p_pInventoryItems[i]->quantity << endl;
		}
	}



	void ManageInventory::PrintReceipt() const
	{
		float totalCost;
		float tax;
		totalCost = 0;

		// PRINT THE BILL

		cout << "*** Purchase Bill ***\n";
		cout << left;
		for (int i = 0; i < count; i++)
		{ 
			if (purchaseQty[i] != 0)
			{
				totalCost += p_pInventoryItems[i]->cost * purchaseQty[i];
			}
			
		}

		cout << "Total Cost: $" << fixed << setprecision(2) << totalCost << endl;
		tax = totalCost * TAX_RATE / 100;
		cout << "Tax (8.25%): $" <<  fixed << setprecision(2) << tax;
		cout << "\nTotal with tax: $" << totalCost + tax << endl;
	}



	void ManageInventory::PrintAfterPurchase() const
	{
		cout << "\nINVENTORY LIST AFTER PURCHASE: \n";
		cout << left;
		cout << setw(25) << "Name of equipment " << setw(12) << "Cost"
		<< "Quantity\n";
		for (int i = 0; i < count; i++)
		{
			cout << setw(25) << p_pInventoryItems[i]->name
			<< "$" << setw(12) << p_pInventoryItems[i]->cost 
			<< p_pInventoryItems[i]->quantity - purchaseQty[i] << endl;
		}
	}



	void ManageInventory::PrintTransHist() const
	{
		cout << "\nTRANSACTION HISTORY:\n";
		cout << left;
		cout << "Item No.  " << setw(25) << "Name of equipment " 
			<< setw(12) << "Cost" << "Quantity\n";

		for (int i = 0; i < count; i++)
		{
			if (purchaseQty[i] != 0)
			{
				cout << setw(10) << i + 1 << setw(25) 
				<< p_pInventoryItems[i]->name
				<< "$" << setw(12) << p_pInventoryItems[i]->cost 
				<< purchaseQty[i] << endl;
			}
		}
	}
}
