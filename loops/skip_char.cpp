#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str="raushan kumar";
 string str1="";
 for(int i=0;i<str.length();i++)
 {
    if(str[i]!='a')
    {
      str1=str1+str[i];
    }
 }
cout<<"wihtout skip:"<<endl;
cout<<str<<endl;
cout<<"after skip:"<<endl;
cout<<str1;
return 0;
}