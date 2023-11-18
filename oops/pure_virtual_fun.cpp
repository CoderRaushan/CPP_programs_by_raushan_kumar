#include<bits/stdc++.h>
using namespace std;
class shape
{
    public:
    int length=4;
    int bradth=14;
    int radius=6;
virtual void area()=0;
};
class areaofcircle : public shape
{ 
public:
void area()
{
cout<<"area of circle is:"<<(3.14*radius*radius)<<endl;
}
};
class areaofrectangle : public shape
{
    public:
void area()
{
cout<<"area of rectangle is:"<<(length*bradth)<<endl;
}
};
int main()
{
areaofcircle c;
c.area();
areaofrectangle r;
r.area();
return 0;
}