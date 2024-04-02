#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &v1, vector<int> &v2, vector<int>&ans, int n1, int n2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])
        {
            ans[k] = v1[i];
            i++;
            k++;
        }
        else
        {
            ans[k] = v2[j];
            j++;
            k++;
        }
    }
    if (i == n1)
    {
        while (j < n2)
        {
            ans[k] = v2[j];
            j++;
            k++;
        }
    }
    if (j == n2)
    {

        while (i < n1)
        {
            ans[k] = v1[i];
            i++;
            k++;
        }
    }
}
vector<int> sortArray(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums;
    int n1 = n / 2;
    int n2 = n - n / 2;
    vector<int> a(n1);
    vector<int> b(n2);
    for (int i = 0; i < n1; i++)
    {
        a[i] = nums[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = nums[i+n1];
    }
    sortArray(a);
    sortArray(b);
    b.clear(); a.clear();//space complexity becomes o(n)
    merge(a, b,nums,n1,n2);
    return nums;
}
int main()
{
     vector<int>nums{5,1,1,2,0,0};
     for (int i = 0; i < nums.size(); i++)
    {
     cout<<nums[i]<<" ";
    }
    cout<<endl;
    nums=sortArray(nums);
    for (int i = 0; i < nums.size(); i++)
    {
     cout<<nums[i]<<" ";
    }
    
}
