#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a no:" << endl;
    cin >> n;
    for (int i = 3; i <= n; i++)
    {
        for (int j = 1; j <= n + i - 1; j++)
        {
            if (j > n - i && j <= n + i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
      }
       for (int i = 2; i <= n-2; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j > i - 1 && j <= 2 * n - i)
               
                {
                    cout << "*";
                }
            else
            {
                cout << " ";
            }
        }
        cout << endl;

    }
     return 0;
 }

