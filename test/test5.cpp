// doulylinkedlist
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
class doublyLinkedList
{
public:
    Node *head;
    Node *tail;
    doublyLinkedList()
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
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    void deletedata(int todel)
    {
        Node *temp = head;
        while (temp != NULL && temp->data != todel)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << todel << " not found" << endl;
            return;
        }
        else
        {
            cout << "Deleting " << todel << " from linked list" << endl;

            if (temp->prev != NULL)
            {
                temp->prev->next = temp->next;
            }
            else
            {
                head = NULL;
            }
            if (temp->next != NULL)
            {
                temp->next->prev = temp->prev;
            }
            else
            {
                tail = NULL;
            }
            free(temp);
        }
    }
    void display()
    {
        Node *temp = head;
        if (temp == NULL)
        {
            cout << "No element are present in doublylinked list:" << endl;
        }
        cout << "elements present in doublylinked list is:" << endl;
        while (temp!= NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
    }
};
int main()
{
    doublyLinkedList d;
    cout << "inserting 95 in linklist:" << endl;
    d.insert(95);
    cout << "inserting 77 in linklist:" << endl;
    d.insert(77);
    cout << "inserting 3 in linklist:" << endl;
    d.insert(3);
    cout << "inserting 12 in linklist:" << endl;
    d.insert(12);
    cout << "inserting -23 in linklist:" << endl;
    d.insert(-23);
    cout << "inserting 84 in linklist:" << endl;
    d.insert(84);
     cout << "inserting 39 in linklist:" << endl;
    d.insert(39);
    cout << "no of elements in linkedlist is:" << endl;
    d.display();
    cout << endl
         << "deleting 77" << endl;
    d.deletedata(77);
    cout << "deleting 33" << endl;
    d.deletedata(33);
    cout << "deleting 12" << endl;
    d.deletedata(12);
    cout << "total element present in linkdlist are:" << endl;
    d.display();
    return 0;
}