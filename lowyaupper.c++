#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter any value:";
    cin>>c;
    if(c>='0' && c<='9')
    {
        cout<<"you enterd a numericle value"<<endl;
         return 0;
    } 
    
    else
    {
        cout<<"you enterd a character value"<<endl;
    }
    if(c>='a' && c<='z')
    {
        cout<<"you enterd a lowercase character"<<endl;
    }
    else
    {
        cout<<"you enterd a uppercase character"<<endl;
    }
return 0;
}