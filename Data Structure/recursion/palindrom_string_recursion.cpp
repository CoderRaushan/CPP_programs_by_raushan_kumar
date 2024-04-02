#include<bits/stdc++.h>
using namespace std;
bool palindromstr(string str,int i,int j)
{
 if(i>=j) return true;
 if(str[i]!=str[j])
 {
    return false ;
 }
 else return palindromstr(str,i+1,j-1);
}
int main()
{
 string str="papa";
 int i=0;
 int j=str.length()-1;
 cout<<palindromstr(str,i,j);
 return 0;
}