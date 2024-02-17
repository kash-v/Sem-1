#include<stdio.h>
int sumNum(int num,int a){
    int sum=0;
    if(a<=num){
        sum=sum+a;
        sumNum(num, (a+1));
    }
}
int main(){
    int n;
    int a;
    scanf("%d",&n);
    scanf("%d",&a);
    sumNum(n,a);
    return 0;
}
