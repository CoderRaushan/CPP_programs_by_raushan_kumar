#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x == 1 || x == 2)
    {
        cout<<1;
    }
    else
    {
        int a = 1,b = 1, c;
        for (int i = 1; i <=100; i++)
        {
            if (x == i)
            {
                cout << a;
            }
            c = a + b;
            a = b;
            b = c;
        }
    }
}