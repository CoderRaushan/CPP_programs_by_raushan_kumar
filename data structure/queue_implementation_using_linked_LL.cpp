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
  Node *NodeExist(Node *n)
  {
    Node *temp = rear;
    while (temp != NULL)
    {
      if (n->key == temp->key)
      {
        return temp;
      }
      temp = temp->next;
    }
    return temp;
  }
  void enqueue(Node *n)
  {
    if (IsEmpty())
    {
      rear = n;
      front = n;
      cout << "Node enqueueed successfully:" << endl;
    }
    else if (NodeExist(n))
    {
      cout << "Node already exist with this key."
           << "enqueue with different key:" << endl;
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
  Node *peek()
  {
    Node *temp = NULL;
    if (IsEmpty())
    {
      return temp;
    }
    else
    {
      temp = rear;
      return temp;
    }
  }
  int count()
  {
    Node *temp = front;
    int count = 0;
    while (temp != NULL)
    {
      count++;
      temp = temp->next;
    }
    return count;
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
        cout << "(" << temp->key << "," << temp->data << ")-->";
        temp = temp->next;
      }
    }
  }
};
int main()
{
  queue q;
  int option, key, data;
  do
  {
    cout << "What operation do you want to perform?"
         << "Select Option number. Enter 0 to exit." << endl;
    cout << "Press 1. Enqueue()" << endl;
    cout << "Press 2. Dequeue()" << endl;
    cout << "Press 3. isEmpty()" << endl;
    cout << "Press 4. count()" << endl;
    cout << "Press 5. peek()" << endl;
    cout << "Press 6. display()" << endl;
    cout << "Press 7. Clear Screen" << endl;
    cout << "Press 8. Exist" << endl;
    cin >> option;
    Node *new_node = new Node();
    switch (option)
    {
    case 1:
      cout << "Enter KEY and VALUE of NODE to ENQUEUE "
           << "in the Queue"
           << endl;
      cin >> key;
      cin >> data;
      new_node->key = key;
      new_node->data = data;
      q.enqueue(new_node);
      break;
    case 2:
      new_node = q.dequeue();
      cout << "Dequeued Value is: (" << new_node->key << "," << new_node->data << ")";
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
      cout << "No of nodes in the Queue: " << q.count()
           << endl;
      break;
    case 5:
      if (q.IsEmpty())
      {
        cout << "queue is Empty" << endl;
      }
      else
      {
        new_node = q.peek();
        cout << "peek of the queue is: (" << new_node->key << "," << new_node->data << ")" << endl;
      }
      break;
    case 6:
      q.display();
      cout << endl;
      break;

    case 7:
      system("cls");
      break;
    default:
      cout << "Invalid input:" << endl;
    }
  } while (option != 8);
  return 0;
}