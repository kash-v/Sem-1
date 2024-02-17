#include<stdio.h>
int main(){
    int a=10,b=20;
    int *p=&a;
    int *p1=&b;
    printf("sum of a and b is %d",(*p)+(*p1));
    return 0;
}