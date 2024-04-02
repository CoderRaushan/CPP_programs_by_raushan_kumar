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


// void rotateMatrix(std::vector<std::vector<int>> &mat)
// {
//     int n = mat.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             // Swap elements mat[i][j] and mat[j][i]
//             int temp = mat[i][j];
//             mat[i][j] = mat[j][i];
//             mat[j][i] = temp;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         std::reverse(mat[i].begin(), mat[i].end());
//     }
// }
