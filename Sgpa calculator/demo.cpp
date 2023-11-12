#include<iostream>
#include<exception>
using namespace std;
class overloading:public exception
{
    int speed;
    public:
    const char *what()
    {
      return "checkyour speed";
    }
};
int main()
{ int carspeed=0;
 try
 {
    while(1)
    {
      carspeed=carspeed+10;
    }
    if (carspeed>100)
    {
        overloading o;
       throw o;
    }
    cout<<"speed is:"<<carspeed;
    
 }
 catch(overloading e)
 {
    cout<<e.what();
 }
return 0;
}