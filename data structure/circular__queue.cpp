#include <iostream>
using namespace std;
class queue
{
private:
    int arr[5];
    int front;
    int rear;
    int size=4;
public:
    queue()
    {
        front = -1;
        rear = -1;
        for (int i = 0; i <=size; i++)
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
        if (rear == size)
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
            a = arr[front];
            arr[front]= 0;
            front++;
            return a;
        }
    }
    int count()
    {
        return rear + 1;
    }
    int peek(int position)
    {
        if (is_empty())
        {
            cout << "queue is empty:";
            return 0;
        }
        else
        {
            return arr[position];
        }
    }
    void change(int position, int value)
    {
        arr[position] = value;
        cout << "value changed at location:" << position << endl;
    }
     void display()
    {
        for (int i = 0; i<=size; i++)
        {
            cout << arr[i] <<" ";
        }
    }
};
int main()
{
  queue q1;
  int option,value,position;
   do
   {
   cout <<endl<< "what do want to do please select options:" << endl;
        cout << "1.enqueue" << endl;
        cout << "2.dequeue" << endl;
        cout << "3.empty" << endl;
        cout << "4.full" << endl;
        cout << "5.count" << endl;
        cout << "6.peek" << endl;
        cout << "7.change" << endl;
        cout << "8.display" << endl;
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
            cout << "number of element in queue is:";
            cout << q1.count() << endl;
            break;
        case 6:
            cout << "enter a position to be peek:";
            cin >> position;
            cout << q1.peek(position) << endl;

            break;
        case 7:
            cout << "enter position and value to be changed:";
            cin >> position;
            cout << endl;
            cin >> value;
            cout << endl;
            q1.change(position, value);
            break;
        case 8:
            cout << "the elements in queue is:" << endl;
            q1.display();
        }
   } while (option!=0);
   
    return 0;
}