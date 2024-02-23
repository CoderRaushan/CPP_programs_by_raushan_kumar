#include <bits/stdc++.h>
using namespace std;
void fun(int i,int n)
{
    if(i>n) return;
    cout<<i<<endl;
    fun(i+1,n);
}
int main()
{
    fun(8,20);
    return 0;
}