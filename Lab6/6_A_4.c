#include<stdio.h>
    int main(){
        int a, n;
        printf("enter a number: ");
        scanf("%d", &n);
        a = n/10;
        if (a%2==0){
            printf("%d is a even number");
        } else{
            printf("the number is odd")
        }
    return 0;
    }