#include <iostream>
using namespace std;
bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= n - 1; i++)
        {
            if (n%i==0)
            {
               return false ;
            }
            
        }
        return true;
    }
}
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    if (isprime(n))
    {
        cout << n << " is a prime number:";
    }
    else
    {
        cout << n << " is not a prime number:";
    }

    return 0;
}