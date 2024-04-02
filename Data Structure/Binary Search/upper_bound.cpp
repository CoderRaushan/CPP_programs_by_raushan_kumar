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
            flag=true;
            cout<<nums[mid+1];
            break;
        }
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    if(flag==false) cout<<nums[low];
}
int main()
{
 vector<int>nums{1,2,3,4,5,6,7,8,9};
 int x=5;
 binaryseach(nums,x);
 return 0;
}