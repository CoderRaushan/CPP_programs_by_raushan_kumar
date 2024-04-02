#include <bits/stdc++.h>
using namespace std;
void lastoccurrence(vector<int> &nums, int target,vector<int>&ans)
{
    bool flag = false;
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            if (nums[mid + 1] == target)
            {
                low = mid + 1;
            }
            else
            {
                flag = true;
                 ans.push_back(mid);
                 return;
            }
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (flag == false)
       ans.push_back(-1);
}
void firstoccurrence(vector<int> &nums, int target,vector<int>&ans)
{
    bool flag = false;
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            if (nums[mid - 1] == target)
            {
                high = mid - 1;
            }
            else
            {
                flag = true;
                 ans.push_back(mid);
                 return;
            }
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (!flag)
         ans.push_back(-1);
}
int main()
{
    vector<int> nums{5,7,7,8,8,10};
    int x = 8;
    vector<int> ans;
    firstoccurrence(nums, x,ans);
   lastoccurrence(nums, x,ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}