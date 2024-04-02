#include<bits/stdc++.h>
using namespace std;
int main()
{
 string arr[]={"0123","0023","456","00182","940","0002901"};
 int n=sizeof(arr)/sizeof(arr[0]);
  int max=stoi(arr[0]);
  int idx=0;
  string maxstr;
  for (int i = 1; i <n; i++)
  {
   int x=stoi(arr[i]);
   if(x>max) 
   {
    max=x;
    maxstr=arr[i];
    idx=i;
   }
  }
  cout<<"idx:"<<idx<<" "<<"value is:"<<max<<endl;
  cout<<"original string value is:"<<maxstr<<endl;
  
return 0;
}