#include<bits/stdc++.h>
using namespace std;

long reverseBits(long n) 
{
    int res = 0;
    int arr[32] = {0};
    int i = 0;

    // Storing binary digits in an array
    while (n != 0)
    {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Reversing the bits and calculating the result
    for (int j = 31; j >= 0; j--)
    {
        int l = 31 - j;
        res = res + pow(2, l) * arr[j];
    }

    return res;
}

int main()
{
    cout << reverseBits(8) << endl;
    return 0;
}
