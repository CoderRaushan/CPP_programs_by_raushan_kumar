#include <iostream>
using namespace std;
class Node
{
public:
    int key;
    int data;
    Node *next;
    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
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
    bool NodeExist(Node *n)
    {
        Node *temp = top;
        while (temp != NULL)
        {
            if (temp->key == n->key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    void push(Node *n)
    {
        if (top == NULL)
        {
            top = n;
            cout << "Node PUSHED successfully" << endl;
        }
        else if (NodeExist(n))
        {
            cout << "Node already exist with this Key value."
                 << "Enter different Key value" << endl;
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
    Node *peek()
    {
        if (isEmpty())
        {
            cout << "stack underflow" << endl;
            return NULL;
        }
        else
        {
            return top;
        }
    }
    int count()
    {
        int count = 0;
        Node *temp = top;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
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
                cout << "(" << temp->key << "," << temp->data << ")"
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
    int op, key, data;
    do
    {
        cout << "What operation do you want to perform?"
             << "Select Option number."<< endl;
        cout << "Press 1. Push()" << endl;
        cout << "Press 2. Pop()" << endl;
        cout << "Press 3. isEmpty()" << endl;
        cout << "Press 4. peek()" << endl;
        cout << "Press 5. count()" << endl;
        cout << "Press 6. display()" << endl;
        cout << "Press 7. Clear Screen" << endl
             << endl;
        cin >> op;
        Node *new_node = new Node();
        switch (op)
        {
        case 1:
            cout << "Enter KEY and VALUE of NODE to push in the stack" << endl;
            cin >> key;
            cin >> data;
            new_node->key = key;
            new_node->data = data;
            s1.push(new_node);
            break;
        case 2:
            cout << "Poped Value: " << endl;
            new_node = s1.pop();
            cout << "(" << new_node->key << "," << new_node->data << ")";
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
            if (s1.isEmpty())
            {
                cout << "Stack is Empty" << endl;
            }
            else
            {
                new_node = s1.peek();
                cout << "peek of the Stack is: (" << new_node->key << "," << new_node->data << ")" << endl;
            }
            break;
        case 5:
            cout << "No of nodes in the Stack: " << s1.count() << endl;
            break;

        case 6:
            s1.display();
            cout << endl;
            break;
        case 7:
            system("cls");
            break;
            
        default:
            cout << "Invalid input:" << endl;
        }
    } while (op != 8);
    return 0;
}