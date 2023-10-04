#include<iostream>
using namespace std;
void swap(int &a,int &b)
{ 
int temp=a;
a=b;
b=temp;
}
int main()
{ int a,b;
cout<<"enter a number:"<<endl;
 cin>>a>>b;
 cout<<"before swap"<<endl<<a<<" "<<b<<endl;
swap(a,b);
cout<<"after swap"<<endl;
cout<<a<<" "<<b;
return 0;
}