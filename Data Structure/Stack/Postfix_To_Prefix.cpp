#include <bits/stdc++.h>
using namespace std;
string calculate(string val1, string val2, char ch)
{
    return ch+val1 + val2;
}
int main()
{
    stack<string> val;
    string s = "79+4*8/3-";
    for (int i = 0; i < s.length(); i++)
    {
        // if space occur ingnore it
        if (s[i] == ' ')
            continue;
        // check if s[i] is a digit
        else if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(to_string(s[i] - 48));
        }
        // check if s[i] is a operator +,-,*,/
        else
        {
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            char ch = s[i];
            string ans = calculate(val1, val2, ch);
            val.push(ans);
        }
    }
    cout << val.top() << endl;
    // cout<<(79+4*8/3-);
    return 0;
}