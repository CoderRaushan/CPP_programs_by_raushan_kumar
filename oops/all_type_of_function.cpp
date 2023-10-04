#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;
public:
rectangle();
rectangle(int l, int b);
rectangle(rectangle &r);
int area();
int perimeter();
void setvalue(int x,int y);
};
rectangle::rectangle()
   {
    length=1;
    breath=1;
   }
   rectangle:: rectangle(int l=1, int b=1)
   {
       length=l;
       breath=b;
   }
   rectangle:: rectangle(rectangle &r1)
   {
    length=r1.length;
    breath=r1.breath;
   }
void rectangle::setvalue(int x,int y)
  {
    length=x;
    breath=y;
  }
  int rectangle :: area()
   {
    return(length*breath);
   }
   int rectangle :: perimeter()
   {
    return 2*(length*breath);
   }
int main()
{
 rectangle r1(4,6);
 cout<<r1.area()<<endl;
 cout<<r1.perimeter()<<endl;
return 0;
}