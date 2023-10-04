#include<iostream>
using namespace std;
int main()
{
 double total_orderAmount,discount_percentage,store;
 cout<<"Enter your total_amount:$";
 cin>>total_orderAmount;
 store=(total_orderAmount<50)?0: (total_orderAmount<100)?0.05:0.1;
 double discountAmount=total_orderAmount*store;
 double total_orderAmount_after_discount=total_orderAmount-discountAmount;
 cout<<"discountPercentage is:"<<store*100<<"%"<<endl;
 cout<<"discountAmount is:"<<"$"<<discountAmount<<endl;
 cout<<"total_orderAmount after discount is:"<<total_orderAmount_after_discount<<"$"<<endl;
return 0;
}