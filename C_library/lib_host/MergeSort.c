//Change :made dynamically
void merge(int arr[], int l, int m, int r)
{
	int n1, n2, i, j, k;
	n1 = m - l + 1;
	n2 = r - m;
	int a[n1], b[n2];
	for(i = 0, k = l; i < n1; i++,k++)
	a[i] = arr[k];

	for(j = 0, k = m+1; j < n2; j++,k++)
	b[j] = arr[k];
	for(i = 0, j = 0, k = l; (i < n1)&&(j < n2); k++)
	{
	    if(a[i] <= b[j])
	    {
		arr[k] = a[i];
		i++;
	    }
	    
	    else
	    {
		arr[k] = b[j];
		j++;
	    }
	}

	while(i < n1)
	{
	    arr[k] = a[i];
	    i++;k++;
	}

	while(j < n2)
	{
	    arr[k] = b[j];
	    j++;k++;
	}
}
    
void MergeSort(int a[], int l, int r)
{

	if( l < r )
	{
	    int m = (l + r)/2;
	    MergeSort(a, l, m);
	    MergeSort(a, m+1, r);
	    
	    merge(a ,l ,m ,r);
	
	}
}
