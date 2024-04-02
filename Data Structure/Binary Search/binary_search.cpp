#include<bits/stdc++.h>
using namespace std;
int binaryseach(vector<int>&nums,int target)
{
     int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==target) return mid ;
        else if(nums[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main()
{
 vector<int>nums{1,3,4,5,6,7,8,9};
 int target=8;
 cout<<binaryseach(nums,target);
return 0;
}