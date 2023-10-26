#include<bits/stdc++.h>
using namespace std;
int main()
{
    try
    {
        throw "exception error";
    }
    catch(int e)
    {
       cout<<e<<endl;
       cout<<"int block:"<<endl;
    }
     catch(double e)
    {
       cout<<e<<endl;
       cout<<"double block:"<<endl;
    }
    catch(const char* e)
    {
        cout<<e<<endl;
        cout<<"char block:"<<endl;
    }
return 0;
}