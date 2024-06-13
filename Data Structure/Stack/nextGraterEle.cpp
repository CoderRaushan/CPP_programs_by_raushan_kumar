    #include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    vector<int> ans(n);
    stack<int> st;
    ans[n-1] = -1;
    st.push(arr[n-1]);
    for (int i = n-2; i >=0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}

int main() {
    // Example usage
    vector<int> arr = {4, 5, 2, 10, 8};
    int n = arr.size();
    vector<int> result = nextSmallerElement(arr, n);
    cout << "Next smaller elements are: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
