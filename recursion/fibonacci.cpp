#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int sum=a+b;
 for (int i = 0; i<20; i++)
{
    cout<<a<<" ";
    sum=a+b;
    a=b;
    b=sum;
 }
 
return 0;
}