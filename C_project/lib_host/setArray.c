// filles up array with random values
void setArray(int a[],int n, int r)
{
        for(int i = 0; i < n; i++)
        {
                a[i]=rand() % r;
        }
}
