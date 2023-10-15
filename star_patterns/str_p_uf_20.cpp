#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "enter a number:";
    cin >> n;
    cout<<"\n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j<=i; j++)
        {     
        cout<<j;
        }
        for ( j = 1; j <=10-2*i; j++)
        {
            cout<<" ";
        }
       for (int j = i; j >= 1; j--) 
       {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}