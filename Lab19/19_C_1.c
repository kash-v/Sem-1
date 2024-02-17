#include<stdio.h>

int revNum(int num){
    //a=n%10
    //n=n/10
    //sum=(sum*10)+a      (sum=0)
    if(num!=0){
        return (num%10);
        revNum(num/10);
    }
}

int main(){
    int n,m;
    scanf("%d",n);
    m=revNum(n);
    printf("the reversed number is %d",m);
    return 0;
}