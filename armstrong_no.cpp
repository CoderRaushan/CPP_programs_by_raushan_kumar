#include<iostream>
using namespace std;
int main()
{
      int n, c, arm=0, f;
    cout << "enter a number:" << endl;
    cin >> n; // 153
    f = n;
    while (n!= 0)
    {
        c = n % 10;
        arm = arm + (c * c * c); // 27+125+1=153
        n = n / 10;
    }
    if (arm == f)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "not armstrong number";
    }
    return 0;
}

