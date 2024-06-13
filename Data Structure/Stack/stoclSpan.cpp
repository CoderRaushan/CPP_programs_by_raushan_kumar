#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int> st;
    ans[0] = 1;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = 1;
        else
            ans[i] = st.top();
        st.push(i);
        ans[i]=i-ans[i];
    }
    return ans;
}

int main()
{
    // Example usage
    vector<int> arr = {100, 80, 60, 70, 60, 75, 85};
    int n = arr.size();
    vector<int> result = nextSmallerElement(arr, n);
    cout << "Next smaller elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
