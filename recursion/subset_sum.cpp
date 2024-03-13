#include<bits/stdc++.h>
using namespace std;
void substing( int arr[],vector<int>&ans,int idx,int n,int sum)
{
   if(idx==n)
   {
    ans.push_back(sum);
    return;
   }
    substing(arr,ans,idx+1,n,sum+arr[idx]);
    substing(arr,ans,idx+1,n,sum); 
  
}
int main()
{
 vector<int>ans;
 int arr[]={1,2,3};
 int n=sizeof(arr)/sizeof(arr[0]);
 int sum=0;
 substing(arr,ans,0,n,sum);
 for (int i = 0; i < ans.size(); i++)
 {
    cout<<ans[i]<<endl;
 }
 
return 0;
}