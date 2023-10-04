#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j=1;
        while (j<=i-1)
        {
            cout << " ";
            j++;
        }
        
        while (j<=n)
        {
            cout << "*";
            j++;
        } 
        while (j<=(2*n-1)+1)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i = i + 1;
    }
}
