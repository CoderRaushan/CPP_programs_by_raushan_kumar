#include<bits/stdc++.h>
using namespace std;
template<typename T>//T=int ,float ,double ;
T add(T a, T b)
{
    return (a+b);
}

template<typename T,typename U>
U sub(T a,U b)
{
return (a-b);
}
int main()
{
    /*this is for additon of two number*/
    cout<<"additon operation shown below"<<endl<<endl;
cout<<"the sum of two number is:"<<add<int>(3,4)<<endl;
cout<<"the sum of two number is:"<<add<float>(3.5f,4.3f)<<endl;
cout<<"the sum of two number is:"<<add<double>(3.433,4.543)<<endl;
cout<<endl<<endl;
cout<<"subtraction operation shown below"<<endl<<endl<<endl;
 /*this is for subtraction of two number*/
 cout<<"the subtraction of two number is:"<<sub<int>(6,4)<<endl;
cout<<"the subtraction of two number is:"<<sub<float>(7,4.3f)<<endl;
cout<<"the subtraction of two number is:"<<sub<double>(9,4.543)<<endl;
return 0;
}