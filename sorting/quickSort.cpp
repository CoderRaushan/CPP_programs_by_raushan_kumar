#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int si, int ei)
{
    int pivotEle = arr[(si+ei)/2];
    int count = 0;
    for (int i = si; i <= ei; i++)
    {
        if(i==(si+ei)/2) continue;
        if (arr[i] <= pivotEle)count++;
    }
    int pivotIdx = si + count;
    swap(arr[(si+ei)/2], arr[pivotIdx]);
    int i = si;
    int j = ei;
    while (i <= pivotIdx && j > pivotIdx)
    {
        if (arr[i] <= pivotEle)
            i++;
        if (arr[j] > pivotEle)
            j--;
        else if (arr[i] > pivotEle && arr[j] < pivotEle)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quicksort(int arr[], int si, int ei)
{
    if (si >= ei)
        return;
    int pivotIdx = partition(arr, si, ei);
    quicksort(arr, si, pivotIdx - 1);
    quicksort(arr, pivotIdx + 1, ei);
}
int main()
{
    int arr[] = {7, 1, -8, 23, 5, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
