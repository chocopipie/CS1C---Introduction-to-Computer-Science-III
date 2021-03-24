/****************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C 
 * ASSIGNMENT #1 : Random Numbers
 * **************************************************************/
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<limits>
#include<ios>
#include<string>
#include<fstream>
using namespace std;

enum menu
{
	SUMDIGITS,
	TRIPLE,
	REVERSE
};

int GetRandomNum();
void PrintMenu();
int SumDigits(int randomNum);
int TripleNum(int randomNum);
void ReverseDigit(int randomNum);
void GetArray(int RandomNumArray[], const int SIZE);
void SortArray(int RandomNumArray[], const int SIZE);
void WriteArrayToFile(ostream& OutFile, int RandomNumArray[], const int SIZE);
void ReadArrayFromFile(ifstream& InFile, int RandomNumArray[], const int SIZE);
void PrintArray(int RandomNumArray[], const int SIZE);
const int SIZE = 10;

int main()
{
	ofstream outFile; // external output file
	ifstream inFile;  // external input file
	int randomNum;    // a random number
	int choice;       // choice from the main menu
	menu action;      // enum value of menu choices
	bool invalid;
	int RandomNumArray[SIZE];
	string welcomeQuote = "WELCOME!\n\n";

	cout << welcomeQuote;
	
	// Print the menu to the screen
	PrintMenu();

	srand(time(NULL));

	// Get the generated random number
	randomNum = GetRandomNum();
	cout << randomNum << endl << endl;

	do
	{
		invalid = false;
		cout << "Enter your choice: ";
		if (!(cin >> choice))
		{
			cout << "Please enter a number from 1 to 3.\n";
			cin.clear();

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if (choice < 1 || choice > 3)
		{
			cout << "Please enter a number from 1 to 3.\n";
		}
		else
		{
			invalid = true;
		}
	} while (!invalid);

	switch (choice)
	{
	case 1: action = SUMDIGITS;
		break;
	case 2: action = TRIPLE;
		break;
	case 3: action = REVERSE;
		break;
	}

	switch (action)
	{
	case SUMDIGITS:
		cout << "The sum of the digits is " << SumDigits(randomNum) << ".\n\n";
		break;
	case TRIPLE:
		cout << "Tripled value: " << TripleNum(randomNum) << endl << endl;
		break;
	case REVERSE:
		cout << "Reverse the digits: ";
		ReverseDigit(randomNum);
		cout << endl << endl;
		break;
	}

	// Get the array of 10 random numbers
	GetArray(RandomNumArray, SIZE);

	// Sort the array
	SortArray(RandomNumArray, SIZE);

	// Open the external input file
	outFile.open("OutFile.txt");

	// Write an array the an external file
	WriteArrayToFile(outFile, RandomNumArray, SIZE);

	// Close the external file
	outFile.close();

	// Open the external output file
	inFile.open("OutFile.txt");

	// Read the external input file to an array
	ReadArrayFromFile(inFile, RandomNumArray, SIZE);

	// Close the external input file
	inFile.close();

	// Print the array
	PrintArray(RandomNumArray, SIZE);

	return 0;
}

/************************************************************************************
 * This function generates a random number from 100 to 999
 * - returns an int
 ************************************************************************************/
int GetRandomNum()
{
	int myRandomValue;

	myRandomValue = rand() % 900 + 100;

	return myRandomValue;
}


/************************************************************************************
* This function prints a menu to the screen
* - returns nothing
 ************************************************************************************/
void PrintMenu()
{
	cout << "1. Sum the digits\n";
	cout << "2. Triple the number\n";
	cout << "3. Reverse the digit\n\n";
}



/************************************************************************************
 * This function sum the digits of the random number
 * - returns an int
 ************************************************************************************/
int SumDigits(int randomNum)
{
	typedef int digit;
	digit one;       // the digit in ones place
	digit ten;       // the digit in tens place
	digit hundred;   // the digit in hundreds place

	one = randomNum % 10;
	ten = randomNum % 100 / 10;
	hundred = randomNum % 1000 / 100;

	return one + ten + hundred;
}


/************************************************************************************
 * This function triples the number
 * - returns an int
 ************************************************************************************/
int TripleNum(int randomNum)
{
	return 3 * randomNum;
}


/************************************************************************************
 * This function prints the reversed the digits
 * - returns nothing
 ************************************************************************************/
void ReverseDigit(int randomNum)
{
	typedef int digit;
	digit one;       // the digit in ones place
	digit ten;       // the digit in tens place
	digit hundred;   // the digit in hundreds place

	one = randomNum % 10;
	ten = randomNum % 100 / 10;
	hundred = randomNum % 1000 / 100;

	cout << one << ten << hundred;
}



/************************************************************************************
 * This function store 10 random numbers in an array
 * - returns nothing
 ************************************************************************************/
void GetArray(int RandomNumArray[], const int SIZE)
{
	for (int num = 0; num < SIZE; num++)
	{
		RandomNumArray[num] = GetRandomNum();
	}
}



/************************************************************************************
 * This function sorts an array of 10 numbers using insertion sort
 * - returns nothing
 ************************************************************************************/
void SortArray(int RandomNumArray[], const int SIZE)
{
	int temp;
	int j;

	for (int i = 1; i < SIZE; i++)
	{
		temp = RandomNumArray[i];
		j = i - 1;
		while (j >= 0 && RandomNumArray[j] > temp)
		{
			RandomNumArray[j + 1] = RandomNumArray[j];
			j = j - 1;
		}
		RandomNumArray[j + 1] = temp;
	}
}


/************************************************************************************
 * This function writes the array to an external file
 * - returns nothing
 ************************************************************************************/
void WriteArrayToFile(ostream& OutFile, int RandomNumArray[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		OutFile << RandomNumArray[i] << endl;
	}
}


/************************************************************************************
 * This function reads the external file into an array
 * - returns nothing
 ************************************************************************************/
void ReadArrayFromFile(ifstream& InFile, int RandomNumArray[], const int SIZE)
{
	int i;
	i = 0;

	while (InFile && i < SIZE)
	{
		InFile >> RandomNumArray[i];
		i++;
	}
}


/************************************************************************************
 * This function prints the array to the screen
 * - returns nothing
 ************************************************************************************/
void PrintArray(int RandomNumArray[], const int SIZE)
{
	cout << "THE LIST OF SORTED RANDOM NUMBER:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << RandomNumArray[i] << endl;
	}
}