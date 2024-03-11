#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
  string helper(string str, int k, string ans) 
  {
    int n = str.length();
    if (n == 0) 
    {
      return ans;
    }
    int fact = 1;
    for (int i = 2; i <= n - 1; i++) 
    {
      fact = fact * i;
    }
    int idx = k / fact;
    if (k % fact == 0) 
    {
      idx--;
    }
    char ch = str[idx];
    string left = str.substr(0, idx) + str.substr(idx + 1);
    int pass = k - fact * idx;
    return helper(left, pass, ans + ch);
  }

  string getPermutation(int n, int k) 
  {
    string str = "";
    for (int i = 1; i <= n; i++) 
    {
      str = str + to_string(i);
    }
    return helper(str, k, "");
  }
};

int main() {
  Solution solution;
  int n = 3;
  int k = 3;
  string result = solution.getPermutation(n, k);
  cout << "The " << k << "-th permutation is: " << result << endl;
  return 0;
}
