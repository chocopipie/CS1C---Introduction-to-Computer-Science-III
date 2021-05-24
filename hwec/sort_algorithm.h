#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;


void bubbleSort(int numArray[], const int AR_SIZE)
{
	int temp;
	int comparison = 0;
	int assignment = 0;

	auto start = high_resolution_clock::now();

	for (int x = 0; x < AR_SIZE; x++)
	{
		for (int y = 0; y < AR_SIZE-1; y++)
		{
			comparison++;
			if (numArray[y] > numArray[y+1])
			{
				temp = numArray[y+1];
				numArray[y+1] = numArray[y];
				assignment++;
				numArray[y] = temp;
			}
		}
	}

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop-start);

	cout << "\nComparison count: " << comparison;
	cout << "\nAssignment count: " << assignment << endl;
	cout << "Execution time: " << duration.count() << " nanoseconds." << endl;
}

void insertionSort(int numArray[], const int AR_SIZE)
{
	int i,j,temp;
	int comparison = 0;
	int assignment = 0;

	auto start = high_resolution_clock::now();

	for (i=0; i<AR_SIZE; i++)
	{
		temp = numArray[i];
		j = i - 1;

		comparison++;
		while (j >= 0 && numArray[j] > temp)
		{
			numArray[j+1] = numArray[j];
			assignment++;
			j = j - 1;
		}
		numArray[j+1] = temp;
		assignment++;
	}

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop-start);

	cout << "\nComparison count: " << comparison;
	cout << "\nAssignment count: " << assignment << endl;
	cout << "Execution time: " << duration.count() << " nanoseconds." << endl;
}

void selectionSort(int numArray[], const int AR_SIZE)
{
	int comparison = 0;
	int assignment = 0;

	auto start = high_resolution_clock::now();

	for (int i = 0; i < AR_SIZE; i++)
	{
		int min = i;
		for (int j = i; j < AR_SIZE; j++)
		{
			comparison++;
			if (numArray[min] > numArray[j])
			{
				min = j;
			}
			int temp = numArray[i];
			numArray[i] = numArray[min];
			assignment++;
			numArray[min] = temp;
		}
	}

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop-start);

	cout << "\nComparison count: " << comparison;
	cout << "\nAssignment count: " << assignment << endl;
	cout << "Execution time: " << duration.count() << " nanoseconds." << endl;
}