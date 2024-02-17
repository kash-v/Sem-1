#include<stdio.h>
int power(int num,int a){
    int mul=1;
    for(int i=1;i<=a;i++){
        mul=mul*num;
    }
    return mul;
}
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int c=power(n,x);
    printf("the power of %d is %d",n,c);
    return 0;
}