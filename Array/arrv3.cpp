#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>v; //capasity     size
 v.push_back(1);//1           1
 v.push_back(2);//2           2
 v.push_back(3);//4           3
 v.push_back(4);//4           4
 v.push_back(5);//8           5
 v.push_back(6);//8           6
 v.push_back(7);//8           7
 v.push_back(8);//8           8
 v.push_back(9);//16          9
 int n=v.size();
 cout<<"capasity of vector:"<<v.capacity()<<endl;
 cout<<"size of vector:"<<n<<endl;
for (int i = 0; i < v.size(); i++)
{
   cout<<v[i]<<" ";
}
v.pop_back();
cout<<endl;
 int n1=v.size();
 cout<<"capasity of vector:"<<v.capacity()<<endl;
 cout<<"size of vector:"<<n1<<endl;

for (int i = 0; i < v.size(); i++)
{
   cout<<v[i]<<" ";
}

return 0;
}