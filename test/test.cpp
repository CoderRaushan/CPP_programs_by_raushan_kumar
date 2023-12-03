//queue
#include <iostream>
using namespace std;
class queue
{
private:
    int arr[5];
    int front;
    int rear;
public:
    queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i]=0;
        }
    }
    bool is_empty()
    {
        if (rear == -1 and front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool is_full()
    {
        if (rear == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int value)
    {
        if (is_full())
        {
            cout << "queue is overloaded:" << endl;
        }
        else if (is_empty())
        {
            rear = 0;
            front = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }
    int dequeue()
    {
        int a;
        if (is_empty())
        {
            cout << "stack is underflow:" << endl;
            return 0;
        }
        else if (front == rear)
        {
            a = arr[front];
            arr[front] = 0;
            front = -1;
            rear = -1;
            return a;
        }
        else
        {
            a = arr[front]= 0;
            front++;
            return a;
        }
    }
     void display()
    {
        for (int i = 0; i<5; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
  queue q1;
  int option,value,position;
   do
   {
   cout << "what do want to do please select options:" << endl;
        cout << "1.enqueue" << endl;
        cout << "2.dequeue" << endl;
        cout << "3.empty" << endl;
        cout << "4.full" << endl;
        cout << "5.display" << endl;
        cout << "6.Exit" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "enter a number to be enqueue:";
            cin >> value;
            q1.enqueue(value);
            break;
        case 2:
            cout << q1.dequeue() << endl;
            break;
        case 3:
            if (q1.is_empty())
            {
                cout << "queue is empty" << endl;
            }
            else
            {
                cout << "queue is not empty" << endl;
            }
            break;
        case 4:
            if (q1.is_full())
            {
                cout << "queue is full" << endl;
            }
            else
            {
                cout << "queue is not full" << endl;
            }
            break;
        case 5:
            cout << "the elements in queue is:" << endl;
            q1.display();
        }
   } while (option!=6);
    return 0;
}