#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0;
    int b=1;
 for (int i = 0; i<20; i++)
{
    cout<<a<<" ";
    a=b;
    int sum=a+b;
    b=sum;
}
 
return 0;
}