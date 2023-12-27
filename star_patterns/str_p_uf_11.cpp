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
        for (j = 1; j <=2*n-1; j++)
        {
            if (j>n+1-i and j<n-1+i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
      cout<<endl;
    }
     for (i = 3; i <= n+1; i++)
    {
        for (j = 1; j<=2*n-1; j++)
        {     
            if (j>(i-1) and j<=(2*n-i))
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