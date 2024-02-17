#include<stdio.h>
int avg(int num,int num2){
    return (num+num2)/2;
}

int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=avg(a,b);
    printf("average of the numbers is: %d",c);
    return 0;
}