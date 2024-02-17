#include<stdio.h>
int main(){
    int i,n,j,b=1;
    float a,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<=i;j++){
            b*=j;
        }
        a=(1.0/b);
        sum= sum + a;
    }
    printf("%f",sum);
    return 0;
}