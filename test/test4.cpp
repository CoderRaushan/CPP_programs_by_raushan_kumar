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
class queue
{
public:
  Node *front;
  Node *rear;
  queue()
  {
    front = NULL;
    rear = NULL;
  }
  bool IsEmpty()
  {
    if (front == NULL && rear == NULL)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  void enqueue(Node *n)
  {
    if (IsEmpty())
    {
      rear = n;
      front = n;
      cout << "Node enqueueed successfully:" << endl;
    }
    else
    {
      Node *temp = rear;
      temp->next = n;
      rear = n;
      cout << "Node  ENQUEUED successfully" << endl;
    }
  }
  Node *dequeue()
  {
    Node *temp = NULL;
    if (IsEmpty())
    {
      cout << "queue is underflow:" << endl;
      return temp;
    }
    else if (front == rear)
    {
      temp = front;
      front = NULL;
      rear = NULL;
      return temp;
    }
    else
    {
      temp = front;
      front = front->next;
      return temp;
    }
  }
  void display()
  {
    if (IsEmpty())
    {
      cout << "queue is empty:" << endl;
    }
    else
    {
      cout << "The elements in the queue is :" << endl;
      Node *temp = front;
      while (temp != NULL)
      {
        cout << "("<<temp->data << ")-->";
        temp = temp->next;
      }
    }
  }
};
int main()
{
  queue q;
  int option,data;
  do
  {
    cout << "What operation do you want to perform?"
         << "Select Option number. Enter 0 to exit." << endl;
    cout << "Press 1. Enqueue()" << endl;
    cout << "Press 2. Dequeue()" << endl;
    cout << "Press 3. isEmpty()" << endl;
    cout << "Press 4. display()" << endl;
    cout << "Press 5. Exit" << endl;
    cin >> option;
    Node *new_node = new Node();
    switch (option)
    {
    case 1:
      cout << "Enter VALUE of NODE to ENQUEUE "
           << "in the Queue"
           << endl;
      cin >> data;
      new_node->data = data;
      q.enqueue(new_node);
      break;
    case 2:
      new_node = q.dequeue();
      cout << "Dequeued Value is: ("<< new_node->data << ")";
      delete new_node;
      cout << endl;
      break;
    case 3:
      if (q.IsEmpty())
        cout << "Queue is Empty" << endl;
      else
        cout << "Queue is NOT Empty" << endl;
      break;
    case 4:
      q.display();
      cout << endl;
      break;
     default: cout << "Invalid input:" << endl;
    }
  } while (option != 5);
  return 0;
}