#include<bits/stdc++.h>
int fun(int s)
{ if(s<=0)

{
    return s;
}
 return s+fun(s-1);

}
using namespace std;
int main()
{
 cout<<fun(5);//5+4+3+2+1
return 0;
}