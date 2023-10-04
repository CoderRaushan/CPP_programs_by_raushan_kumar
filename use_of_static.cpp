#include<iostream>
using namespace std;
int & fun()
{
   static int c=10;
    return c;
}
int main()
{
 int &y=fun();
 y=20;
 cout<<fun()<<" ";
 cout<<fun()<<" ";
 cout<<fun()<<" ";
 return 0;
}