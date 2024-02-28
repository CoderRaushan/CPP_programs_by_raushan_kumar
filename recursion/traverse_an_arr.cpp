#include<bits/stdc++.h>
using namespace std;
void solve(int n,int arr[]) 
{
if(n<0)return ;
// cout<<arr[n]<<" "; for decending order
solve(n-1,arr);
cout<<arr[n]<<" "; //for acedeing order
}
void solve2(vector<int>&v,int idx) 
{
if(idx==v.size())return ;
cout<<v[idx]<<" ";
solve2(v,idx+1);
}
int main()
{
int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0])-1;
solve(n,arr);
vector<int>v(sizeof(arr)/sizeof(arr[0]));
for (int i = 0; i <sizeof(arr)/sizeof(arr[0]) ; i++)
{
   //v.push_back(arr[i]); 
   v[i]=arr[i];
}
cout<<endl<<"vector wala array hai:"<<endl;
solve2(v,0);
return 0;
}