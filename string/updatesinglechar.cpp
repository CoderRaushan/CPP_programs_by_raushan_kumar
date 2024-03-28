#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str;
 cout<<"Enter a string:";
 getline(cin,str);
 int count=0;
 int i=0;
for (int i = 0; i <str[i]!='\0'; i++)
{
    if(i%2==0)
    {
        str[i]='a';
    }
}

 
 cout<<str<<endl;
return 0;
}