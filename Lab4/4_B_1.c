#include<stdio.h>
int main(){
    int h,b;
    float A;
    printf("enter height: ");
    scanf("%d", &h);
    printf("enter base: ");
    scanf("%d", &b);
    A = (h*b)/2.0;
    printf("area of triangle: %f", A);
    return 0;
}