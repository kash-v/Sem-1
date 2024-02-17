#include<stdio.h>
int factorial(int num){
    int i,c=1;
    for(i=1;i<=num;i++){
        c*=i;
    }
    return c;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("factorial of %d is %d",n,factorial(n));
    return 0;
}