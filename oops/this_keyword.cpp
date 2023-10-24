#include<bits/stdc++.h>
using namespace std;
class A
{
    int a;
    int b;
    public:
  A( int a,int b)
  {
   this-> a=a;
   this-> b=b;
  }
  void display()
  {
    cout<<a<<" "<<b;
  }
};
int main()
{
 A a(3,6);
 a.display();
return 0;
}