#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n, s;
    cout << "enter size of array:" << endl;
    cin >> s;
    cout << "enter array elements:" << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> n;
        v.push_back(n);
    }
    int x;
    cout << "enter target element:" << endl;
    cin >> x;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "{" <<i << "," <<j << "}" << endl;
            }
        }
    }

    return 0;
}