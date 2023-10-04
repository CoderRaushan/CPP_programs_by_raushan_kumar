#include <iostream>
using namespace std;
void countfun()
{
   static int num = 0;
    num++;
    cout<<num<<endl;
}
int main()
{
    countfun();
    countfun();
    countfun();
    countfun();
    countfun();
    return 0;
}