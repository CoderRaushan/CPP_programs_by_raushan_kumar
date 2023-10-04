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
    int count()
    {
        return top + 1;
    }
    int peek(int position)
    {
        if (is_empty())
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        else
        {
            return arr[position];
        }
    }
    void change(int position, int value)
    {
        arr[position] = value;
        cout << "value changed at location:" << position << endl;
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
    int option, value, position;

    do
    {
        cout << "what do want to do please select options:" << endl;
        cout << "1.push" << endl;
        cout << "2.pop" << endl;
        cout << "3.empty" << endl;
        cout << "4.full" << endl;
        cout << "5.count" << endl;
        cout << "6.peek" << endl;
        cout << "7.change" << endl;
        cout << "8.display" << endl;
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
                cout << "stack is empty" << endl;
            }
            else
            {
                cout << "stack is not empty" << endl;
            }
            break;
        case 4:
            if (s1.is_full())
            {
                cout << "stack is full" << endl;
            }
            else
            {
                cout << "stack is not full" << endl;
            }
            break;
        case 5:
            cout << "number of element in stack is:";
            cout << s1.count() << endl;
            break;
        case 6:
            cout << "enter a position to be peek:";
            cin >> position;
            cout << s1.peek(position) << endl;

            break;
        case 7:

            cout << "enter position and value to be changed:";
            cin >> position;
            cout << endl;
            cin >> value;
            cout << endl;
            s1.change(position, value);

            break;
        case 8:
            cout << "the elements in stack is:" << endl;
            s1.display();
        }
    } while (option != 0);
    return 0;
}