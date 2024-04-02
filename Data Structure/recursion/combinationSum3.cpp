#include<bits/stdc++.h>
using namespace std;
void combination(vector<int> v, vector<vector<int>>& ans, vector<int>& candidates, int target, int idx, int k) {
    if (target == 0 && k == 0) {
        ans.push_back(v);
        return;
    }
    if (target < 0 || k < 0)
        return;
    if (idx == candidates.size())
        return;
    for (int i = idx; i < candidates.size(); i++) 
    {
        v.push_back(candidates[i]);
        combination(v, ans, candidates, target - candidates[i], i + 1, k - 1);
        v.pop_back();
    }
}
vector<vector<int>> combinationSum(int k, int n) 
{
    vector<vector<int>> ans;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> ds;
    combination(ds, ans, arr, n, 0, k);
    return ans;
}

int main() 
{
    int k = 3;
    int n = 7;
    vector<vector<int>> result = combinationSum(k, n);
    cout << "Combinations for k=" << k << " and n=" << n << ":" << endl;
    for (const auto& combination : result) 
    {
        cout << "[ ";
        for (int num : combination) 
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
