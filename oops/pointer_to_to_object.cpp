#include<iostream>
using namespace std;
class rectangle
{
public:
    int length ;
    int breath ;
      int area()
      {
        return (length*breath);
      }
      int perimeter()
      {
        return 2*(length+breath);
      }
};

int main()
{
//statically allocated memory
/*rectangle r;
rectangle *ptr= &r;
ptr->length=10;
ptr->breath=10;
cout<<ptr->area()<<endl;
cout<<ptr->perimeter()<<endl;
cout<<"new line"<<endl;
(*ptr).length=43;
(*ptr).breath=4;
cout<<(*ptr).area()<<endl;
cout<<(*ptr).perimeter()<<endl;
*/
//dinemically allocated memory
rectangle *ptr = new rectangle;
ptr->length=34;
ptr->breath=2;
cout<<ptr->area()<<endl;
cout<<ptr->perimeter()<<endl;
return 0;
}