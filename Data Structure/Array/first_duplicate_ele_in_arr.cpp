 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
  vector<int>v;
v.push_back(1); 
v.push_back(5);
v.push_back(2);
v.push_back(5);
v.push_back(76);
int idx;
for (int i = 0; i < v.size(); i++)
{
    for (int j=i+1; j <v.size(); j++)
    {
        if(v[i]==v[j])
        {
           idx=i;
            break;
        }
    }
    
}
cout<<"first duplicate element is:"<<v[idx];
 return 0;
 }