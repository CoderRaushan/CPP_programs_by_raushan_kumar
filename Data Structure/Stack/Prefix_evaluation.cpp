#include <bits/stdc++.h>
using namespace std;
int calculate(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}
int main()
{
    stack<int> val;
    string s = "-/*+79483";
    for (int i = s.length()-1; i >= 0; i--)
    {
        // if space occur ingnore it
        if (s[i] == ' ')
            continue;
        // check if s[i] is a digit
        else if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(s[i] - 48);
        }
        // check if s[i] is a operator +,-,*,/
        else
        {
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            char ch = s[i];
            int ans = calculate(val1, val2, ch);
            val.push(ans);
        }
    }
    cout << val.top() << endl;
    // cout<<(79+4*8/3-);
    return 0;
}