#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
 cout<<"enter three number:";
 cin>>a>>b>>c;
 if (a>=b && a>=c)
 {
     cout<<"a is greater among three number";
 }
 else if (b>=a && b>=c)
 {
    cout<<"b is greater among three number";
 }
 else 
 {
    cout<<"c is greater among three number";
 }
return 0;
}