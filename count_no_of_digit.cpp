#include <iostream>
using namespace std;
int countDigits(int n) 
{
    int count = 0;
    int d = 0, b = n;
    while (n != 0)
    {
        d = n % 10; 
        if (d!=0 && b%d== 0)
        { 
            count++; 
        }
          n = n / 10;
    }
    return count;
}
int main()
{
    cout << countDigits(660);
    return 0;
}
