#include<stdio.h>
int main(){
    int n,i=1;
    do{
        printf("%d\n", i);
        i++;
        if(i%2==1){
            printf("%d\n", i);
        }i++;

    }while(i<10);
    
    scanf("%d", &n);
    i=1;
    do{
        printf("%d",i);
        i++;
    }while(i<=n);
    return 0;
}