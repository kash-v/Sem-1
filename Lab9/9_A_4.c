#include<stdio.h>
int main(){
    int n,i=1,a=1;
    scanf("%d", &n);
    while(i<=n){
        a*=i;
        i++;
    }
    printf("%d", a);
    return 0;
}