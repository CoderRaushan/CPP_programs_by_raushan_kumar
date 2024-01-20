#include<bits/stdc++.h>
using namespace std;

int main() 
{
    vector<vector<int>> 
    rotateMatrix ={ {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
      int n = rotateMatrix.size();
     cout<<"original matrix:"<<endl;
    for (int i=0;i<n;i++) 
    {
        for (int j=0;j<n;j++) 
        {
            cout <<rotateMatrix[i][j] << ' ';
        }
        cout <<endl;
    }
    
     vector<vector<int>> ans(n,vector<int>(n, 0));
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            ans[j][(n - 1) - i] = rotateMatrix[i][j];
        }
    }
    rotateMatrix = ans;
    cout<<"rotated matrix:"<<endl;
    for (int i=0;i<n;i++) 
    {
        for (int j=0;j<n;j++) 
        {
            cout <<rotateMatrix[i][j] << ' ';
        }
        cout <<endl;
    }

}

