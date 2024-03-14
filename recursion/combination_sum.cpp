#include <bits/stdc++.h>
using namespace std;
void combibation(vector<int> v, int arr[], int target, int n, int idx)
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
        v.push_back(arr[i]);
        combibation(v, arr, target - arr[i], n,i);
        v.pop_back();
    }
}
int main()
{
    int arr[] = {1, 2, 3, 1};
    vector<int> v;
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    combibation(v, arr, target, n, 0);
    return 0;
}