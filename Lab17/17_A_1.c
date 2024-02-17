#include<stdio.h>
int main(){
    int a=10;
    int* p=&a;
    printf("Value of variable is: %d\n",*p);
    printf("address of the variable is: %p",p);
    return 0;
}