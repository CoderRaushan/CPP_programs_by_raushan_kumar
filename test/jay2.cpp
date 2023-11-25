#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};
class doublylinkedlist
{
public:
    Node *head;
    Node *tail;
    doublylinkedlist()
    {
        head = NULL;
        tail = NULL;
    }
    void insert(int value)
    {
        Node *newnode = new Node(value);
        if (tail == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    void deletedata(int todel)
    {
        Node *temp = head;
        while (temp->data != todel && temp->next != NULL)
        {
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            cout << "element not found:" << endl;
            return;
        }
        else
        {
            cout<<"deteted:"<<todel<<endl;
            if (temp->prev == NULL)
            {
                head = NULL;
            }
            else
            {
                temp->prev->next = temp->next;
            }
            if (temp->next == NULL)
            {
                tail = NULL;
            }
            else
            {
                temp->next->prev = temp->prev;
            }
            delete (temp);
        }
    }
    void display()
    {
        Node *temp = head;
        if (temp == NULL)
        {
            cout << "No element are present in doublylinked list:" << endl;
        }
        else
        {
            cout << "element present in doublylinked list are:" << endl;
            while (temp != NULL)
            {
                cout << temp->data << " <-> ";
                temp = temp->next;
            }
        }
    }
};
int main()
{
//75,95,63,39,69,37,12,23
//95,69,12,112,77
doublylinkedlist d;
cout<<endl<<"inserting 75:"<<endl;
d.insert(75);
cout<<"inserting 95:"<<endl;
d.insert(95);
cout<<"inserting 63:"<<endl;
d.insert(63);
cout<<"inserting 39:"<<endl;
d.insert(39);
cout<<"inserting 69:"<<endl;
d.insert(69);
cout<<"inserting 37:"<<endl;
d.insert(37);
cout<<"inserting 12:"<<endl;
d.insert(12);
cout<<"inserting 23:"<<endl;
d.insert(23);
d.display();
cout<<endl<<"deleting:95"<<endl;
d.deletedata(95);
cout<<"deleting:69"<<endl;
d.deletedata(69);
cout<<"deleting:12"<<endl;
d.deletedata(12);
cout<<"deleting:112"<<endl;
d.deletedata(112);
cout<<"deleting:77"<<endl;
d.deletedata(77);
d.display();
    return 0;
}