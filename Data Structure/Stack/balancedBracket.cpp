// #include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
bool check(string str)
{
    int n = str.length();
    if (n % 2 != 0)
        return false;
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            st.push(str[i]);
        }
        else
        {
            if (st.size() == 0)
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }
    if (st.size() == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str = "((())))";
    cout << check(str);
    return 0;
}