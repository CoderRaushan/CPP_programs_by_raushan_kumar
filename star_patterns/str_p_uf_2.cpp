#include <iostream>
using namespace std;
int main()
{   
    int i, j, n;
    cout << "enter a number:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
         for (j = 1; j<=n; j++)
        {
            if (j<=i-1)
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