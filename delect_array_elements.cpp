#include <iostream>
using namespace std;
int main()
{
    int arr[100], i, elem, j, a, s, n1, pos;
    cout << "Enter size of array:";
    cin >> s;
    cout << "Enter Array Elements:"<<endl;
    for (i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl
         << "choose what do you want to do:" << endl;
    cout << "press 1: To delect element from a given value:" << endl
         << "press 2: To delect element whose position is given:" << endl;
    cin >> n1;
    switch (n1)
    {
    case 1:
        cout << "\nEnter Element to Delete: ";
        cin >> elem;
        for (i = 0; i < s; i++)
        {
            if (arr[i] == elem)
            {
                for (j = i; j < (s - 1); j++)
                    arr[j] = arr[j + 1];
                s--;
            }
        }
        cout << "\nElement Deleted Successfully!" << endl;
        for (i = 0; i < s; i++)
        {
            cout << arr[i] << "\t";
        }
        break;
    case 2:
        cout << "\nEnter position to Delete: ";
        cin >> pos;
        for (i = pos - 1; i < s; i++)
        {
            arr[i] = arr[i + 1];
        }
        s--;
        cout << "\nElement Deleted Successfully!" << endl;
        for (i = 0; i < s; i++)
        {
            cout << arr[i] << "\t";
        }
        break;
    }

    return 0;
}
