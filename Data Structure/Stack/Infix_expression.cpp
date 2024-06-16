#include <bits/stdc++.h>
using namespace std;
    int priority(char c)
    {
        if(c=='/' || c=='*') return 2;
        else return 1;
    }
    int calculate(int val1,int val2,char ch)
    {
        if(ch=='+') return val1+val2;
        else if(ch=='-')return val1-val2;
        else if(ch=='*')return val1 * val2;
        else return val1/val2;
    }
int main()
{
    stack<int> val;
    stack<char> op;
    string s = " 3+5 / 2 ";
    for (int i = 0; i < s.length(); i++)
    {
        // if space occur ingnore it
        if(s[i]==' ') continue;
        // check if s[i] is a digit
        else if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(s[i]-48);
        }
        // check if s[i] is a operator +,-,*,/
        else
        {
            if (op.size() == 0 || priority(s[i]) > priority(op.top()))
            {
                op.push(s[i]);
            }
            else
            {
                // kaam krna hai
                while (op.size() > 0 && priority(s[i]) <= priority(op.top()))
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = calculate(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() != 0)
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = calculate(val1, val2, ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    return 0;
}