int insertSort(int *arr)
{
}

int mergeSort(int arr[], int S)
{
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n <= S)
    {
        return insertSort(n);
    }

    int mid = n / 2;

    int *l = malloc(mid * sizeof(int));
    int *r = malloc((n - mid) * sizeof(int));

    for (int i = 0; i < mid; i++)
        l[i] = arr[i];
    for (int i = mid; i < n; i++)
        r[i - mid] = arr[i];

    l = mergeSort(l, mid);
    r = mergeSort(r, n - mid);

    int i = 0;
    int j = 0;

    // for ()
}