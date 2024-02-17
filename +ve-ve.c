#include<stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if(a>0){
        printf("%d is a positive number");
    } else if(a<0){
        printf("%d is a negative number");
    } else if(a=0){
        printf(%d is 0);
    }
    return 0;
}