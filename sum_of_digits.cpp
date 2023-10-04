#include <iostream>
using namespace std;
int main()
{
    int n,d,sum = 0;
    cout << "enter a number:"<<endl;
    cin >> n; // 1234
    while (n != 0)
    {    
        d = n % 10;    // 4
        sum = sum + d; // 0+4+3+2+1=10
       n= n / 10;  // 1234/10=123
    }
    cout << "the sum of digits is:" << sum;      
    return 0;
}


