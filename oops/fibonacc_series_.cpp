#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c;
    cout<<"enter a number:";
    cin>>n;
 for (int i = 0; i <n; i++)
 {
  cout<<a<<" " ;//0//1
  c=a+b;//0+1=1
  a=b;//a <-- 1
  b=c;//1
 }
return 0;
}