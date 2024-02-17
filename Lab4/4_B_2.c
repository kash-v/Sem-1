#include<stdio.h>
int main(){
    int p,r,t;
    float si;
    printf("enter principle amount: ");
    scanf("%d", &p);
    printf("enter rate of interest: ");
    scanf("%d", &r);
    printf("enter time: ");
    scanf("%d", &t);
    si=(p*r*t)/100.0;
    printf("simple interest is: %f", si);
    return 0;
}