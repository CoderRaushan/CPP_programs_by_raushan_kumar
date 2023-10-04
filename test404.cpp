#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, pos, i, count = 0;
    cout << "Enter the size of an array \n";
    cin >> size;
    cout << "Enter the value in an array \n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the position \n";
    cin >> pos;

    for (i = pos - 1; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    for (i = 0; i < size; i++)
    {
        cout << "   " << arr[i];
    }
    return 0;
}