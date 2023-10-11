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
        for (j = 1; j<=2*n; j++)
        {     
            if (j>(i) and j<=(2*n-i))
            {
                cout << " ";
            }
            else 
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
    for (i = 2; i <= n; i++)
    {
        for (j = 1; j<=2*n; j++)
        {     
            if (j>(n+1-i) and j<(n+i))
            {
                cout << " ";
            }
            else 
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}