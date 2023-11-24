//stack
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int d)
    {
        data = d;
    }
};
class Stack
{
public:
    Node *top;
    Stack()
    {
        top = NULL;
    }
    bool isEmpty()
    {
        if (top == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(Node *n)
    {
        if (isEmpty())
        {
            top = n;
            cout << "Node PUSHED successfully" << endl;
        }
        else
        {
            Node *temp = top;
            top = n;
            n->next = temp;
            cout << "Node PUSHED successfully" << endl;
        }
    }
    Node *pop()
    {
        Node *temp = NULL;
        if (isEmpty())
        {
            cout << "stack underflow" << endl;
            return temp;
        }
        else
        {
            temp = top;
            top = top->next;
            return temp;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "stack is empty:";
        }
        else
        {
            cout << "Elements in the Stack are :" << endl;
            Node *temp = top;
            while (temp != NULL)
            {
                cout << "(" << temp->data << ")"
                     << " -> " << endl;
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
int main()
{
    Stack s1;
    int op, data;
    do
    {
        cout << "What operation do you want to perform?"
             << "Select Option number." << endl;
        cout << "Press 1. Push()" << endl;
        cout << "Press 2. Pop()" << endl;
        cout << "Press 3. isEmpty()" << endl;
        cout << "Press 4. display()" << endl;
        cout << "Press 5. Exit" << endl;
        cin >> op;
        Node *new_node = new Node();
        switch (op)
        {
        case 1:
            cout << "Enter VALUE of NODE to push in the stack" << endl;
            cin >> data;
            new_node->data = data;
            s1.push(new_node);
            break;
        case 2:
            cout << "Poped Value: " << endl;
            new_node = s1.pop();
            cout << "("<< new_node->data << ")";
            delete new_node;
            cout << endl;
            break;
        case 3:
            if (s1.isEmpty())
                cout << "Stack is Empty" << endl;
            else
                cout << "Stack is not Empty" << endl;
            break;
        case 4:
            s1.display();
            cout << endl;
            break;
        default:
            cout << "Invalid input:" << endl;
        }
    } while (op != 5);
    return 0;
}