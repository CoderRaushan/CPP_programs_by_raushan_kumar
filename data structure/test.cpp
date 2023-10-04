#include <iostream>
#include <stack>
using namespace std;
bool isoperator(char c)
{
    if (c == '+' || c == '*' || c == '/' || c == '-' || c == '^')
    {
        return true;
    }
    else
    {
        false;
    }
}
int precedency(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' and c == '*')
    {
        return 2;
    }
    else if (c == '+' and c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infix_postfix(stack<char> s, string infix)
{
    string postfix;

    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] >= 'a' && infix[i] <= 'z' || infix[i] >= 'A' && infix[i] <= 'Z')
        {
            postfix += infix[i];
        }
        else if (infix[i] == '(')
        {
            s.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((s.top() != '(') && (!s.empty()))
            {   char temp=s.top();
                postfix +=temp;
                s.pop();
            }
            if (s.top() == '(')
            {
                s.pop();
            }
            else if (isoperator(infix[i]))
            {
                if (s.empty())
                {
                    s.push(infix[i]);
                }
                else
                {
                    if (precedency(infix[i]) > precedency(s.top()))
                    {
                        s.push(infix[i]);
                    }
                    else if (precedency(infix[i]) == precedency(s.top()) and infix[i] == '^')
                    {
                        s.push(infix[i]);
                    }
                    else
                    {
                        while (!s.empty() && precedency(infix[i]) <= precedency(s.top()))
                        {    
                            postfix +=s.top();
                            s.pop();
                        }
                        s.push(infix[i]);
                    }
                }
            }
        }
    }
    while (!s.empty())
    {   
        postfix +=s.top();
        s.pop();
    }
    return postfix;
}
int main()
{
    stack<char> stack;
    string infix;
    cout << "enter your infix expression:";
    cin >> infix;
    cout << "infix expression is:" << infix << endl;
    string res = infix_postfix(stack, infix);
    cout << "postfix expression is:" << res;
    return 0;
}