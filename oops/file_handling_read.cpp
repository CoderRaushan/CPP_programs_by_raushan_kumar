//file reading operation
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string ch;
 ifstream inf;
 inf.open("notepad.txt");
 getline(inf,ch);
 cout<<"file read operation:"<<ch<<endl;
 inf.close();
return 0;
}