#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={5,0,1,2,0,0,4,0,3};
    int n=9;
  bool flag=true;
 for (int i = 0; i <9-1; i++)
 {
    for (int j = 0; j <9-1-i; j++)
    {
       if(arr[j]==0)
       {
        swap(arr[j],arr[j+1]);
        flag=false;
       }
    }
    if(flag==true)break;
 }
 for (int i = 0; i <9; i++)
 {
    cout<<arr[i]<<" ";
 }
 
return 0;
}