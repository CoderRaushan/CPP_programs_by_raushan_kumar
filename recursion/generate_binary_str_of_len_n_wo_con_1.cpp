#include<bits/stdc++.h>
using namespace std;
void binary(string str,int n)
{
if(str.length()==n)
{
 cout<<str<<endl;
 return;
}
binary(""+0,n);
binary(""+1,n);
}
int main()
{
int n=4;
binary("",n);
return 0;
}