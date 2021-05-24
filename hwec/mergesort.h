#include "quicksort.h"

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int numArray[], int l, int m, int r, int &comparison, int &assignment)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
    // Create temp arrays
    int L[n1], R[n2];
 
    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
    {
        L[i] = numArray[l + i];
        assignment++;
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = numArray[m + 1 + j];
        assignment++;
    }
    // Merge the temp arrays back into arr[l..r]
 
    // Initial index of first subarray
    int i = 0;
 
    // Initial index of second subarray
    int j = 0;
 
    // Initial index of merged subarray
    int k = l;
 
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        {
            numArray[k] = L[i];
            i++;
        }
        else 
        {
            numArray[k] = R[j];
            j++;
        }
        comparison++;
        assignment++;
        k++;
    }
 
    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) 
    {
        numArray[k] = L[i];
        assignment++;
        i++;
        k++;
    }
 
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2)
     {
        numArray[k] = R[j];
        assignment++;
        j++;
        k++;
    }
}    
 
// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int arr[],int l,int r,int &comparison, int &assignment )
{
    if(l>=r)
    {
        return;//returns recursively
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m, comparison, assignment);
    mergeSort(arr,m+1,r, comparison, assignment);
    merge(arr,l,m,r, comparison, assignment);
}