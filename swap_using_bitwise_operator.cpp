#include<bits/stdc++.h>
using namespace std;
int main()
{
 int num1=7;
 int num2=8;
 num1=num1^num2;
 num2=num1^num2;
 num1=num1^num2;
 cout<<"num1:"<<num1<<endl;
 cout<<"num2:"<<num2<<endl;
 return 0;
}