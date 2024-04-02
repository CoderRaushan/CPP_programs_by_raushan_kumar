#include<bits/stdc++.h>
using namespace std;
void binaryseach(vector<int>&nums,int target)
{   bool flag=false;
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==target) 
        {
           if(nums[mid-1]==target)
           {
              high=mid-1;
           }
           else 
           {
            cout<<mid;
            flag=true; 
            break;
           }
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    if(!flag)cout<<"Not Found";
}
int main()
{
 vector<int>nums{1,3,4,5,4,4,4,4,4,4,5,6,7,8,9};
 int x=4;
 binaryseach(nums,x);
return 0;
}