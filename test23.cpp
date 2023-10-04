#include <iostream>
using namespace std;
int main()
{
    int ele, pos, i, num;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout <<"\n"<< "Array elements is respectively:"
         << "\n";
        
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout<<"\n";
    cout<< "\n"<<"please select what do you want to do:"
         << "\n"
         << "press 1.For insert element at a given position"
         <<endl<< "press 2.For insert element at end of array:"<<endl;
         cin>>num;
    switch (num)
    {
    case 1:
        cout << "\n"
             << "enter your position to be insert:";
        cin >> pos;
        pos = pos - 1;
        for (int j = size - 1; j >= pos; j--)
        {
            arr[j + 1] = arr[j];
        }
        cout << "enter an element to be insert:";
        cin >> ele;
        arr[pos] = ele;
        cout << "new array is:" << endl;
        for (i = 0; i <= size; i++)
        {
            cout << arr[i] << "\t";
        }
        break;
    case 2:
        cout << "enter your element to be insert:";
        int ele;
        cin >> ele;
        arr[size] = ele;
        cout << "new array is:" << endl;
        for (int i = 0; i <= size; i++)
        {
            cout << arr[i] <<"\t";
        }
        break;
    }
    return 0;
}