#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v1,vector<int>&v2,vector<int>&ans,int n1,int n2)
{
    int i=0;int j=0;int k=0;
    while(i<n1 && j<n2)
    {
        if(v1[i]<=v2[j])
        {
          ans[k]=v1[i];
           i++;
           k++;

        }
        else
        {
             ans[k]=v2[j];
            j++;
            k++;
        }
    }
    if(i==n1)
    {
       while (j<n2)
       {
        ans[k]=v2[j];
        j++;
        k++;
       }
       
    }
    if(j==n2)
    {

       while (i<n1)
       {
        ans[k]=v1[i];
        i++;
        k++;
       }
    }

}
int main()
{
 vector<int>v1{3 ,6 ,9};
 int n1=v1.size();
 vector<int>v2{4,10};
 int n2=v2.size();
 vector<int>ans(n1+n2);
 merge(v1,v2,ans,n1,n2);
 for (int i = 0; i <ans.size(); i++)
 {
    cout<<ans[i]<<" ";
 }
 
return 0;
}