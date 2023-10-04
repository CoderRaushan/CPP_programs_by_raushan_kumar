#include <iostream>
using namespace std;
int main()
{   
    int n, i = 1;
    char ch='A',de=ch;
    cin>>n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {    de=n-i+1;
            cout <<" "<<de<<" ";
            ch=ch+1;
            j = j + 1;
             
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}