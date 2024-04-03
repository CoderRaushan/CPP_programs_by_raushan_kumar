#include<bits/stdc++.h>
using namespace std;
void binaryseach(vector<int>&nums)
{  
    int n=nums.size();
    int ans=-1;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==mid) 
        {
           low=mid+1;
        }
        else 
        {
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans;
}
int main()
{
 vector<int>nums{0,1,2,3,4,5,6,7,8,9};
 binaryseach(nums);
return 0;
}