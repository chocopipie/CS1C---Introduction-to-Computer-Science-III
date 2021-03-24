/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW06 : RECURSION
 *****************************************************************************/
#include <iostream>
#include <string>
using namespace std;

void PrintChar(string alphabet);
void ReverseChar(string alphabet, int starting, int ending);
void ReadIndices(string alphabet);
void ReverseCharLoop(string alphabet, int starting, int ending);

/******************************************************
 * PROGRAM RECURSION
 * ___________________________________________________
 * This programs get the string of 26 characters of the
 * alphabet. Then, it prompts user to input the indices 
 * within which the characters are reversed. The string
 * after reversing will be printed
 * ****************************************************/
int main()
{
	string alphabet;

	alphabet = "abcdefghijklmnopqrstuvwxyz";

	ReadIndices(alphabet);

	return 0;
}


/******************************************************
 * FUNCTION PrintChar
 * ___________________________________________________
 * This prints the whole character string to the screen
 * ___________________________________________________
 * PRE-CONDITIONS
 *  alphabet - a string of 26 characters of the alphabet
 * 
 * POST-CONDITIONS
 *  This function prints the string to the screen
 * ****************************************************/
void PrintChar(string alphabet)
{
	for (int i = 0; i < 26; i++)
	{
		cout << alphabet[i];
	}
}


/******************************************************
 * FUNCTION ReverseChar
 * ___________________________________________________
 * This reverse the characters of the substring in a 
 * defined range
 * ___________________________________________________
 * PRE-CONDITIONS
 *  alphabet - a string of 26 characters of the alphabet
 *  staring - a starting indice
 *  ending - an ending indice
 * 
 * POST-CONDITIONS
 *  This function reverse and prints the string 
 * ****************************************************/
void ReverseChar(string alphabet, int starting, int ending)
{
	// base case
	if (starting >= ending)
	{
		PrintChar(alphabet);
	}
	// general case
	else
	{
		int temp = alphabet[starting];
		alphabet[starting] = alphabet[ending];
		alphabet[ending] = temp;
		ReverseChar(alphabet, starting + 1, ending - 1);
		return;
	}
}


/******************************************************
 * FUNCTION ReadIndices
 * ___________________________________________________
 * This reads the indices from user's input, then passes
 * those values with a string to ReverseChar function
 * to reverse and print it.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  alphabet - a string of 26 characters of the alphabet
 * 
 * POST-CONDITIONS
 *  This function prints the string to the screen
 * ****************************************************/
void ReadIndices(string alphabet)
{
	int starting;
	int ending;
	bool ExitStatus;

	do
	{
		ExitStatus = false;
		cout << "\n\n(Enter -1 to exit)\n";
		cout << "Enter starting point: ";
		cin >> starting;

		cout << "Enter ending point: ";
		cin >> ending;

		if (starting == -1 || ending == -1)
		{
			ExitStatus = true;
		}
		else
		{
			ReverseChar(alphabet, starting, ending);
			cout << endl;
			ReverseCharLoop(alphabet, starting, ending);
		}
		
	} while (!ExitStatus);

}

/****************
 * EXTRA CREDIT *
 * **************/
 /*****************************************************
 * FUNCTION ReverseCharLoop
 * ___________________________________________________
 * This reverse the characters of the substring in a 
 * defined range using iterative method
 * ___________________________________________________
 * PRE-CONDITIONS
 *  alphabet - a string of 26 characters of the alphabet
 *  staring - a starting indice
 *  ending - an ending indice
 * 
 * POST-CONDITIONS
 *  This function reverse and prints the string 
 * ****************************************************/
// The recursive method takes more overhead because the function
// is called multiple times. However, the recursive function
// is logically easier to read and understand.
void ReverseCharLoop(string alphabet, int starting, int ending)
{

	for (int index = 0; index < 26; index++)
	{
		if (index < starting || index > ending)
		{
			cout << alphabet[index];
		}
		else
		{
			cout << alphabet[starting + ending - index];
		}
	}
}
