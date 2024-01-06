#include<bits/stdc++.h>
using namespace std;
void display( vector<int> &v)
{
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
}
int main()
{
 vector<int>v1;
v1.push_back(1); 
v1.push_back(5);
v1.push_back(2);
v1.push_back(5);
v1.push_back(76);
display(v1);
// int i=0;
// int j=v1.size()-1;
// while (i<=j)
// {
//   int temp=v1[i];
//   v1[i]=v1[j];
//   v1[j]=temp;
//   i++;
//   j--;
// }
// for (int i = 0,j=v1.size()-1;i<=j;i++,j--)
// {
//     int temp=v1[i];
//   v1[i]=v1[j];
//   v1[j]=temp;
// }
reverse(v1.begin(),v1.end());
display(v1);
return 0;
}