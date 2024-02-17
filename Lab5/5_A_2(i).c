#include<stdio.h>
int main(){
    int a,b;
    printf("Enetr first number a=  ");
    scanf("%d", &a);
    printf("Enetr first number b=  ");
    scanf("%d", &b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("value of a is %d \n", a);
    printf("value of b is %d \n", b);
    return 0;

}