#include<iostream>
using namespace std;
int main()
{
    cout<<"hello"<<endl;
    goto ab;
    cout<<"will be skippd"<<endl;
    cout<<"will be skippd"<<endl;w
    ab:
    cout<<"will be printed";
return 0;
}