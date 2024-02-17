#include<stdio.h>
int main(){
    int n,a,b,sum=0;
    scanf("%d",&n);
    while(n!=0){
        a=n%10;
        n=n/10;
        sum=sum*10 +a;
    }
    while(sum!=0){
        b=sum%10;
        sum=sum/10;
        printf("%d ",b);
        
    }

    return 0;
}