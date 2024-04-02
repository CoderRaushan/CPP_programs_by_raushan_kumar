#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> pascal(int n)
{

    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        vector<int> a(i + 1);
        v.push_back(a);
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }

    // Move the return statement outside the loop
    return v;
}
int main()
{
    int N;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> N;

    vector<vector<int>> pascalsTriangle = pascal(N);

    // Display Pascal's Triangle
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << pascalsTriangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}