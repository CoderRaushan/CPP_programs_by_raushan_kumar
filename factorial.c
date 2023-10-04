#include<stdio.h>
int main ()
{
while(1==1)
{

int n,fact=1,i ;
printf("Enter a number:");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    fact=fact*i;
}
    printf(" the factorial of the given numbrer is:%d \n",fact);
}
return 0;
}