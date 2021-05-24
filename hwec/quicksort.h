#include "sort_algorithm.h"

void swap(int* a, int* b)  // swap 2 elements
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition (int numArray[], int low, int high, int &comparison, int &assignment)
{
	//srand(time(NULL));
	//int pivot = rand() % 100 + 1;
	int pivot = numArray[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		comparison++;
		if (numArray[j] <= pivot)
		{
			i++;
			swap(&numArray[i], &numArray[j]);
			assignment++;
		}
	}
	swap(&numArray[i+1], &numArray[high]);
	assignment++;

	return (i+1);
}

void quickSort(int numArray[], int low, int high, int &comparison, int &assignment)
{
	if (low < high)
	{
		int pivot = partition(numArray, low, high, comparison, assignment);

		quickSort(numArray, low, pivot-1, comparison, assignment);
		quickSort(numArray, pivot+1, high, comparison, assignment);
	}

}