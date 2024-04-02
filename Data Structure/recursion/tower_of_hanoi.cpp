#include<bits/stdc++.h>
using namespace std;
void toh(int n,char A,char B,char C)
{
if(n==0) return;
toh(n-1,A,C,B);  // Move tower of size n-1 from source A to destination C
cout<<A<<"->"<<C<<endl;
toh(n-1,B,A,C);   // Move tower of size n-1 from source B to destination A
}
int main()
{
toh( 4,'A','B','C');
return 0;
}