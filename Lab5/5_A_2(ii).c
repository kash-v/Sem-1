#include<stdio.h>
int main(){
    int a,b;
    int c=0;
    printf("a is ");
    scanf("%d",&a);
    printf("b is ");
    scanf("%d",&b);
    c = b;
    b = a;
    a = c;
    printf("value of a is %d \n", a);
    printf("value of b is %d \n", b);
    return 0;
}