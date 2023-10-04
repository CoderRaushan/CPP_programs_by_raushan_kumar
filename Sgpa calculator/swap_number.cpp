#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
 a=67;
 b=88;
 cout<<"before swap a is:"<<a<<endl;
  cout<<"before swap b is:"<<b<<endl;
a=a+b;//14
b=a-b;//14-8=6
a=a-b;//14-6=8
 cout<<"after swap a is:"<<a<<endl;
  cout<<"after swap b is:"<<b<<endl;
return 0;
}


