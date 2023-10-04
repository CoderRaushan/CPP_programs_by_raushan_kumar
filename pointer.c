//pointers
#include<stdio.h>
int main(){
    int a = 10;
    int *address = &a;
    printf("%p\n",address);
    printf("%d\n",*address);

    
    return 0;
}