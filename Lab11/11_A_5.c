#include<stdio.h>
int main(){
    int a, n=1, i;
    printf("enter a number: ");
    scanf("%d", &a);
    for(i=1; i<=a; ++i ){
        n*=i;
    }
    printf("The factorial of %d is %d", a, n);
    return 0;
}