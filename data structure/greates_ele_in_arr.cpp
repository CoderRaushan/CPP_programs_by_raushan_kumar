#include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,arr[100],n;
cout<<"enter size of array:"<<endl;
cin>>n;
cout<<"enter elements of array:"<<endl;
for ( i = 1; i <=n; i++)
{
   cin>>arr[i];
}
cout<<"greater element in an array::"<<endl;
int temp;
temp=arr[1];
for ( i = 2; i <=n; i++)//{76,66,39,89,99,42}
{
   
    if(temp < arr[i])//temp
    {
      temp=arr[i];
    }
} 
cout<<temp<<endl; 
return 0;
}