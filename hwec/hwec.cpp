#include<vector>
#include "mergesort.h"


const int AR_SIZE = 100;
void initializeArray(int numArray[], const int AR_SIZE, int flag);
void PrintFirstTen(int numArray[], const int AR_SIZE);
void PrintLastTen(int numArray[], const int AR_SIZE);

int main()
{ 
	int list1[AR_SIZE];
	int list2[AR_SIZE];
	int list3[AR_SIZE];

	int comparison;
	int assignment;

	
	initializeArray(list2, AR_SIZE, 2);
	initializeArray(list3, AR_SIZE, 3);
 
	cout << "LIST 1:\n";
	cout << "Before bubblesort:\n";
	// before bubblesort
	initializeArray(list1, AR_SIZE, 1);
	PrintFirstTen(list1, AR_SIZE);
	PrintLastTen(list1, AR_SIZE);
	// bubblesort
	bubbleSort(list1, AR_SIZE);
	// after bubblesort
	cout << "After bubblesort:\n";
	PrintFirstTen(list1, AR_SIZE);
	PrintLastTen(list1, AR_SIZE);

	cout << "\nBefore insertionsort:\n";
	//b4 insertion sort
	initializeArray(list1, AR_SIZE, 1);
	PrintFirstTen(list1, AR_SIZE);
	PrintLastTen(list1, AR_SIZE);
	//insertion sort
	insertionSort(list1, AR_SIZE);
	// after insertion sort
	cout << "After insertion sort:\n";
	PrintFirstTen(list1, AR_SIZE);
	PrintLastTen(list1, AR_SIZE);

	cout << "\nBefore selectionsort:\n";
	//b4 selection sort
	initializeArray(list1, AR_SIZE, 1);
	PrintFirstTen(list1, AR_SIZE);
	PrintLastTen(list1, AR_SIZE);
	//selection sort
	selectionSort(list1, AR_SIZE);
	// after selection sort
	cout << "After selection sort:\n";
	PrintFirstTen(list1, AR_SIZE);
	PrintLastTen(list1, AR_SIZE);
  
	cout << "\nBefore quicksort:\n";
	//b4 quick sort
	initializeArray(list1, AR_SIZE, 1);
	PrintFirstTen(list1, AR_SIZE);
	PrintLastTen(list1, AR_SIZE);
	//quick sort
	comparison = 0;
	assignment = 0;
	auto start = high_resolution_clock::now();
	quickSort(list1, 0, AR_SIZE-1, comparison, assignment);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<nanoseconds>(stop-start);
	cout << "Comparison count: " << comparison;
	cout << "\nAssignment count: " << assignment << endl;
	cout << "Execution time: " << duration.count() << " nanoseconds." << endl;
	// after quick sort
	cout << "After quick sort:\n";
	PrintFirstTen(list1, AR_SIZE);
	PrintLastTen(list1, AR_SIZE);

	cout << "\nBefore mergesort:\n";
	//b4 merge sort
	initializeArray(list1, AR_SIZE, 1);
	PrintFirstTen(list1, AR_SIZE);
	PrintLastTen(list1, AR_SIZE);
	//merge sort
	comparison = 0;
	assignment = 0;
	start = high_resolution_clock::now();
	mergeSort(list1, 0, AR_SIZE-1, comparison, assignment);
	stop = high_resolution_clock::now();
	duration = duration_cast<nanoseconds>(stop-start);
	cout << "Comparison count: " << comparison;
	cout << "\nAssignment count: " << assignment << endl;
	cout << "Execution time: " << duration.count() << " nanoseconds." << endl;
	// after merge sort
	cout << "After merge sort:\n";
	PrintFirstTen(list1, AR_SIZE);
	PrintLastTen(list1, AR_SIZE);



	cout << "\nLIST 2:\n";
	cout << "Before bubblesort:\n";
	// before bubblesort
	initializeArray(list2, AR_SIZE, 2);
	PrintFirstTen(list2, AR_SIZE);
	PrintLastTen(list2, AR_SIZE);
	// bubblesort
	bubbleSort(list2, AR_SIZE);
	// after bubblesort
	cout << "After bubblesort:\n";
	PrintFirstTen(list2, AR_SIZE);
	PrintLastTen(list2, AR_SIZE);

	cout << "\nBefore insertionsort:\n";
	//b4 insertion sort
	initializeArray(list2, AR_SIZE, 2);
	PrintFirstTen(list2, AR_SIZE);
	PrintLastTen(list2, AR_SIZE);
	//insertion sort
	insertionSort(list2, AR_SIZE);
	// after insertion sort
	cout << "After insertion sort:\n";
	PrintFirstTen(list2, AR_SIZE);
	PrintLastTen(list2, AR_SIZE);

	cout << "\nBefore selectionsort:\n";
	//b4 selection sort
	initializeArray(list2, AR_SIZE, 2);
	PrintFirstTen(list2, AR_SIZE);
	PrintLastTen(list2, AR_SIZE);
	//selection sort
	selectionSort(list2, AR_SIZE);
	// after selection sort
	cout << "After selection sort:\n";
	PrintFirstTen(list2, AR_SIZE);
	PrintLastTen(list2, AR_SIZE);
  
	cout << "\nBefore quicksort:\n";
	//b4 quick sort
	initializeArray(list2, AR_SIZE, 2);
	PrintFirstTen(list2, AR_SIZE);
	PrintLastTen(list2, AR_SIZE);
	//quick sort
	comparison = 0;
	assignment = 0;
	start = high_resolution_clock::now();
	quickSort(list2, 0, AR_SIZE-1, comparison, assignment);
	stop = high_resolution_clock::now();
	duration = duration_cast<nanoseconds>(stop-start);
	cout << "Comparison count: " << comparison;
	cout << "\nAssignment count: " << assignment << endl;
	cout << "Execution time: " << duration.count() << " nanoseconds." << endl;
	// after quick sort
	cout << "After quick sort:\n";
	PrintFirstTen(list2, AR_SIZE);
	PrintLastTen(list2, AR_SIZE);

	cout << "\nBefore mergesort:\n";
	//b4 merge sort
	initializeArray(list2, AR_SIZE, 2);
	PrintFirstTen(list2, AR_SIZE);
	PrintLastTen(list2, AR_SIZE);
	//merge sort
	comparison = 0;
	assignment = 0;
	start = high_resolution_clock::now();
	mergeSort(list2, 0, AR_SIZE-1, comparison, assignment);
	stop = high_resolution_clock::now();
	duration = duration_cast<nanoseconds>(stop-start);
	cout << "Comparison count: " << comparison;
	cout << "\nAssignment count: " << assignment << endl;
	cout << "Execution time: " << duration.count() << " nanoseconds." << endl;
	// after merge sort
	cout << "After merge sort:\n";
	PrintFirstTen(list2, AR_SIZE);
	PrintLastTen(list2, AR_SIZE);



	cout << "\nLIST 3:\n";
	cout << "Before bubblesort:\n";
	// before bubblesort
	initializeArray(list3, AR_SIZE, 3);
	PrintFirstTen(list3, AR_SIZE);
	PrintLastTen(list3, AR_SIZE);
	// bubblesort
	bubbleSort(list3, AR_SIZE);
	// after bubblesort
	cout << "After bubblesort:\n";
	PrintFirstTen(list3, AR_SIZE);
	PrintLastTen(list3, AR_SIZE);

	cout << "\nBefore insertionsort:\n";
	//b4 insertion sort
	initializeArray(list3, AR_SIZE, 3);
	PrintFirstTen(list3, AR_SIZE);
	PrintLastTen(list3, AR_SIZE);
	//insertion sort
	insertionSort(list3, AR_SIZE);
	// after insertion sort
	cout << "After insertion sort:\n";
	PrintFirstTen(list3, AR_SIZE);
	PrintLastTen(list3, AR_SIZE);

	cout << "\nBefore selectionsort:\n";
	//b4 selection sort
	initializeArray(list3, AR_SIZE, 3);
	PrintFirstTen(list3, AR_SIZE);
	PrintLastTen(list3, AR_SIZE);
	//selection sort
	selectionSort(list3, AR_SIZE);
	// after selection sort
	cout << "After selection sort:\n";
	PrintFirstTen(list3, AR_SIZE);
	PrintLastTen(list3, AR_SIZE);
  
	cout << "\nBefore quicksort:\n";
	//b4 quick sort
	initializeArray(list3, AR_SIZE, 3);
	PrintFirstTen(list3, AR_SIZE);
	PrintLastTen(list3, AR_SIZE);
	//quick sort
	comparison = 0;
	assignment = 0;
	start = high_resolution_clock::now();
	quickSort(list3, 0, AR_SIZE-1, comparison, assignment);
	stop = high_resolution_clock::now();
	duration = duration_cast<nanoseconds>(stop-start);
	cout << "Comparison count: " << comparison;
	cout << "\nAssignment count: " << assignment << endl;
	cout << "Execution time: " << duration.count() << " nanoseconds." << endl;
	// after quick sort
	cout << "After quick sort:\n";
	PrintFirstTen(list3, AR_SIZE);
	PrintLastTen(list3, AR_SIZE);

	cout << "\nBefore mergesort:\n";
	//b4 merge sort
	initializeArray(list3, AR_SIZE, 3);
	PrintFirstTen(list3, AR_SIZE);
	PrintLastTen(list3, AR_SIZE);
	//merge sort
	comparison = 0;
	assignment = 0;
	start = high_resolution_clock::now();
	mergeSort(list3, 0, AR_SIZE-1, comparison, assignment);
	stop = high_resolution_clock::now();
	duration = duration_cast<nanoseconds>(stop-start);
	cout << "Comparison count: " << comparison;
	cout << "\nAssignment count: " << assignment << endl;
	cout << "Execution time: " << duration.count() << " nanoseconds." << endl;
	// after merge sort
	cout << "After merge sort:\n";
	PrintFirstTen(list3, AR_SIZE);
	PrintLastTen(list3, AR_SIZE);
} 

void initializeArray(int numArray[], const int AR_SIZE, int flag)
{
	switch(flag)
	{
		case 1: // ascending array
		for (int i=0; i<AR_SIZE; i++)
		{
			numArray[i] = i+1;
		}
			break;
		case 2: // descending array
		for (int i=100; i>=0; i--)
		{
			numArray[AR_SIZE - i] = i;
		}
			break;
		case 3: // random array
		srand(time(NULL));
		for (int i=0; i<AR_SIZE; i++)
		{
			numArray[i] = rand() % 100 + 1;
		}
			break;
	}
} 

void PrintFirstTen(int numArray[], const int AR_SIZE)
{
	for (int i=0; i < 10; i++)
	{
		cout << numArray[i] << " ";
	}
	cout << endl;
}

void PrintLastTen(int numArray[], const int AR_SIZE)
{
	for (int i=90; i < AR_SIZE; i++)
	{
		cout << numArray[i] << " ";
	}
	cout << endl;
}
