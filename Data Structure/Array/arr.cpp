#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr[0] = 8;
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " ";
    }
    return 0;
}