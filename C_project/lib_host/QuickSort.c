void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void QuickSort(int a[], int l, int r)
{
    if(l < r)
    {
        int pi = a[r], i, j;
        for(i = l-1, j = l; j < r; j++)
        {
            if(a[j] < pi)
            {
                i++;
                swap(a, i, j); 
            }
        }
        
        swap(a, i+1, r);
        pi = i+1;
    
        QuickSort(a, l, pi - 1);
        QuickSort(a, pi + 1, r);
    }
}
