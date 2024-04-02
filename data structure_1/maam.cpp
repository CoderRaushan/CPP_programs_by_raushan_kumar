#include <iostream>
# include<stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

 Node * head = NULL;
void insertinLL(int val)
{
    Node * newnode=(Node*)malloc(sizeof(Node));
    newnode->data = val;
    newnode->next=NULL;

    Node * last=head;
    if (last==NULL)
    {
        head=newnode;
        return;
    }
    else
    {
        while(last->next!=NULL)
        {
            last=last -> next;
        }
        last ->next=newnode;
        return;
    }
}
void display()
{
  Node * ptr=head;
 if(ptr==NULL)
 {
     cout<<"No elements are there in Linked List";
 }
 else
 {
      cout<<"Elements in linked list are:\n";
     while(ptr!=NULL)
     {

         cout<<ptr->data;
         cout<<"\n";
         ptr=ptr->next;
     }
 }
}
void deletedata(int todel)
{

    Node * temp=head;
    Node * prev;
    while(temp!=NULL && temp->data!=todel)
    {

        prev=temp;
        temp=temp->next;

    }

    if(temp==NULL)
    {

        cout<<"\n"<<todel<<"  not found \n";
        return;

    }
    else{
         cout<<"\n deleting   "<<todel<<"  from the linked list \n";

         prev->next=temp->next;
        free(temp);
    }
}

