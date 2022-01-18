int BinarySearch(int arr[], int l, int r, int x)
{
    if (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
  
        if (arr[mid] > x)
            return BinarySearch(arr, l, mid - 1, x);
  
        return BinarySearch(arr, mid + 1, r, x);
    }
  
    return -1;
}
