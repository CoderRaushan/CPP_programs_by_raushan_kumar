#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int x)
{
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }      
return -1;      
}

int main()
{
    int arr[100];
    int n;
    int x;
    cout << "enter size of array:" << endl;
    cin >> n;
    cout << "enter array elememt:" << endl;
    for (int i = 0; i < n; i++)
    {
    cin >> arr[i];
    }
    cout << "enter a element to be searched:" << endl;
    cin>>x;
    int index = linearsearch(arr, n, x);
    if (index == -1)
        cout << "Element is not present in the array";
    else
        cout << "Element is found at index:" << index;
    return 0;
}











