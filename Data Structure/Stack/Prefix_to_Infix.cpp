#include <bits/stdc++.h>
using namespace std;
string calculate(string val1, string val2, char ch)
{
   return val1+ch+val2;
}
int main()
{
    stack<string> val;
    string s = "-/*+79483";
    for (int i = s.length()-1; i >= 0; i--)
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
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            char ch = s[i];
            string ans = calculate(val1, val2, ch);
            val.push(ans);
        }
    }
    cout << val.top() << endl;
    // cout<<(79+4*8/3-);
    return 0;
}