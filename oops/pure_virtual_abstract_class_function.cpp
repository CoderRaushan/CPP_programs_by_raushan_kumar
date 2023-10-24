#include<bits/stdc++.h>
using namespace std;
class shape
{
 virtual void get()=0;
};
class areaOfcircle:public shape
{
    public:
  void get()
  { 
    int r ;
    cout<<"enter radius of circle:"<<endl;
    cin>>r;
    cout<<"the area of circle is:"<<(3.14*r*r)<<endl;
  }
};
class rectangl:public shape
{
    public:
    void get()
    {
        int length,breadth;
        cout<<"enter length and breadth:"<<endl;
        cin>>length>>breadth;
        cout<<"the area of rectangle is:"<<(length*breadth)<<endl;
    }
};
class perimeter:public shape 
{
public:
/*
if you create a virtual function then you 
have to override the base class one another 
option you have that is use again virtual 
keyword.
*/
virtual void get()=0;
};
int main()
{
/* we can't create object of shape class 
because it's pure virtual class */
//shape s;//object of abstract class is not alloewd.
areaOfcircle c;
c.get();
rectangl r;
r.get();
return 0;
}