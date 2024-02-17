#include<stdio.h>
int add(int num,int num1){
    return num+num1;
}
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("Addition of two numbers is %d",c);
    return 0;
}