#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) 
    {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
        {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
int main()
{
	int arr[] = { 12, 11, 13, 5, 6 };
	int N = sizeof(arr) / sizeof(arr[0]);
    cout<<"unsorted array:"<<endl;
    for (int i = 1; i <= N; i++)
    {
        cout<<arr[i]<<" ";
    }
	insertionSort(arr, N);
    cout<<endl<<"sorted array:"<<endl;
    for (int i = 0; i <N; i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}

