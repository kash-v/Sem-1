#include<stdio.h>
int main(){
    int a,b,c,avg;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter a number: ");
    scanf("%d", &b);
    printf("enter a number: ");
    scanf("%d", &c);
    avg=(a+b+c)/3;
    printf("the average of the 3 numbers is: %d", avg);
    return 0;
}