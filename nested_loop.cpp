#include<iostream>
using namespace std;
int main()
{
 int i,n,x;
 cout<<"enter a number to be printed:";
  cin>>n;
 for ( x = 1; x<=n; x++)
 {
    for ( i = 1; i <=10 ; i++)
    {
        cout<<x*i<<" ";
    }
    cout<<"\n";
 }
 
return 0;
}