#include<iostream>
using namespace std;
int main()
{
    int numerator,dinominator,result;
 cout<<"Enter two numbers:"<<endl;
 cin>>numerator>>dinominator;
 try
 {
  if(dinominator==0)
  {
    throw dinominator;
  }
  result=numerator/dinominator;
 }
 catch(int ex)
 {
  cout<<"dinominator zero is not allowed:"<<ex<<endl;
 }
 cout<<result<<endl;
return 0;
}