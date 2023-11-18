//file writting operation
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch[100];
 cout<<"Enter your name & age:"<<endl;
cin.getline(ch,100);
ofstream fout;
fout.open("notepad.txt",ios::app);
fout<<ch;
fout.close();
return 0;
}




