#include<iostream>
#include<exception>
using namespace std;
class overspeed:public exception
{
int speed;
public :
const char *what()
{
    return "check your speed you are in car not in aeroplane:";
}
};
int main()
{
    int carspeed=0;
 try
 {
    while (1)
    {
        carspeed+=10;
        if (carspeed>100)
        {
            overspeed o;
            throw o;
        }
         cout<<"car speed is:"<<carspeed<<endl;
    }
 }
  catch(overspeed r)
    {
         cout<<r.what();
    }
return 0;
}