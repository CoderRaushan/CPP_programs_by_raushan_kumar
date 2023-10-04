#include<iostream>
using namespace std;
void first_dig(int r)
{
while(r>=10)
{
    r=r/10;
}
cout<<r;
}
int main()
{ int n;
   cout<<"enter a number:";
    cin>>n;
   first_dig(n); 

return 0;
}