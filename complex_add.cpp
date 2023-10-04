#include<iostream>
using namespace std;
struct complex
{
   int real,img;
};
int main()
{
 complex c1,c2,c3;
 cin>>c1.real>>c1.img;
 cin>>c2.real>>c2.img;
 c3.real=c1.real+c2.real;
c3.img=c1.img+c2.img;
cout<<c3.real<<"+"<<c3.img<<"i";
return 0;
}