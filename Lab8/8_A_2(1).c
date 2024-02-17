#include<stdio.h>
int main(){
    int i=1,n;
    while(i<=10){
        if(i%2==1){
            printf("%d\n",i);
        }
        i++;
    }
    scanf("%d",&n);
    i=1;
    while(i<=n){
        printf("%d", i);
        i++;
    }

    return 0;
}