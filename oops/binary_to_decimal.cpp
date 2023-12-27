#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res = 0;
    int n = 100100;//36
    int i = 0;
    while (n != 0)
    {
        int d;
        d = n % 10;
        res = res + pow(2, i) * d;
        i++;
        n = n / 10;
    }
    cout << res;
    return 0;
}