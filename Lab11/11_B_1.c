#include<stdio.h>
int main(){
    int a=0,b=1,n,i,sum=0;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        sum=a+b;
        printf("%d ",a);
        a=b;
        b=sum;
        
    }
    return 0;
}