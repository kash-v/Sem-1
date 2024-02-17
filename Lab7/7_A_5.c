#include<stdio.h>
int main(){
    int n, a;
    printf("enter number: ");
    scanf("%d", &n);
    a=(n%2==0)?printf("even"):printf("odd");
   
    return 0;
}