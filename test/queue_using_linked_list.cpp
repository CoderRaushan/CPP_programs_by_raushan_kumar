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
class Queue
{
public:
    Node *front;
    Node *rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int value)
    {
        Node *newnode = new Node(value);
        if (rear == NULL)
        {
            rear = newnode;
            front = newnode;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
        }
    }
    void dequeue()
    {
        Node*temp=front;
        if(temp==NULL)
        {
            cout<<"queue is underflow:"<<endl;
        }
        else
        {    cout<<"deleted:"<<temp->data<<endl;
            front=front->next;
            delete(temp);
        }
    }
    void display()
    {
        Node *temp=front;
        if(temp==NULL)
        {
            cout<<"NO element present in liked list:"<<endl;
        }
        else
        {    cout<<"element present in linked list are:"<<endl;
            while (temp!=NULL)
            {
               cout<<temp->data<<" -> "<<endl;
               temp=temp->next;
            }
        }
    }
};
int main()
{
Queue q;
q.enqueue(67);
q.enqueue(37);
q.enqueue(7);
q.enqueue(56);
q.enqueue(-23);
q.enqueue(876);
q.display();
q.dequeue();
q.dequeue();
q.dequeue();
q.display();
    return 0;
}