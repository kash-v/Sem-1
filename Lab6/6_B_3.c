#include<stdio.h>
int main(){
    int a, b, c, n;
    printf("enter side of a triangle: ");
    scanf("%d", &a);
    printf("enter side of a triangle: ");
    scanf("%d", &b);
    printf("enter side of a triangle: ");
    scanf("%d", &c);
    if (a==b && b==c && c==a){
        printf("It is an equilateral triangle");
    } if (a==b || b==c || c==a){
        printf("It is an isoceles triangle");
    } if ((c*c)==(a*a)+(b*b) || (b*b)==(a*a)+(c*c) || (a*a)==(b*b)+(c*c)){
        printf("It is a right angle triangle");
    } if (a!=b && b!=c && c!=a)
        printf("It is scalene triangle");
    
    return 0;
}

