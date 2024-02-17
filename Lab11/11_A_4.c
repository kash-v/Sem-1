#include<stdio.h>
int main(){
     int x,y,i=1,n=1;
    scanf("%d %d", &x, &y);
    for(i=1;i<=y;i++){
        n=n*x;
    }
    printf("%d",n);
    return 0;

}