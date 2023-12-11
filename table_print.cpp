#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter how many times your have to print numbers:"<<endl;
cin>>n;
 for (int i = 1; i <=n; i++)
 {
   for (int j = 1; j<=10;j++)
   {
    cout<<i*j<<" ";
   }
   cout<<endl;
 }

return 0;
}