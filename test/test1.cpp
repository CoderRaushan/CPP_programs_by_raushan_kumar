//circular queue
#include <bits/stdc++.h>
using namespace std;
class Circularqueue
{
private:
    int front;
    int rear;
    int arr[4];
    int size = 5;
    int N=size;
public:
    Circularqueue()
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
        if(rear ==-1 && front==-1)
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
        if((rear+1)%N ==front)
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
        if(is_full())
        {
           cout<<"queue is overloaded:"<<endl;
        }
        else if(is_empty())
        {
         rear=0;
         front=0;
         arr[rear]=value;
        }
        else
        {
         rear=(rear+1)%N;
          arr[rear]=value;
        }
    }
  int dequeue()
  {
    int popvalue=0;
    if(is_empty())
    {
        cout<<popvalue<<endl<<"queue is underflow:"<<endl;
        return popvalue;
    }
    else if(rear==front)
    {
    popvalue=arr[front];
     arr[front]=0;
     rear=-1;
     front=-1;
     return popvalue;
    }
    else
    {  
        popvalue=arr[front];
        arr[front]=0;
        front++;
        return popvalue;
    }
  }
  void display()
  {
    for (int i = 0; i <=4; i++)
    {
       cout<<arr[i]<<" ";
    }
  }
};
int main()
{
    Circularqueue c;
    int option,value ;
 do
 {
    cout<<endl<<"what do you want to do please select option:"<<endl;
    cout<<"press.1:is_empty"<<endl;
    cout<<"press.2:is_full"<<endl;
    cout<<"press.3:enqueue"<<endl;
    cout<<"press.4:dequeue"<<endl;
    cout<<"press.5:display"<<endl;
    cout<<"press.6:Exit"<<endl;
     cin>>option;
  switch (option)
  {
  case 1: if(c.is_empty())
          {
            cout<<"queue is empty:"<<endl;
          }
          else
          {
            cout<<"queue is not empty:"<<endl;
          }
    break;
  case 2:if(c.is_full())
          {
            cout<<"queue is full:"<<endl;
          }
          else
          {
            cout<<"queue is not full:"<<endl;
          }
           break;
    case 3:
         cout<<"enter a value to be inserted:"<<endl;
           cin>>value;
           c.enqueue(value);
            break;
    case 4: cout<<"dequeue value is:"<< c.dequeue()<<endl;
     break;
    case 5: cout << "the elements in circularqueue is:"<< endl;
    c.display();
    break;
  default:cout<<"enter valid option:"<<endl;
    break;
  }
   
 } while (option!=6);
    return 0;
}