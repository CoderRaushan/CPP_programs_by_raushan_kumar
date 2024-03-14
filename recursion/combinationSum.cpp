#include<bits/stdc++.h>
using namespace std;
void helper(vector<int> &ARR, int target, int idx, int n, vector<int> ds, vector<vector<int>> &ans)
{
    if (idx == n)
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }
    else
    {
        if (ARR[idx] <= target)
        {
            ds.push_back(ARR[idx]);
            helper(ARR, target - ARR[idx], idx, n, ds, ans);
            ds.pop_back();
        }
        helper(ARR, target, idx + 1, n, ds, ans);
    }
}

vector<vector<int>> combSum(vector<int> &ARR, int B)
{
    sort(ARR.begin(), ARR.end());
    vector<vector<int>> ans;
    
    vector<int> ds;
 
    return ans;
}
int main()
{
    vector<vector<int>>ans;
    vector<int> ARR = {1, 2, 3, 1};
    sort(ARR.begin(), ARR.end());
    vector<int> ds;
    int n = ARR.size();
    int target = 5;
    helper(ARR,target , 0, n, ds, ans);
     for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}