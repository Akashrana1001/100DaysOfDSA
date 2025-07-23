#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{

    int pivot = arr[s];

    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

    int pivotidx = s + count;

    swap(arr[s], arr[pivotidx]);

    int i = s, j = e;

    while (i < pivotidx && j > pivotidx)
    {
        while (arr[i] < arr[pivotidx])
        {
            i++;
        }
        while (arr[j] > arr[pivotidx])
        {
            j--;
        }
        if (i < pivotidx && j > pivotidx)
            swap(arr[i++], arr[j--]);
    }
    return pivotidx;
}

void quicksort(vector<int> &arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // find the pivot position
    int p = partition(arr, s, e);

    // appply quick sort using recursion
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main()
{
    int a;
    cin >> a;

    vector<int> arr(a);

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    quicksort(arr, 0, a - 1);
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
}