#include<bits/stdc++.h>
using namespace std;
int main()
{
 int *p=new int ;
 if(p==nullptr)
 {
    cout<<"memory allocation fail:"<<endl;
 }
 *p=14;
 cout<<"memory allocated:"<<*p;
 delete p;
return 0;
}