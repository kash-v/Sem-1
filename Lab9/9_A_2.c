#include<stdio.h>
int main(){
    int n,i=1, m;
    scanf("%d", &n);
    while(i<=10){
        m=i*n;
        printf("%d X %d = %d\n",n,i,m);
        i++;
    }
    return 0;
}