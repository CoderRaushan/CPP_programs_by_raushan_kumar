#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str="raushan is a coder and an engineer";
 stringstream s(str);
 string temp;
 while (s>>temp)
 {
   cout<<temp<<endl;
 }
 
return 0;
}