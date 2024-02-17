#include<stdio.h>
void fibonacci(int number){
    int a=0,b=1,sum=0;
    for( int i=1;i<=number;i++){
        sum=a+b;
        printf("%d ",a);
        a=b;
        b=sum;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    fibonacci(n);
}