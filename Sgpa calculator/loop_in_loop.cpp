#include<iostream>
using namespace std;
int main(){
    int  i=1,j=1; 
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i==2 && j==2){
                continue;
            }
            cout<<i<<" "<<j;
            
        }
    }
    return 0;
}