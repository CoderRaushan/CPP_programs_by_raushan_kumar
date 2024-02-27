// for printing no of ways
// #include<bits/stdc++.h>
// using namespace std;
// int mazepath(int sr,int sc,int er,int ec)
// {
// // base case
// if (sr > er || sc > ec) return 0;
// if (sr == er && sc == ec) return 1;
// int right=mazepath(sr,sc+1,er,ec);
// int down=mazepath(sr+1,sc,er,ec);
// return right+down;
// }
// int main()
// {
// cout<<mazepath(0,0,4,4);
// return 0;
// }

// for printing path

#include<bits/stdc++.h>
using namespace std;
void mazepath(int sr,int sc,int er,int ec,string s)
{
// base case
if (sr > er || sc > ec) return ;
if (sr == er && sc == ec) 
{
    cout<<s<<endl;
    return;
}
mazepath(sr,sc+1,er,ec,s+"R");
mazepath(sr+1,sc,er,ec,s+"D");

}
int main()
{
mazepath(0,0,2,2,"");
return 0;
}