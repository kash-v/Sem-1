#include<stdio.h>
int main(){
    int a,n,i=1,sum=0;
    scanf("%d",&n);
    while(i<=n){
        a=n%10;
        n=n/10;
        sum=(sum*10)+a;
    }
    printf("Reversed number is: %d", sum);
    return 0;
}