#include <bits/stdc++.h>
using namespace std;
int kth(int n, int k)
{
    if (n == 1)
        return 0;
    if (k % 2 == 0) // even per flip karna hai
    {
        int ans = kth(n - 1, k / 2);
        if (ans == 1)
            return 0;
        else
            return 1;
    }
    else
    {
        return kth(n - 1, k / 2 + 1); // odd per sidhe return no need of flip
    }
}
int main()
{
    cout << kth(3, 3);
    return 0;
}
