#include<bits/stdc++.h>
using namespace std;
int sumOfAllDivisors(int n)
{
    int sum=0;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
        if(i%j==0 )
        {
            sum=sum+j;
        }
    }
}
return sum;	
}
int main()
{
 cout<<sumOfAllDivisors(3);
return 0;
}