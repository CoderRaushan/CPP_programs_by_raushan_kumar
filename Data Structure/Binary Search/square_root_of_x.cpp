#include <bits/stdc++.h> 
using namespace std;
int squareRoot(int a)
{
	  int lo=0;
	  int hi=a;
  while(lo<=hi)
  {
	   int mid =lo+(hi-lo)/2;
	  if(mid*mid==a) 
	  {
		  return mid;
	  }
	  else if(mid*mid<a) lo=mid+1;
	  else hi=mid-1;
  }
  return hi;
}
int main()
{
    int a=20;
    cout<<squareRoot(a);
}
