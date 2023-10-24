#include<bits/stdc++.h>
using namespace std;
class base
{
  public :
 /*virtual*/ void display()
  {
    cout<<"base class:"<<endl;
  }
};
class derived:public base
{
  public:
  void display()
  {
    cout<<"derived class:"<<endl;
  }
};
int main()
{
 base *ptr;
 base b;
 ptr=&b;
 ptr->display();
/*pointer of base class can point as well as 
access the data members of base class but pointer of 
base class can only point the derived class cannot 
access the data members of derived class,if we try to 
do this than it will call only base class members again
& again to over come this problem use virtual keyword 
in base class before the member function.
*/
 derived d;
 ptr=&d;
 ptr->display();
return 0;
}