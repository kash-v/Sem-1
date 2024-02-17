#include<stdio.h>
int main(){
    int a=10,b=20,c;
    int *p=&a;
    int *p1=&b;
    c=*p;
    *p=*p1;
    *p1=c;
    printf("value of a and b is %d and %d",a,b);
    return 0;
}