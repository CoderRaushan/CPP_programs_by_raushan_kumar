#include <iostream>
using namespace std;
int num(int n)
{
    int i = 2;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not a prime number:";
        }

        else
        {
            cout << "prime nember";
        }
    }
}

int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;

    if (n <= 0 or n == 1)
    {
        cout << "invalid input";
    }
    cout << num(n);

    return 0;
}