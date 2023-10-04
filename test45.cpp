#include <iostream>
using namespace std;
int main()
{
    int ele, i;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }

    cout <<"\n"<< "new array is:";
    for (int j = size; j > 1; j--)
    {
        arr[j - 1] = arr[j - 2];
    }
    cout << "\n"
         << endl
         << "enter an element:";
    cin >> ele;
    arr[0] = ele;
    for (i = 0; i <= size; i++)
    {
        int j;
        cout << arr[i] << "\t";
    }

    return 0;
}