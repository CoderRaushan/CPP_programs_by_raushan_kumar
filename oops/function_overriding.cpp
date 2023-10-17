#include <bits/stdc++.h>
using namespace std;
class A
{ 
    public:
    void fun()
    {
        cout<<"i am base class of class A:"<<endl;
    }
};
class B: public A
{
     public:
    void fun()
    {
        cout<<"i am derived class of class B:"<<endl;
    }
};
int main()
{
  B obj;
  obj.fun();
  obj.A::fun();
    return 0;
}