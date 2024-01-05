#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v;
v.push_back(1); 
v.push_back(5);
v.push_back(2);
v.push_back(5);
v.push_back(76);
int x=5;
int index=-1;
for ( int i=v.size()-1; i >= 0; i--)
{
    if(v[i]==x)
    {
        index=i;
        break;
    }
}
cout<<index;
return 0;
}