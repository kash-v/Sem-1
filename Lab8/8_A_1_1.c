#include<stdio.h>
int main(){
    int n,i=1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }

    scanf("%d",&n);
    i=1;
    while(i<=n){
        printf("%d",i);
        i++;
    }
    return 0;
}