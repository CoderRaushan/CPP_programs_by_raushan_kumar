#include<bits/stdc++.h>
using namespace std;
int add(int x ,int y)
{
    return x+y;//pass by value
}
int main()
{
 int a ,b;
 cout<<"enter two number";
 cin>>a>>b;

 cout<<add(a,b);

return 0;
}
#include<bits/stdc++.h>
using namespace std;

int add(int &a,int &b)
{
    return a+b;//pass by reference 

}
int main()
{

 int a,b;
 cout<<"enter two number";
 cin>>a>>b;
 add(a,b);
 cout<<add(a,b);
return 0;
}

#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int *temp;//pass by address
    *temp = *a;
    *a = *b;
    *b = *temp;
}
int main()
{
    int x, y;
    cout << "enter a =";
    cin >> x;
    cout << "enter b =";
    cin >> y;
    swap(&x, &y); // j
    cout << "the value of a is:" << endl
         << x << "the value of b is:" << y << endl;
    cout << "new" << endl;
    cout << x << " " << y;
    return 0;
}