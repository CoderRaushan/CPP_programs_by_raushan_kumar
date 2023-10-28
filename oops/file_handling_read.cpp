#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100];
 ifstream inf;
 inf.open("notepad.txt");
 inf.getline(ch,100);
 cout<<"file read operation:"<<ch<<endl;
 inf.close();
return 0;
}