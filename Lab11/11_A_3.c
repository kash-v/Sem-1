#include<stdio.h>
int main(){
    int n,i,m=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        m=i*n;
        printf("%d X %d = %d\n",n,i,m);
    }
    return 0;
}