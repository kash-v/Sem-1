#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int i=0;
    if(i<=n){
        printf("%d", i);
        i=i+1;
    } 
    return 0;
}