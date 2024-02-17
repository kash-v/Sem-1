#include<stdio.h>
int main(){
    int x,y,i=1,n=1;
    scanf("%d %d", &x, &y);
    while (i<=y){
        n=n*x;
        i++;
    }
    printf("%d",n);
    return 0;
}