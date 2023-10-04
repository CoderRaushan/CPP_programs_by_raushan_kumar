#include<iostream>
using namespace std;
class demo
{
    public:
 void show()
 {
    cout<<"hello from show"<<endl;
 }
 void show1()
 {
    cout<<"hello from show 1"<<endl;
 }
};
int main()
{
    // statically allocated pointer to object
   // two ways to access the pointer object 
 /*demo d;
 demo *ptr=&d;
 d.show();
 d.show1();
ptr->show();// way 1
ptr->show1();// way 1
(*ptr).show();// way 2
(*ptr).show1();// way 2
*/

//dinemically allocated memory by using new keywoed
demo *ptr = new demo;//it is upto you that you can use parenthesis after demo 
//demo *ptr = new demo();
ptr->show();
ptr->show1();
return 0;
}