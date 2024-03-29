#include <bits/stdc++.h>
using namespace std;
string longestcommonprefix(vector<string> &v)
{

    if (v.size() == 0)
        return "";
    if (v.size() == 1)
        return v[0];
    int n = v.size();
    sort(v.begin(), v.end());
    string s = "";
    string first = v[0];
    string last = v[n - 1];
    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        {
            if (first[i] == last[i])
            {
                s += first[i];
            }
             else
            {
                return s;
            }
        }
    }
     return s;
}
int main()
{
    vector<string> v{"flower", "flow", "flight"};
    cout << longestcommonprefix(v);
    return 0;
}