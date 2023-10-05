#include<iostream>
using namespace std;
void reverse(string str)
{
  int n=str.length();//7
  for (int i = 0; i <n/2; i++)
  {
    char temp=str[i];//raushan temp=r
    str[i]=str[n-i-1];//7-1
    str[n-i-1]=temp;
  }
  cout<<"Reversed string is:"<<str;
}
int main()
{
    string str;
 cout<<"enter any string to be reverse:"<<endl;
getline(cin,str);
 reverse(str);
return 0;
}