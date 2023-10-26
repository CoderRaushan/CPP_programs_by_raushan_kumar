#include<bits/stdc++.h>
using namespace std;
int main()
{
 try
 {
    try
    {
      throw 20;
    }
    catch(int e)
    {
        cout<<"exception occurs in innerblock:"<<e<<endl;
        throw;//rethrowing.
    }
 }
 catch(int e)
 {
    cout<<"exception occurs in outerblock:"<<e<<endl;
 }
 
return 0;
}