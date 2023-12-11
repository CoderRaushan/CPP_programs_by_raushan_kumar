// // swap of two numbers
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int *a,int *b)
// {
// int temp=*a;
// *a=*b;
// *b=temp;
// }
// int main()
// {
//  int a=10;
//  int b=20;
//  cout<<"a is:"<<a<<endl;
//  cout<<"b is:"<<b<<endl;
//  swap(&a,&b);
//  cout<<"a is:"<<a<<endl;
//  cout<<"b is:"<<b<<endl;
// return 0;
// }


//cyclic swap
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b ,int *c)
{
int temp=*a;
*a=*b;
*b=*c;
*c=temp;
}
int main()
{
 int a=10;
 int b=20;
 int c=30;
 cout<<"a is:"<<a<<endl;
 cout<<"b is:"<<b<<endl;
 cout<<"c is:"<<c<<endl;
 swap(&a,&b,&c);
 cout<<endl;
 cout<<"a is:"<<a<<endl;
 cout<<"b is:"<<b<<endl;
 cout<<"c is:"<<c<<endl;
return 0;
}