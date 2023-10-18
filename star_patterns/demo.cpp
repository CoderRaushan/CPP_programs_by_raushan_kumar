#include<bits/stdc++.h>
using namespace std;
void  fun(int s)//5
{
   if(s<=0)
   {
    return;
   }
    fun(s-1);//step 1
    cout<<s;//step 2
}
int main()
{
fun(5);
 return 0;
}