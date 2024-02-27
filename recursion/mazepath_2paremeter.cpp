// for printing no of ways
// #include<bits/stdc++.h>
// using namespace std;
// int mazepath(int row,int col)
// {
// // base case
// if (row <1 || col < 1) return 0;
// if (row == 1 && col == 1) return 1;
// int right=mazepath(row,col-1);
// int down=mazepath(row-1,col);
// return right+down;
// }
// int main()
// {
// cout<<mazepath(5,5);
// return 0;
// }

// for printing path
#include<bits/stdc++.h>
using namespace std;
void mazepath(int row,int col,string s)
{
// base case
if (row <1 || col < 1) return;
if (row == 1 && col == 1)
{
cout<<s<<endl;
}
mazepath(row,col-1,s+"R");
mazepath(row-1,col,s+"D");
}
int main()
{
mazepath(4,4,"");
return 0;
}