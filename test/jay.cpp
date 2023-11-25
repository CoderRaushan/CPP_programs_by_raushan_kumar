#include<bits/stdc++.h>
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
class Linkedlist
{
    public:
    Node *head;
    Linkedlist()
    {
        head = NULL;
    }
    void insert(int value)
    {
        Node *newnode = new Node(value);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void deletedata(int todel)
    {
        Node *temp = head;
        Node *prev;
        while (temp->data != todel && temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            cout << "element is not found:" << endl;
            return ;
        }
        else
        {  cout<<"deleted:"<<todel<<endl;
            prev->next = temp->next;
            delete (temp);
        }
    }
    void display()
    {
        Node *temp = head;
        if (temp == NULL)
        {
            cout << "No element are present in linked list:" << endl;
        }
        else
        {
            cout << "elementd present in linked list are:" << endl;
            while (temp != NULL)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
        }
    }
};
int main()
{
    //34,76,12,-98,63
    //76,-98,45
Linkedlist l;
cout<<"inseting 34"<<endl;
l.insert(34);
cout<<"inseting 76"<<endl;
l.insert(76);
cout<<"inseting 12"<<endl;
l.insert(12);
cout<<"inseting -98"<<endl;
l.insert(-98);
cout<<"inseting 63"<<endl;
l.insert(63);
 l.display();

 cout<<endl<<"deleting 76 from linked list:"<<endl;
l.deletedata(76);
cout<<"deleting -98 from linked list:"<<endl;
l.deletedata(-98);
cout<<"deleting 45 from linked list:"<<endl;
l.deletedata(45);
 l.display();
    return 0;
}