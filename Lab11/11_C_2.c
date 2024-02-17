#include<stdio.h>
int main(){
    int x,y,i,cpx;
    scanf("%d %d",&x,&y);
    cpx=x;
    int n=0;
    
    for(i=1;i<=y;i++){
        n=n+x;
        x=n;
        
    }
    printf("%d to the power %d is %d",cpx,y,n);
    return 0;
}