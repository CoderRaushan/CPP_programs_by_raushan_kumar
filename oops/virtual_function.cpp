#include<bits/stdc++.h>
using namespace std;
class base 
{ 
    public:
   virtual void function()
    {
        cout<<"i am in base class:"<<endl;
    }
};
class derived1 : public base 
{
      public: 
  void function()
  {
    cout<<"i am in derived class 1:"<<endl;
  }
};
class derived2: public derived1
{
      public:
 void function()
 {
    cout<<"i am in derived class 2:"<<endl;
 }
};

int main()
{
 base *ptr;
 base b;
 ptr=&b;
 ptr->function();
 
 derived1 d1;
 ptr=&d1;
 ptr->function();

 derived2 d2;
 ptr=&d2;
 ptr->function();
 return 0;
 /*after calling derived class 1 and 2 
output from base class only not from d1 and d2 till we don't 
use virtual keyword than to overcome this 
problelm we have to use  base class function 
as virtual function by using virtual keyword then output
 will come form d1 and d2 as well 
 also known as late binding.*/
}