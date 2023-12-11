#include <iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3],i, j;        
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        { 
            cout << "enter elements of first matrix:"<<i+1<<j+1<< "\n";
            cin >> a[i][j];
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        { 
        cout << "enter elements of second matrix:"<<i+1<<j+1<< "\n";

            cin >> b[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
          c[i][j] = a[i][j] - b[i][j] ;
             
        }
    }
    cout << "addition of matrix [a+b] is:"
         << "\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<" ";
        }
       cout<<"\n";
    }
    return 0;
}