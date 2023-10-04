#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;
public:
   rectangle()//non parameterised constructor 
  {
    length=1;
    breath=1;
  } 
  rectangle(int l=1,int b=1)//parameterised constructor
  {
    setvalue(l,b);
  }
 rectangle(rectangle &r1)// copy constructor 
 {
    length=r1.length;
    breath=r1.breath;
 }
  void setvalue(int x,int y)
  {
    length=x;
    breath=y;
  }
   int area()
   {
    return (length*breath);
   }
   int perimeter()
   {
    return 2*(length*breath);
   }
};
int main()
{
 rectangle r1(6,7);
 rectangle r2(r1);
 cout<<r2.area()<<endl;
 cout<<r2.perimeter()<<endl;
 return 0;
}