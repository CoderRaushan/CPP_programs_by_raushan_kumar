#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int si, int ei) 
{
    int pivotele = arr[si];
    int low = si + 1;
    int high = ei;

    while (low <= high) 
    {
         if( arr[low] <= pivotele) low++;
         if(arr[high] > pivotele) high--;
         else if(low < high)
         swap(arr[low], arr[high]);
    }
    swap(arr[si], arr[high]);
    return high;
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
