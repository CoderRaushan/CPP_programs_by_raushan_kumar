#include <iostream>
using namespace std;

int main()
{
    int n, d,sum=0, s=0;
    cout << "enter no:" << endl;
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        if (d % 2 == 0)
        {   
            sum = sum + d;
        }
        else if (d % 2 != 0)
        {
            s = s + d;
        }
        n = n / 10;
    }
    cout<<sum<<" "<<s;
    return 0;
}
