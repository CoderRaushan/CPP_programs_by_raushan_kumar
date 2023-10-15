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
        for (j = 1; j<=n; j++)
        {  
            if (j<=i)
            {
                cout <<char(65+n-j)<<" ";
               
            }
            else 
            {
                cout <<" ";
            }
          
        }
        cout << "\n";
      
    }

    return 0;
}