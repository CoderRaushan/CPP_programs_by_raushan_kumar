//linked list program
#include <iostream>
using namespace std;
class Node
{   public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
class linkedlist
{
private:
    Node *head;
public:
    linkedlist()
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
    Node *temp=head;
    Node*prev;
   while(temp->data!=todel && temp->next!=NULL)
   {
      prev=temp;
      temp=temp->next;
   }
   if(temp==NULL)
   {
    cout<<todel<<"not found"<<endl;
    return;
   }
   else
   {
    cout<<"deleting "<<todel<<" from linked list"<<endl;
    prev->next=temp->next;
    free(temp);
   }
  }
    void display()
    {
        Node *temp = head;
        if (temp == NULL)
        {
            cout << "No element are present id linked list:" << endl;
        }
        else
        {
            cout << "the element present in lined list is:" << endl;
            while (temp != NULL)
            {
                cout << temp->data<<endl;
                temp = temp->next;
            }
        }
    }
};
int main()
{//45,77,3,12,-23
//77,3,12
linkedlist l;
cout<<"inserting 45 in linklist:"<<endl;
l.insert(45);
cout<<"inserting 77 in linklist:"<<endl;
l.insert(77);
cout<<"inserting 3 in linklist:"<<endl;
l.insert(3);
cout<<"inserting 12 in linklist:"<<endl;
l.insert(12);
cout<<"inserting -23 in linklist:"<<endl;
l.insert(-23);
cout<<"no of elements in linkedlist is:"<<endl;
l.display();
cout<<"deleting 77"<<endl;
l.deletedata(77);
cout<<"deleting 3"<<endl;
l.deletedata(3);
cout<<"deleting 12"<<endl;
l.deletedata(12);
cout<<"total element present in linkdlist are:"<<endl;
l.display();    
return 0;
}