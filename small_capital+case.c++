#include<iostream>
using namespace std;
int main()
{
  char ch;
  cout<<"Enter any Alphabet :\n";
  cin>>ch;

 if(ch>='a'&&ch<='z')
 {
   cout<<"You entered  Lowercase alphabet\n";
   //ch=ch-32;
  // cout<<"\nThe uppercase alphabet is "<<ch;
 }
 else
 {
   cout<<"You entered an Uppercase alphabet\n";
 //  ch=ch+32;
  // cout<<"Lowercase alphabet is "<<ch;
 }
 return 0;

}                                               