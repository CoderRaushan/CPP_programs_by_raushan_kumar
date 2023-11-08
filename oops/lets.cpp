#include<bits/stdc++.h>
using namespace std;
class Complex  
{
  private:
  int real;
  int img;
  public:
  Complex()
  {
  real=0;
  img=0;
  }
  Complex(int r,int i)
  {
  real=r;
  img=i;
  }
  void display()
  {
    cout<<real<<"+"<<img<<"i"<<endl;
  }
  Complex operator +(Complex c3)
  {
  Complex result;
  result.real=real+c3.real;
  result.img=img+c3.img;
  return result;
  }
  };
int main()
{
 Complex c1(2,4);
Complex c2(1,3);
Complex c3;
c3=c1+c2;
c3.display();
return 0;
}