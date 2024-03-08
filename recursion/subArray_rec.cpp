#include <bits/stdc++.h>
using namespace std;
void subArray(int arr[], vector<int> ans, int n, int idx)
{
    if (idx == n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }

    subArray(arr, ans, n, idx + 1);
    if(ans.size()==0 || arr[idx-1]==ans[ans.size()-1] )
    {
     ans.push_back(arr[idx]);
     subArray(arr, ans, n, idx + 1);
    }
   
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    subArray(arr, v, n, 0);
    return 0;
}

 