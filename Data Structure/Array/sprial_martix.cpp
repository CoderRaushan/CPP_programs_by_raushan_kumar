#include<bits/stdc++.h>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>>&MATRIX) 
{
 int n=MATRIX.size();
 int m=MATRIX[0].size();
 int top=0;
 int left=0;
 int bottom=n-1;
 int right=m-1;
 vector<int>ans;
while(left<=right && top<=bottom)
{
 for(int i=left;i<=right;i++)
 {
  ans.push_back(MATRIX[top][i]);
 }
 top++;
 for(int i=top;i<=bottom;i++)
 {
  ans.push_back(MATRIX[i][right]);
 }
 right--;
 if(top<=bottom)
 {
   for(int i=right;i>=left;i--)
   {
     ans.push_back(MATRIX[bottom][i]);
   }
 }
bottom--;
if(left<=right)
{
for(int i=bottom;i>=top;i--)
 {
  ans.push_back(MATRIX[i][left]);
 }
}
 left++;
}
return ans;
}



int main() 
{
    // Example usage
    vector<vector<int>> matrix = 
    {
        {1, 2, 3,10,11},
        {4, 5, 6,12,13},
        {7, 8, 9,14,15},
        {16,17,18,19,20},
        {21, 22, 23,24,25}

    };

    vector<int> result = spiralMatrix(matrix);

    // Print the result
    cout << "Spiral Order: ";
    for (int num : result) 
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}