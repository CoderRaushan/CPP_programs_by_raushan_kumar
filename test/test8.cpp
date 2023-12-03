//stack using linked list
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
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
    void insert(int value)
    {
        Node *newnode = new Node(value);
        if (top == NULL)
        {
            top = newnode;
        }
        else
        {
             newnode->next = top;
              top = newnode;
        }
    }
    void deletedata()
    {
        Node *temp=top;
        if(temp==NULL)
        {
            cout<<"no any element present in stack:"<<endl;
            return;
        }
        else 
        {
             top=top->next;
             cout<<"deleted:"<<temp->data<<endl;
             delete(temp);
        }
    }
    void disply()
    {
        Node *temp = top;
        if (temp == NULL)
        {
            cout << "no any element is present in the stack:" << endl;
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->data << " -> "<<endl;
                temp=temp->next;
            }
        }
    }
};
int main()
{
   Stack p;
p.insert(13);
p.insert(12);
p.insert(11);
p.insert(10);
p.insert(9);
p.disply();
cout<<"calling deleting function:"<<endl;
p.deletedata();
p.deletedata();

p.disply();
    return 0;
}
