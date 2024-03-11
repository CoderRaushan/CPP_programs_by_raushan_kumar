#include <bits/stdc++.h> 
using  namespace std; 
string writeAsYouSpeak(int n) 
{
	if(n==1)return "1";
	string say=writeAsYouSpeak(n-1);
	int fre=1;
	string res="";
	char ch=say[0];
	for(int i=1;i<=say.length();i++)
	{
		char dh=say[i];
       if(ch==dh)
	   {
          fre++;
	   }
	   else
	   {
		  res=res+to_string(fre)+ch;
		  fre=1;
		  ch=dh;
	   }
	}
	return res;
}
int main()
{
    cout<<writeAsYouSpeak(4);
}
