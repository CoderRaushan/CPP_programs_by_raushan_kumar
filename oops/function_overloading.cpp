#include<iostream>
using namespace std;
int add(int a,int b)//1
{   cout<<"function 1 called::"<<endl;
    return (a+b);
}
double add(double a,double b)//2
{
    cout<<"function 2 called::"<<endl;
    return (a+b);
}
int add(int a,int b,int c)//3
{
    cout<<"function 3 called::"<<endl;
    return (a+b+c);
}
double add(int a,double b)//4
{
    cout<<"function 4 called::"<<endl;
    return (a+b);
}
double add(double a,int b)//5
{
    cout<<"function 5 called::"<<endl;
    return (a+b);
}
int main()
{
 int a,b,c;
cout<<add(4,5)<<endl;//1
cout<<add(4.3,5.5)<<endl;//2
cout<<add(4,5,7)<<endl;//3
cout<<add(4,5.6)<<endl;//4
cout<<add(4.5,5)<<endl;//5
return 0;
}