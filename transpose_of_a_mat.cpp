#include <iostream>
using namespace std;
int main()
{
    int a[3][3],res[3][3],i, j;
    cout << "enter matrix element:"
         << "\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
     cout << "your matrix element is:"
         << "\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<"\t";
             
        }
       cout<<"\n";
    }
     
     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
          res[j][i] = a[i][j];
            
        }
       
    }
    cout << "your transpose of a matrix is:"
         << "\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout<<res[i][j]<<"\t";
             
        }
       cout<<"\n";
    }
    
    return 0;
}