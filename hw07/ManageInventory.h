/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW07 : POINTERS & DYNAMIC ARRAYS
 *****************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <limits>
#include <vector>
using namespace std;

namespace mi
{
    struct Item
    {
        string name;
        int quantity;
        float cost;
    };

    const int MAX_SIZE = 50;
    const int NUM_OF_PRODUCT = 5;
    const float TAX_RATE = 8.25;

    class ManageInventory
    {
    public:

    /************************************
        ****  CONSTRUCTOR / DESTRUCTOR ****
        ***********************************/    
    

    /******************************************************
     * Constructor ManageInventory: Class ManageInventory
     * ___________________________________________________
     * This creates a default instance of the class
     * ___________________________________________________
     * PRE-CONDITIONS
     *  <none>
     * 
     * POST-CONDITIONS
     *  This function sets the size, count, and p_pInventoryItem
     *  by default
     * ****************************************************/
    ManageInventory();

    /******************************************************
     * Constructor ManageInventory: Class ManageInventory
     * ___________________________________________________
     * This creates an instance of the class according to
     * parameter
     * ___________________________________________________
     * PRE-CONDITIONS
     *  <none>
     * 
     * POST-CONDITIONS
     *  size = size, count = 0, dynamically allocated 
     *  array of pointer p_pInventoryItem (of type Item)
     * ****************************************************/
    ManageInventory(int size);


    /******************************************************
     * Copy constructor ManageInventory: Class ManageInventory
     * ___________________________________________________
     * This creates a deep copy of an instance of the class 
     * object
     * ___________________________________________________
     * PRE-CONDITIONS
     *  an obj of class ManageInventory and a new obj
     *  of class ManageInventory
     * 
     * POST-CONDITIONS
     *  size = size
     * ****************************************************/
    ManageInventory(const ManageInventory& newInventory);


    /******************************************************
     * Destructor ~ManageInventory: Class ManageInventory
     * ___________________________________________________
     * This terminates instance of the class
     * ___________________________________________________
     * PRE-CONDITIONS
     *  <none>
     * 
     * POST-CONDITIONS
     *  The object will be destructed automatically
     * ****************************************************/
    ~ManageInventory();



        /******************
         **** MUTATORS ****
        ******************/

    /******************************************************
     * Method addItems: Class ManageInventory
     * ___________________________________________________
     * This method adds an Item to the dynamic array
     * ___________________________________________________
     * PRE-CONDITIONS
     *  obj Item
     * 
     * POST-CONDITIONS
     *  an inventory (Item type) is added to the dynamic array
     * ****************************************************/
    void addItem(string name, int quantity, float cost);


    /******************************************************
     * Method addPurchase: Class ManageInventory
     * ___________________________________________________
     * This method adds a purchased quantity to the vector
     * ___________________________________________________
     * PRE-CONDITIONS
     *  obj ManageInventory
     * 
     * POST-CONDITIONS
     *  a quantity (int) is added to the vector
     * ****************************************************/
    void addPurchase();


        /*******************
        **** ACCESSORS ****
        *******************/

    /******************************************************
     * Method PrintItem: Class ManageInventory
     * ___________________________________________________
     * This method prints out all information of each 
     * inventory.
     * ___________________________________________________
     * PRE-CONDITIONS
     *  none
     * 
     * POST-CONDITIONS
     *  all info related each inventory is printed on the 
     * screen
     * ****************************************************/
    void PrintItem() const;


    /******************************************************
     * Method PrintAfterPurchase: Class ManageInventory
     * ___________________________________________________
     * This method prints out all information of each 
     * inventory after the purchase.
     * ___________________________________________________
     * PRE-CONDITIONS
     *  none
     * 
     * POST-CONDITIONS
     * all info related each inventory after the purchase
     * is printed on the screen
     * ****************************************************/
    void PrintAfterPurchase() const;



    /******************************************************
     * Method PrintReceipt: Class ManageInventory
     * ___________________________________________________
     * This method prints out a receipt for the purchase
     * including the total cost before and after tax.
     * ___________________________________________________
     * PRE-CONDITIONS
     *  an obj of ManageInventory
     * 
     * POST-CONDITIONS
     *  total cost before and after tax are printed to the
     *  screen
     * ****************************************************/
    void PrintReceipt() const;


    /******************************************************
     * Method PrintTransHist: Class ManageInventory
     * ___________________________________________________
     * This method prints out a transaction history of
     * the purchase including the cost and quantity for items.
     * ___________________________________________________
     * PRE-CONDITIONS
     *  an obj of ManageInventory
     * 
     * POST-CONDITIONS
     *  cost and quantity of all purchased items are 
     *  printed to the
     *  screen
     * ****************************************************/
    void PrintTransHist() const;


    private:
    int size{MAX_SIZE};
    int count;
    Item **p_pInventoryItems;
    vector<int> purchaseQty;

    };
}
