#include<stdio.h>
int main(){
    int a, b=2, c, d;
    printf("enter a number: ");
    scanf("%d", &a);
    if (c = a & b){
        d = c % 10;
        if(d==0){
            printf("%d is a even number", a);
        }else {
            printf("%d is a odd number", a);
        }
    }
    return 0;
}
