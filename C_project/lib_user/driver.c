#include <stdio.h>
#include <stdlib.h>
#include "SortingAndSearching.h"
#include "setArray.h"

int main()
{
	int t, n, i, j, upper_limit;
	printf(" Enter no. of test cases");

	scanf("%d",&t);
	for(i = 0; i < t; i++)
	{
		
		printf(" Enter length of array and upper limit");
		scanf("%d %d",&n,&upper_limit);
		
		int a[n];
		int l = 0, r = n, key = 5;
		
		setArray(a, n, upper_limit);
		
		printf("Unsorted :");
		PrintArray(a, n);
		
		InsertionSort(a, n);
		printf("\nSorted :");
		PrintArray(a, n);
	}

	return 0;
}

/*sorting
void SelectionSort(int a[],int n)
void InsertionSort(int a[],int n)
void BubbleSort(int a[], int n)
void MergeSort(int a[], int l, int r);
void merge(int arr[], int l, int m, int r);
void QuickSort(int a[], int l, int r);

//Searching
int BinarySearch(int arr[], int l, int r, int x);
int LinearSearch(int arr[], int n, int x);

// Basic functions ->
void swap(int a[], int i, int j);
void PrintArray(int a[], int n);
*/
