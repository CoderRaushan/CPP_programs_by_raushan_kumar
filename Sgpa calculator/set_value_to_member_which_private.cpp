#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breath;

public:
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
main()
{
//statically allocated memory 
/*rectangle r;
r.setvalue(3,4);
cout<<r.area()<<endl;
cout<<r.perimeter()<<endl;
*/
//dinemically allocated memory
rectangle *ptr= new rectangle;
ptr->setvalue(3,4);
cout<<ptr->area()<<endl;
cout<<ptr->perimeter()<<endl;
return 0;
}