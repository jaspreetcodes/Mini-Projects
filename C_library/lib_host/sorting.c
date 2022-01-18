//A function to implement optimized bubble sort
//returns time taken by algo (in ms)
#include <stdbool.h>
#include "SortingAndSearching.h"
void BubbleSort(int a[], int n)
{
    int i, j;
    bool noSwaps = true;
    for (i = 0; i < n-1; i++)
        {
            noSwaps = true;
            // Last i elements are already in place
            for (j = 0; j < n-i-1; j++)
                if (a[j] > a[j+1])
                   {
            	       swap(a, j, j+1);
		       //swap(&a[j], &a[j+1]);
                       noSwaps = false;
                   }
        
            if(noSwaps)
            break;
        }
}

// A function to implement Insertion sort
//returns time taken by algo (in ms)

void InsertionSort(int a[],int n)
{
    int i,j,key;
    for(i = 1; i < n; i++)
    {
        key = a[i];
        for(j = i-1; (j>=0)&&(a[j] > key); j--)
        {
            a[j+1]=a[j];
        }
        a[j+1] = key;
    }
}

// A function to implement selection sort
//returns time taken by algo (in ms)
void SelectionSort(int a[],int n)
{
    int i, j ,minI=0;
    for (i = 0; i < n-1; i++)
        {
            minI = i;
            // Last i elements are already in place
            for (j = i+1; j < n; j++)
                    if (a[minI] > a[j])
                            minI = j;
            swap(a, minI, i);
	    //swap(&a[minI], &a[i]);
        }
}
