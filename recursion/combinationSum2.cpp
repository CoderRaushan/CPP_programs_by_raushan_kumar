#include <bits/stdc++.h>
using namespace std;
void combibation(vector<int> v,  vector<int> arr, int target, int n, int idx)
{
    if (target == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    if (target < 0)
        return;
    for (int i = idx; i <n; i++)
    {
        if(i>idx && arr[i]==arr[i-1])continue;
        if(arr[i]>target)break;
        v.push_back(arr[i]);
        combibation(v, arr, target - arr[i], n,i+1);
        v.pop_back();
    }
}
int main()
{
    vector<int> v;
    vector<int> arr={1, 2, 3, 1};
    sort(arr.begin(),arr.end());
    int n =arr.size();
    int target = 5;
    combibation(v, arr, target, n, 0);
    return 0;
}