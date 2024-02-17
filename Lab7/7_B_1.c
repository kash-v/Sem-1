#include<stdio.h>
int main(){
    int a,b,c,n, max;
    scanf("%d %d %d", &a,&b,&c);
    max=(a>b)?a:b;
    n=max*c;
    printf("%d",n);
    return 0;
}