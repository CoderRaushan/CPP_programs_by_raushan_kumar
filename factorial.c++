#include<iostream>
using namespace std;
int factorial(int n)
{
    if (n > 1)
    {
        return n*factorial(n - 1);
    }
    else 
    {
     return n;
    }
}
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    cout << factorial(n);
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//  int i=1,sum=1,n;
//  cout<<"enter a no to be calculate factorial:";
//  cin>>n;
//  if(n<=0)
//  {
//     cout<<n;
//  }
//  else {
//  while (i<=n)
//  {
//    sum=sum*i;
//    i++;
//  }
//  cout<<sum;
//  }
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,sum=1;
//     cin>>n;
//  for ( int i = 1; i <=n; i++)
//  {
//    sum=sum*i;
//  }
//  cout<<sum;
// return 0;
// }
