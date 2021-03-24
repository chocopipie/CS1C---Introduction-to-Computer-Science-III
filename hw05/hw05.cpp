/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW05 : STL VECTORS
 *****************************************************************************/
#include <iostream>
#include <vector>
#include <ios>
#include <limits>
#include <algorithm>
using namespace std;

// Function prototypes
vector<int> Lotto(int totalNum, int randomNum);
void PrintLotto(vector<int> const &WinningLotto);


/******************************************************
 * PROGRAM STL VECTORS
 * ___________________________________________________
 * This is the lottery card game. The card has numbered
 * spots of which a certain number are selected at 
 * random. User is prompted to enter the range and amount
 * of winning lottery ticket.
 * The vector of lottery number is randomly shuffled 
 * to get the numbers of winning numbers that user wants.
 * ****************************************************/
int main()
{
	int shuffleRange;    // the range of shuffle
	int winningCount;    // the count of winners

	// declare a vector of winners
	vector<int> winners;

	// prompt users for the range of lottery numbers
	cout << "Enter the range: ";
	cin >> shuffleRange;

	// prompt users for the count of winners
	cout << "Enter number of winner: ";
	cin >> winningCount;

	winners = Lotto(shuffleRange, winningCount);

	cout << "\nSelecting " << winningCount << " winners in the range of "
	<< shuffleRange << endl;
	PrintLotto(winners);

	return 0;
}


/******************************************************
 * FUNCTION Lotto
 * ___________________________________________________
 * This function creates a vector of lottery numbers 
 * and randomly shuffles it. After randomly shuffling, 
 * the first amount of chosen winning number will be
 * added to the vector containing winning lottery 
 * numbers. That vector is sorted and returned. 
 * ___________________________________________________
 * PRE-CONDITIONS
 *  totalNum: the range of shuffling, size of vector
 *			  to shuffle for lottery
 *  randomNum: the number of winners selected
 * 
 * POST-CONDITIONS
 * This function creates a vector of lottery numbers 
 * and randomly shuffles it. After randomly shuffling, 
 * the first amount of chosen winning number will be
 * added to the vector containing winning lottery 
 * numbers. That vector is sorted and returned. 
 * ****************************************************/
vector<int> Lotto(int totalNum, int randomNum)
{
	vector<int> lotteryPile;
	vector<int> winningValues;   // contains winning values

	// set the values to the vector
	for (int i = 0; i < totalNum; ++i)
	{
		lotteryPile.push_back(i);
	}

	// using built-in random generator to shuffle the vector
	random_shuffle(lotteryPile.begin(), lotteryPile.end() );
	
	// select winners based on passed parameters
	for (int i = 0; i < randomNum; ++i)
	{
		winningValues.push_back(lotteryPile[i]);
	}

	// sort the winning vector in ascending order
	sort(winningValues.begin(), winningValues.end());

	return winningValues;
}


/******************************************************
 * FUNCTION PrintLotto
 * ___________________________________________________
 * This prints the lottery winners to the screen
 * ___________________________________________________
 * PRE-CONDITIONS
 *  WinningLotto - a vector containing winning lottery
 *                 numbers
 * 
 * POST-CONDITIONS
 *  This function prints the lottery winners to the screen
 * ****************************************************/
void PrintLotto(vector<int> const &WinningLotto)
{
	cout << "The winning numbers: ";
	for (unsigned int i=0; i < WinningLotto.size(); i++)
	{
		cout << WinningLotto.at(i) << ' ';
	}
	cout << endl;
}


/* 1. What is the STL? What is a vector?
	- The Standard Template Library (or STL) is a collection of data types and algorithms
	that are programmer-defined. The data types that are defined in the STL are commonly
	called 'containers' because they store and organize data.
	- The 'vector' data type is a sequence container. It holds a sequence of values, or 
	elements; stores its elements in contiguous memory locations (dynamic array).

2. Which vector operations change the size of a vector after its construction?
	resize()

3. What is the STL array container and how does it differ from the built-in array and
from a vector?
	- Array container in STL: static array, pass by value, .size()
	- Built-in array: static array, decay to pointer, pass the array size
	- Vector: dynamic array, pass by value, .size()
	- Assignment can be used in vector and STL array
	- STL array member functions:
		front(), back(), fill(), swap(), empty(), size(), max_size(), begin(), end()

4. How does the vector member funtion resize() differ from reserve()?
	- resize() method will insert or delete appropriate number of elements to the vector
	to make it given size. It will affect the size(), and the elements can be directly
	accessed.
	- reserve() method only allocates memory, but leaves it uninitialized. It only 
	affect capacity(), but size() will be unchanged

5. What should begin() and end() do for a container?
	- begin() function is used to return an iterator pointing to the first element of 
	the array container. 
	- end() returns an iterator pointing to the past-the-end element in the array container.

6. Give an example of using the vector push_back() modifier.
	vector<int> intVector;
	intVector.push_back(8); */
