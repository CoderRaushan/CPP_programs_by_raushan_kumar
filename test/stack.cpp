// stack
#include <iostream>
using namespace std;
class stack
{
private:
    int top;
    int arr[5];
public:
    stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool is_empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool is_full()
    {
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int value)
    {
        if (is_full())
        {
            cout << "stack is overloaded" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }
    int pop()
    {
        if (is_empty())
        {
            cout << "stack is underflow" << endl;
            return 0;
        }
        else
        {
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }
    void display()
    {
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    stack s1;
    int option, value;
    do
    {
        cout << "what do want to do please select options:" << endl;
        cout << "1.push" << endl;
        cout << "2.pop" << endl;
        cout << "3.empty" << endl;
        cout << "4.full" << endl;
        cout << "5.display" << endl;
        cout << "6.Exit" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "enter a number to be pushed:";
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << s1.pop() << endl;
            break;
        case 3:
            if (s1.is_empty())
            {
                cout << "stack is empty:" << endl;
            }
            else
            {
                cout << "stack is not empty:" << endl;
            }
            break;
        case 4:
            if (s1.is_full())
            {
                cout << "stack is full:" << endl;
            }
            else
            {
                cout << "stack is not full:" << endl;
            }
            break;
        case 5:
            cout << "the elements in stack is:" << endl;
            s1.display();
        default:
            cout << "enter valid option" << endl;
        }
    } while (option != 6);
    return 0;
}