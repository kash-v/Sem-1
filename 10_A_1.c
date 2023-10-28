#include<stdio.h>
int main(){
    int n,ld,fd, sum=0,mul=1,cpn,a;
    scanf("%d",&n);
    cpn=n;
    ld=n%10;
    for(;n!=0;){
        n=n/10;
        mul=mul*10;
    }
    a=mul/10;
    fd=cpn/a;
    sum=ld+fd;
    printf("the sum of first and last digit is: %d", sum);
    return 0;
}